#include "Point.hpp"

static float clacArea(Point const& a, Point const& b, Point const& c)
{
	return (std::abs((a.getX() * (b.getY() - c.getY()) + b.getX() * (c.getY() - a.getY()) + c.getX() * (a.getY() - b.getY())) / 2.0));
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed area1(clacArea(a, b, c));
	Fixed area2(clacArea(point, a,b));
	Fixed area3(clacArea(point, b, c));
	Fixed area4(clacArea(point, a, c));

	if ((area1.getRawBits() * area2.getRawBits() * area3.getRawBits() * area4.getRawBits() ) == 0)
			return (false);

	return ((area2.getRawBits() + area3.getRawBits() + area4.getRawBits()) == area1.getRawBits());
}
