#include "Point.h"
#include <iostream>
using namespace std;

/*
/-------> implementation de constructeur sans initilized list
Point::Point(double x, double y)
{
this->x=x;
this->y=y;
}
*/

// ------->implementation de constructeur avec initilized list
Point::Point(double x, double y) :x(x), y(y)
{}

/*
/-------> implementation de constructeur sans initilized list
Point::Point(Point& p1)
{
this->x=p1.x;
this->y=p1.y;
}
*/

// ------->implementation de constructeur avec initilized list
Point::Point(Point& p1) :x(p1.x), y(p1.y)
{}


// -------> Fonction d'affichage
void Point::afficher()const
{
	cout << "******* les infos de Point ********" << endl;
	cout << "x: " << this->x << endl;
	cout << "y: " << this->y << endl;
}

//-------> Fonction distance
double Point::distance(const Point& p) const
{
	return sqrt(pow(this->x - p.x, 2) + pow(this->y - p.y, 2));
}

//-------> Fonction translate
void Point::translate(double dx, double dy)
{
	this->x += dx;
	this->y += dy;
}

//-------> surcharge d'operateur ==
bool Point::operator==(const Point& p) const
{
	return (this->x==p.x)&&(this->y==p.y);
}


//-----> destructeur
Point::~Point()
{}

