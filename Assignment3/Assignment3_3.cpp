#include<iostream>
using namespace std;

class Cylinder
{
private:
    double radius;
    double height;
    double Volume;

public:

Cylinder()
{
    this->height=0;
    this->radius=0;
}

Cylinder(double radius,double height)
{
    this->radius=radius;
    this->height=height;
}

double getRadius()
{
    return this->radius;
}

void setRadius(double radius)
{
    this->radius=radius;
}

double getHeight()
{
    return this->height;
}

void setHeight(double height)
{
    this->height=height;
}

double getVolume()
{
    return 3.14 * this->radius * this->radius * this->height;
}

void printVolume()
{
    cout<<"Volume of Cylinder ="<<this->getVolume()<<endl;
}
};

int menu()
{
    int choice;
    cout<<"**********************************"<<endl;
    cout<<"0. EXIT"<<endl;
    cout<<"1. SET RADIUS "<<endl;
    cout<<"2. GET RADIUS "<<endl;
    cout<<"3. SET HEIGHT "<<endl;
    cout<<"4. GET HEIGHT "<<endl;
    cout<<"5. PRINT VOLUME "<<endl;
    cout<<"***********************************"<<endl;
    cout<<"Enter choice :";
    cin>>choice;
    return choice;
}

int main()
{
    int choice;
    Cylinder c;

    while((choice = menu()) != 0)
    {
        switch(choice)
        {
            case 1:
            double radius;
            cout<<"Enter the radius :";
            cin>>radius;
            c.setRadius(radius);
            break;

            case 2:
            cout<<"Radius is "<<c.getRadius()<<endl;
            break;

            case 3:
            double height;
            cout<<"Enter the height :";
            cin>>height;
            c.setHeight(height);
            break;

            case 4:
            cout<<"Height is "<<c.getHeight()<<endl;
            break;

            case 5:
            cout<<"Volume of Cylinder :"<<c.getVolume()<<endl;
            break;

            default:
            cout<<"WRONG CHOICE NUMBER......"<<endl;
            cout<<"ENTER VALID CHOICE :-"<<endl;
            break;
        }
    }
cout<<"THANKS FOR COMING OUR APP PLEASE VISIT AGAIN....."<<endl;
}