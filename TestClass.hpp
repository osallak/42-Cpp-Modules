#pragma once
#include <iostream>

class TestClass{
	private:
		std::string	name;
		int	age;
		public:
		TestClass( void );
		~TestClass( void );
		TestClassconst TestClass& operator= ( const TestClass& other );
		(const TestClass& other);
		
};
