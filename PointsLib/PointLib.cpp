#include "PointLib.h"
Point::Point(int X, int Y, int T)
{
	if (T == 1 || T == 0)
	{
		Coord_X = X;
		Coord_Y = Y;
		PointType = T;
	}
	else
	{
		throw std::logic_error("invalid start/end values");
	}
}


bool Point::operator>(const Point& P) const
{
	if (PointType > P.PointType)
		return true;
	else
		return false;
}

bool Point::operator<(const Point& P) const
{
	if (PointType < P.PointType)
		return true;
	else
		return false;
}

bool Point::operator==(const Point& P) const
{
	if (Coord_X == P.Coord_X && Coord_Y == P.Coord_Y && PointType == P.PointType)
		return true;
	else
		return false;
}

double Point::Length(const Point& Pone, const Point& Ptwo)
{
	double Res_0;
	double Res;
	if (Pone == Ptwo)
	{
		throw std::logic_error("the start/end point is set incorrectly");
	}
	else
	{
		if (Pone < Ptwo)
		{
			Res_0 = (Pone.Coord_X - Ptwo.Coord_X);
			Res = (Pone.Coord_Y - Ptwo.Coord_Y);
			Res = sqrt((Res_0 * Res_0) + (Res * Res));
		}
		else
		{
			Res_0 = (Ptwo.Coord_X - Pone.Coord_X);
			Res = (Ptwo.Coord_Y - Pone.Coord_Y);
			Res = sqrt((Res_0 * Res_0) + (Res * Res));
		}
	}
	return Res;
}