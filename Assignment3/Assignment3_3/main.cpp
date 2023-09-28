#include"./Cylinder.h"
#include"./menu.h"
#include<iostream>
using namespace std;

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
return 0;
}