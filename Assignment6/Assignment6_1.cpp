#include<iostream>
using namespace std;

class date
{
private:
    int day;
    int month;
    int year;

public:
    date()
    {
        this->day=0;
        this->month=0;
        this->year=0;
    }

    date(int day,int month,int salary)
    {
        this->day=day;
        this->month=month;
        this->year=year;
    }
int get_day()
    {
        return this->day;
    }

    void set_day(int day)
    {
        this->day=day;
    }

     int get_month()
    {
        return this->month;
    }

    void set_month(int month)
    {
        this->month=month;
    }

     int get_year()
    {
        return this->year;
    }

    void set_year(int year)
    {
        this->year=year;
    }

    void display()
    {
        cout<<this->day<<"/"<<this->month<<"/"<<this->year<<endl;
    }

    void accept()
    {
        cout<<"Enter the day :";
        cin>>this->day;

        cout<<"Enter the month :";
        cin>>this->month;

        cout<<"Enter the year :";
        cin>>this->year;
    }

    bool is_leap_year()
    {
         if ((this->year % 4 == 0 && this->year % 100 != 0) || this->year % 400 == 0)
        {
            cout<<"These year is leap year..."<<endl;
            return true;
        }
        else
        {
        cout<<"These year is not leap year..."<<endl;
        return false;
        }
    }
};

class person
{
private:
    string name;
    string addr;
    date birth_date;
    
public:
    person()
    {
        this->name=" ";
        this->addr=" ";
    }

    person(string name,string addr,int day,int month,int year):birth_date(day,month,year)
    {
        this->name=name;
        this->addr=addr;
    }

    string get_name()
    {
        return this->name;
    }

    void set_name(string name)
    {
        this->name=name;
    }

    string get_addr()
    {
        return this->addr;
    }

    void set_addr(string addr)
    {
        this->addr=addr;
    }

    date get_birth_date()
    {
        return this->birth_date;
    }

    void set_birth_date(date birth_date)
    {
        this->birth_date=birth_date;
    }

    void display()
    {
        cout<<"****************************************"<<endl;
        cout<<"Person Name :"<<this->name<<endl;
        cout<<"Person address :"<<this->addr<<endl;
        cout<<"Person Date of birth =";
        this->birth_date.display();
        this->birth_date.is_leap_year();
        cout<<"****************************************"<<endl;
    }

    void accept()
    {
        cout<<"Enter Name =";
        cin>>this->name;
        cout<<"Enter Address :";
        cin>>this->addr;
        cout<<"Enter Date of birth :"<<endl;
        this->birth_date.accept();
    }
};

class employee
{
private:
    int id;
    float sal;
    string dept;
    date joining;

public:
    employee()
    {
        this->id=0;
        this->sal=0;
        this->dept=" ";
    }

    employee(int empid,float sal,string,string dept,int day,int month,int year):joining(day,month,year)
    {
        this->id=empid;
        this->sal=sal;
        this->dept=dept;
    }

    int get_id()
    {
        return this->id;
    }

    void set_id(int id)
    {
        this->id=id;
    }
    
    int get_sal()
    {
        return this->sal;
    }

    void set_sal(float sal)
    {
        this->sal=sal;
    }

    string get_dept()
    {
        return this->dept;
    }

    void set_dept(string dept)
    {
        this->dept=dept;
    }

    date get_joining()
    {
        return this->joining;
    }

    void set_joining(date joining)
    {
        this->joining=joining;
    }

     void display()
    {
        cout<<"****************************************"<<endl;
        cout<<"Employee ID :"<<this->id<<endl;
        cout<<"Employee Salary :"<<this->sal<<endl;
        cout<<"Employee Department :"<<this->dept<<endl;
        cout<<"Employee Joining Date =";
        this->joining.display();
        cout<<"*****************************************"<<endl;
    }

    void accept()
    {
        cout<<"Enter ID :";
        cin>>this->id;
        cout<<"Enter Salary :";
        cin>>this->sal;
        cout<<"Enter Department :";
        cin>>this->dept;
        cout<<"Enter Joining Date :"<<endl;
        this->joining.accept();
    }
};

int main()
{
    person p1;
    p1.accept();
    p1.display();

    employee e1;
    e1.accept();
    e1.display();
    
    
    return 0;
}