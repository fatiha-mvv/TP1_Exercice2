#pragma once
class Point
{
private:
		double x;
		double y;
		friend class Cercle;
public:
//fusion entre constructeur sans params et avec params
		Point(double x = 0.0, double y = 0.0);
		Point(Point&);
		void afficher() const;
		double distance(const Point& p) const;
		void translate(double dx, double dy);
		bool operator==(const Point& p) const;
		//destructeur
		~Point();
};

