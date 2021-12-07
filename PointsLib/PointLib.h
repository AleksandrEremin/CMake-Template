
#include <iostream>
using namespace std;


class Point
{
private:
	int Coord_X;
	int Coord_Y;
	int PointType; // 0 - Начало;
				   // 1 - Конец;
public:
	Point() { Coord_X = 0; Coord_Y = 0; }
	Point(int X, int Y, int T);
	~Point() {}

	bool operator>(const Point& P) const;
	bool operator<(const Point& P) const;
	bool operator==(const Point& P) const;

	static double Length(const Point &Pone, const Point &Ptwo);
};
