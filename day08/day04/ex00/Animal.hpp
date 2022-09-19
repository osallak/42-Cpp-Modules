#pragma once
#include <iostream>


class Animal{
	protected:
		std::string type;
	public:
		Animal(void);
		Animal(const Animal& other);
		~Animal(void);
		const std::string getType() const;
		const Animal& operator= (const Animal& other);
};

