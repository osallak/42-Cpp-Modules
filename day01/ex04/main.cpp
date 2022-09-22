#include <iostream>
#include <fstream>
#define MAXSIZE 1024

std::string findAndReplace(std::string line, std::string needle, std::string newSubstr)
{
	std::string newStr = "";
	int start = 0;
	size_t index = 0;
	bool flag = true;
	std::string tmp;

	while (true)
	{
		if (flag == false){
			index = line.find(needle, index + 1);
		} else {
			index = line.find(needle, index);
			flag = false;
		} if (index == std::string::npos){
			index = line.length();
		}
		newStr += line.substr(start, index - start);
		if (index == line.length())
			break ;
		newStr += newSubstr;
		start = index + needle.length();
	}
	(void) flag;
	return newStr;
}

void openFile(char *fileName, std::string &needle, std::string &newSubstr)
{
	char buff[MAXSIZE + 1];
	char *newlineChar;

	std::string newLine;
	std::fstream oldFile, newFile;
	std::string tmp = ".replace";
	std::string newFileName = fileName + tmp;;

	oldFile.open(fileName, std::ios::in);
	newFile.open(&newFileName[0] , std::ios::out);
	if (!oldFile.is_open() || !newFile.is_open()){
		std::cerr << "Error: cannot open file" << std::endl;
		return ;
	}
	while (oldFile.eof() == 0)
	{
		oldFile.read(buff, MAXSIZE);
		tmp = buff;
		newLine = findAndReplace(tmp.substr(0, oldFile.gcount()), needle, newSubstr);
		newlineChar = &newLine[0];
		newFile.write(newlineChar, newLine.length());
	}
	
}

int main(int ac, char **av)
{
	if (ac != 4){
		std::cerr << "USAGE : [PROGRAM NAME] [FILENAME] [STRING TO REPLACE] [NEW SUBSTRING]" << std::endl;
		return 0;
	}
	std::string fileName = av[1];
	std::string toReplace = av[2];
	std::string newSubstr = av[3];

	if (fileName.empty() || toReplace.empty() || newSubstr.empty()){
		std::cerr << "Error: Arguments cannot be empty" << std::endl;
		return 0;
	}
	openFile(&fileName[0], toReplace, newSubstr);
}
