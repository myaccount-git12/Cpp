#ifndef Cylinder_h
#define Cylinder_h
#include<iostream>
using namespace std;

class Cylinder
{
private:
    double radius;
    double height;
    double Volume;

public:
    Cylinder();
    Cylinder(double radius,double height);
    double getRadius();
    void setRadius(double radius);
    double getHeight();
    void setHeight(double height);
    double getVolume();
    void printVolume();
};

#endif