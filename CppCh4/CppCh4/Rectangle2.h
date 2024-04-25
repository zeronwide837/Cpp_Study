#ifndef __RECTANGLE2_H_
#define __RECTANGLE2_H_

#include "Point2.h"

class Rectangle
{
private:
	Point upLeft;
	Point lowRight;

public:
	Rectangle(const int& x1, const int& y1, const int& x2, const int& y2);
	void ShowRecInfo() const;
};
#endif