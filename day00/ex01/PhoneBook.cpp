#include "PhoneBook.hpp"


static bool OnlyDigits(std::string PhoneNumber)
{
	bool flag = false;

	for (long unsigned int i = 0; i < PhoneNumber.length(); i++){
		if (std::isdigit(PhoneNumber[i] == 0))
			return (false);
		flag = true;
	}
	if (flag == false)
		return false;
	return (true);
}


int PhoneBook::Add(void)
{
	static int Index = 0;

	std::string FirstName;
	std::string LastName;
	std::string NickName;
	std::string PhoneNumber;
	std::string DarkestSecret;
	std::cout << "Enter First Name: ";
	std::getline(std::cin,FirstName);
	if (std::cin.good() == 0)
		return -1;
	std::cout << "Enter Last Name: ";
	std::getline(std::cin,LastName);
	if (std::cin.good() == 0)
		return -1;
	std::cout << "Enter NickName: ";
	std::getline(std::cin, NickName);
	if (std::cin.good() == 0)
		return -1;
	std::cout <<"Enter Phone Nmber: ";
	std::getline(std::cin, PhoneNumber);
	if (std::cin.good() == 0)
		return -1;
	if (OnlyDigits(PhoneNumber) == 0){
			_error(true);
			return 0;
	}
	std::cout << "Enter Darkest Secret: ";
	std::getline(std::cin, DarkestSecret);
	if (std::cin.good() == 0)
		return -1;
	if (Index > 7)
		Index = 0;
	_Contacts[Index++].SetContactInfos(FirstName, LastName, NickName, PhoneNumber, DarkestSecret);
	this->ContactsNumber++;
	return 0;
}

int  PhoneBook::Search(void)
{
	int Index;
	std::cout << "Saved Contacts" <<  std::endl;
	std::cout << "  Index   |" << " FirstName|" << " LastName  |" << " NickName " << std::endl;
	for (int i = 0; i < ContactsNumber && i < 8; i++){
		DisplayContactInfo(i, true);
		std::cout << std::endl;
	}
	std::cout << "Enter Contact Index" << std::endl;
	std::cin >> Index; std::cin.ignore();
	if (std::cin.eof() || !std::cin.good())
		return -1;
	if (Index >= ContactsNumber || Index > 7 || Index < 0)
		std::cerr << "Index out of range " << std::endl;
	else
		DisplayContactInfo(Index, false);
	return 0;
}
PhoneBook::PhoneBook()
{
	this->ContactsNumber = 0;
}


static void DisplaySpaces(int length)
{
	length = 10 - length;
	for (int i = 0; i < length; i++)
		std::cout << " ";
}
void PhoneBook::DisplayContactInfo(int index, bool flag)
{
	if (flag == false){
		std::cout << "FirstName: " << _Contacts[index].FirstName << std::endl;
		std::cout << "LastName: " << _Contacts[index].LastName << std::endl;
		std::cout << "NickName: " << _Contacts[index].NickName << std::endl;
		std::cout << "PhoneNumber: " << _Contacts[index].PhoneNumber << std::endl;
		std::cout << "DarkestSecret: " << _Contacts[index].DarkestSecret << std::endl;
		return ;
	}
	std::cout << index << "         |"; 
	_Contacts[index].FirstName.length() > 10 ? std::cout <<  _Contacts[index].FirstName.substr(0, 9) << "." : std::cout << _Contacts[index].FirstName, DisplaySpaces(_Contacts[index].FirstName.length());
	std::cout << "| ";
	_Contacts[index].LastName.length() > 10 ? std::cout <<  _Contacts[index].LastName.substr(0, 9) << "." : std::cout << _Contacts[index].LastName , DisplaySpaces(_Contacts[index].LastName.length());
	std::cout  << "| ";
	_Contacts[index].NickName.length() > 10 ? std::cout <<  _Contacts[index].NickName.substr(0, 9) << "." : std::cout << _Contacts[index].NickName , DisplaySpaces(_Contacts[index].NickName.length());

}


void PhoneBook::_error(int flag)
{
	if (flag == true)
		std::cerr << "Phone Number must contain only digits" << std::endl;
	else
		std::cerr << "All fields must contain at least 1 character long" << std::endl;
}
