/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osallak <osallak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 13:25:11 by osallak           #+#    #+#             */
/*   Updated: 2022/10/20 00:49:58 by osallak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

static bool isInf( const std::string& _input, bool *__doublef)
{
    int count = 0;
    for (size_t i = 0; i < _input.length(); i++){
        if (_input[i] == 'f')
            count++;
        if (count == 2){
            *__doublef = true;
            break;
        }
    }

    return (_input == "-inff" || _input == "+inff" || _input == "-inf" || _input == "+inf" || _input == "nanf");
}

Convert::Convert( std::string _input )
{
    this->_input = _input;
    __isInf = false;
    __isNan = false;
    __data = 0.0f;
    __doublef = false;
}

Convert::Convert( Convert const& other) : _input( other.getInput() )
{
    
}

Convert::~Convert( void )
{
    
}

Convert const& Convert::operator= (Convert const& other)
{
    this->_input = other.getInput();
    return *this;
}

void Convert::toChar( void ) const
{
    if ((__isInf | __isNan) == true){
        std::cout << "char: impossible\n";
        return ;
    }

    int __intData = static_cast<int>(__data);
    
    if (__intData < 32 || __intData > 127){
        std::cout << "char: Non displayable\n";
    } else {
        std::cout << "char: " << static_cast<char>(__intData) << std::endl;
    }
}

void Convert::toInt( void ) const
{
    if ((__isInf | __isNan) == true){
        std::cout << "char: impossible\n";
        return ;
    }
    
    int __intData = static_cast<int>(__data);
    
    std::cout << "int: " << __intData << std::endl;
}

void Convert::toFloat( void ) const
{
    if (__isNan == true){
        std::cout << "float: nanf\n";
    } else if (__isInf){
        std::cout << "float: " << _input;
        if (__doublef == false){
            std::cout << "f";
        }
        std::cout << std::endl;
    } else {
        float __float = static_cast<float>(__data);
        std::cout.precision(1);
        std::cout << "float: " << std::fixed << __float << "f\n";
    }
}

void Convert::toDouble( void ) const
{
    if (__isNan){
        std::cout << "double: nan\n";
    } else if (__isInf){
        std::cout << "double: " << _input.substr(0, 4) << std::endl;
    } else{
        std::cout.precision(1);
        std::cout << "double " << std::fixed << __data << std::endl;
    }
}

void Convert::__convert( void )
{
    if (_input.length() == 1){
        if (!isdigit(_input[0])){
			__data = static_cast<double>(_input[0]);
        } else {
			__data = std::stod(_input);//this is not allowed
		}
    } else{
		if (isInf(_input, &__doublef)){
       		 __isInf = true;
    	} else if (_input == "nan"){
        	__isNan = true;
    	}
	    if ((__isNan | __isInf) == false) {
    	    try {
				__data = std::stod( _input );
				}
				catch (std::exception&){
           		std::cout << "char: impossible\n";
        		std::cout << "int: impossible\n";
        		std::cout << "float: impossible\n";
    			std::cout << "double: impossible\n";
    			return ;
        		}
    	}
	}
    toChar();
    toInt();
    toFloat();
    toDouble();
}

std::string Convert::getInput( void ) const
{
    return _input;    
}