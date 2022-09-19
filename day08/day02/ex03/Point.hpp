#pragma once
#include <iostream>
#include "Fixed.hpp"

class Point{
	private:
		Fixed const x;
		Fixed const y;
	public:
		Point();
		Point(const float x, const float y);
		Point(const Point& other);
		Point& operator= (const Point& other);
		const Fixed& getX(void) const;
		const Fixed& getY(void) const;
		~Point();
};

bool bsp( Point const a, Point const b, Point const c, Point const point);
