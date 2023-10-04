#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

// Creating Time class :
class Time
{
    // Declaring the required Variables;
private:
    int hour;
    int minutes;
    int seconds;
    // Here comes the functionality :
public:
    // Parameterless Constructor initializing time as 00:00:00 -

    Time()
    {
        this->hour = 0;
        this->minutes = 0;
        this->seconds = 0;
    }

    // Parameterised Constructor initializing with the given parameters;

    Time(int h, int m, int s)
    {
        this->hour = h;
        this->minutes = m;
        this->seconds = s;
    }

    // INSPECTORS

    int getHour()
    {
        return this->hour;
    }
    int getMinutes()
    {
        return this->minutes;
    }
    int getSeconds()
    {
        return this->seconds;
    }

    // Function to print time -

    void printTime()
    {
        cout << "The time is = " << this->hour << " : " << this->minutes << " : " << this->seconds << endl;
    }

    // Mutators -

    void setHour()
    {
        cout << "Enter Hours : ";
        cin >> this->hour;
    }
    void setMinutes()
    {
        cout << "Enter Minutes : ";
        cin >> this->minutes;
    }
    void setSeconds()
    {
        cout << "Enter Seconds : ";
        cin >> this->seconds;
    }
};


int main(){
    

    //Creating Array of objects of Time pointer dynammically;
    Time **tArray = new Time *[5];

    //Creating the Objects Dynamically;
    for (int i=0;i<5;i++)
        tArray[i] =  new Time(i+1,i+1,i+1);
    
    // Displaying and itereating over array:
    for ( int i = 0 ; i < 5 ; i++){
        tArray[i]->printTime();
    }

    // deallocating the heap memory  for objects;
    for (int i=0;i<5;i++)
        delete tArray[i] ;
    
    // deallocating the heap memory for Array
    delete tArray;

    return 0;
}