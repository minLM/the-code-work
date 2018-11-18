#include"Circle.h"
double Circle::Area()
{
	return PI*Radius*Radius;
}
double Circle::Circumferece()
{
	return 2 * PI*Radius;
}
double Circle::GetRadius()const
{
	return Radius;
}