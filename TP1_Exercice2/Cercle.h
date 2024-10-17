#pragma once
#include "Point.h"

class Cercle
{
private:
	const static double PI;
	int id;
	double rayon;
	Point centre;
	double surface;
	double perimetre;

public:
	//les constucteurs
	Cercle(Point p);
	Cercle(int, double, Point, double, double);
	Cercle(Cercle&);
	//les methodes
	void afficher() const;
	void updateRadius(double dr);
	void translate(Point p);
	bool operator==(const Cercle& c) const;
	bool appartenance(const Point& p) const;
	~Cercle();
};
