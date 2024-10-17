#include "Cercle.h"
#include <iostream>
#include <cmath>
using namespace std;

const double Cercle::PI = 3.14;

//--------> constructeur avec parametre sans initilized list
Cercle::Cercle(Point p)
{
	this->id = 1;
	this->rayon = 0.0;
	this->centre = p;
	this->perimetre = 0.0;
	this->surface = 0.0;
}

//------> Constructeur avec parametre avec initilized list
Cercle::Cercle(int idd, double r, Point p, double s, double per)
	:id(idd), rayon(r), centre(p), surface(s), perimetre(per)
{}


//------> Constructeur de Recopie sans initilized list
Cercle::Cercle(Cercle& copie)
{
	this->id = copie.id;   
	this->rayon = copie.rayon;
	this->centre = copie.centre; 
	this->surface = copie.surface;  
	this->perimetre = copie.perimetre;     
}

//------> Constructeur de Recopie avec initilized list
Cercle::Cercle(Cercle& copie)
	:id(copie.id), rayon(copie.rayon), centre(copie.centre), surface(copie.surface), perimetre(copie.perimetre)
{}

//------> Fonction d'affichage
void Cercle::afficher() const
{
	cout << "******** Infos de Cercle *******" << endl;
	cout << "Id:  " << this->id << endl;
	cout << "Rayon:  " << this->rayon << endl;
	cout << "Centre:  " << endl;
	this->centre.afficher();
	cout << "Surface:" << this->surface << endl;
	cout << "Perimetre:" << this->perimetre << endl;
}


//-----> Fonction updateRadius
void Cercle::updateRadius(double dr)
{
	this->rayon += dr;
}

//-----> Fonction translate
void Cercle::translate(Point p)
{
	centre.translate(p.x, p.y);
}

//-----> surcharge d'operateur ==
bool Cercle::operator==(const Cercle& c) const
{
	return (this->rayon == c.rayon) && (this->centre == c.centre);
}


//-----> Fonction appartenance
bool Cercle::appartenance(const Point& p) const
{
	double distanceCentrePoint = this->centre.distance(p);
	return distanceCentrePoint <= this->rayon;
}


//------> Destructeur
Cercle::~Cercle()
{
}



