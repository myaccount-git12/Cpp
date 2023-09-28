#include "./Cylinder.h"

Cylinder::Cylinder()
{
    this->height=0;
    this->radius=0;
}

Cylinder::Cylinder(double radius,double height)
{
    this->radius=radius;
    this->height=height;
}

double Cylinder::getRadius()
{
    return this->radius;
}

void Cylinder::setRadius(double radius)
{
    this->radius=radius;
}

double Cylinder::getHeight()
{
    return this->height;
}

void Cylinder::setHeight(double height)
{
    this->height=height;
}

double Cylinder::getVolume()
{
    return 3.14 * this->radius * this->radius * this->height;
}

void Cylinder::printVolume()
{
    cout<<"Volume of Cylinder ="<<this->getVolume()<<endl;
}