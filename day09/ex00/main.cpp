# include  <iostream>
# include  <string>
# include  <cctype>
# include <map>
# include <list>
# include <algorithm>
# include <iterator>
# include <fstream>
# include <sstream>
# include <list>

std::string parseDate(std::string line, int flag)//flag = 0 => ',' flag = 1 => '|'
{
    char sep = flag ? '|' : ',';
    std::list<std::string> date;
    size_t pos = 0;

    if ((pos = line.find(sep)) == std::string::npos)
        throw std::runtime_error("Error: bad input => " + line);

    std::string dateString = line.substr(0, line.find(sep));
    std::string ret = dateString;
    while ((pos = dateString.find("-")) != std::string::npos) {
        date.push_back(dateString.substr(0, pos));
        dateString.erase(0, pos + 1);
    }
    date.push_back(dateString);

    if (date.size() != 3)
        throw std::runtime_error("Error: bad input => " + line);

    int year = 1970;
    int month = 1;
    int day = 1;   

    for (int i = 0; i < 3; i++) {
        if (date.front().size() != 4 && i == 0)
            throw std::runtime_error("Error: bad input => " + line);
        if (date.front().size() > 2 && date.front().size() < 1 && i != 0)
            throw std::runtime_error("Error: bad input => " + line);
        for (size_t j = 0; j < date.front().size(); j++) {
            if (!isdigit(date.front()[j]))
            throw std::runtime_error("Error: bad input => " + line);
        }
        if (i == 0){
            year = std::stoi(date.front());
        } else if (i == 1) {
            month = std::stoi(date.front());
        } else if (i == 2) {
            day = std::stoi(date.front());
        }
        date.pop_front();
    }
    if (day < 1 || day > 31)
        throw std::runtime_error("Error: invalid date format");
    if (month < 1 || month > 12)
        throw std::runtime_error("Error: invalid date format");
    
    if (month == 4 || month == 6 || month == 9 || month == 11) {
        if (day > 30)
            throw std::runtime_error("Error: invalid date format");
    } else if (month == 2) {
        if (day > 29)
            throw std::runtime_error("Error: invalid date format");
        if (day == 29 && (year % 4 != 0 || (year % 100 == 0 && year % 400 != 0)))
            throw std::runtime_error("Error: invalid date format");
    }

    return (ret);

}

double parseExchangeRate(std::string exRate, std::string date)
{
    //check if exchange rate is valid (double)

    for (size_t i = 0; i < exRate.size(); i++) {
        if (exRate[i] == '-' && i == 0){
            throw std::runtime_error("Error: not a positive number");
        } if (!isdigit(exRate[i]) && exRate[i] != '.')
            throw std::runtime_error("Error: bad input => " + date);
    }
    double tmp;
    try {
        tmp = std::stod(exRate);
    } catch (std::exception &e) { 
            throw std::runtime_error("Error: bad input => " + date);
    }
    if (tmp > INT_MAX)
        throw std::runtime_error( "Error: too large number");
    return tmp;
}

std::map<std::string, double> parseDataBase( void )
{
    std::string date;
    std::map<std::string, double> dataBase;

    std::ifstream file("data.csv");

    if (!file.is_open())
        throw std::runtime_error("Error: while opening database file");
    
    std::string line;

    while (std::getline(file, line))
    {
        if (line.empty()){
            std::cout << "Error: empty line in database file" << std::endl;
            continue;
        } else if (line == "date,exchange_rate"){
            continue;
        }
        try {
            date = parseDate(line, false);
            line = line.substr(line.find(",") + 1);
            dataBase[date] = parseExchangeRate(line, date); 
            // std::cout << date << " " << dataBase[date] << std::endl;
        } catch (std::exception &e) {
            std::cout << e.what() << std::endl;
            continue;
        }
    }
    return dataBase;
}

//! move this to a separate header file
struct PairCompare {
    bool operator()(const std::pair<const std::string, double>& pair, const std::string& str) const {
        return pair.first < str;
    }
    bool operator()(const std::string& str, const std::pair<const std::string, double>& pair) const {
        return str < pair.first;
    }
};

double getExchangeRate(std::string date, std::map<std::string, double> const& dataBase)
{
    std::map<std::string, double>::const_iterator it = dataBase.find(date);

    if (it == dataBase.end())
    {
        it = upper_bound(dataBase.begin(), dataBase.end(), date, PairCompare());
        if (it == dataBase.end() || it != dataBase.begin()){
            it--;
            return it->second;
        } else if (it == dataBase.begin()){
            return it->second;
        } 
    }
    return it->second;
}

void exchange(std::ifstream &inFile, std::map<std::string, double> dataBase)
{
    std::string date;
    (void)(dataBase);
    double amount;
    std::string line;
    size_t pos;

    while (std::getline(inFile, line))
    {
        if (line.empty()){
            std::cout << "Error: empty line in input file" << std::endl;
            continue;
        } else if (line == "date | amount"){
            continue;
        } else if ((pos = line.find(",")) != std::string::npos){
            line.replace(pos, 1, ".");
        } else if ((pos = line.find(".")) != std::string::npos){
            if (line.find(".", pos + 1) != std::string::npos)
                throw std::runtime_error("Error: bad input => " + line);
        }
        line.erase(std::remove(line.begin(), line.end(), ' '), line.end());
        try {
            date = parseDate(line, true);
            line = line.substr(line.find("|") + 1);
            amount = parseExchangeRate(line, date);
            std::cout << date << " => " << amount << " = " << getExchangeRate(date, dataBase) * amount << std::endl;
        } catch (std::exception &e) {
            std::cout << e.what() << std::endl;
            continue;
        }
    }
}

int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cout << "Usage: ./btc <filename>" << std::endl;
        return 1;
    }
    std::ifstream file(av[1]);
    if (!file.is_open())
    {
        std::cout << "Error: while opening input file" << std::endl;
        return 1;
    }

    std::map <std::string, double> dataBase;
    try {
        dataBase = parseDataBase();
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
        return 1;
    }
    exchange(file, dataBase);
}
