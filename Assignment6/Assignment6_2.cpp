#include<iostream>
using namespace std;

class employee
{
private:
    int id;
    float sal;

public:
    employee()
    {
        cout<<"EMPLOYEE PARAMETERLESS CONSTRUCTOR"<<endl;
        this->id = 0;
        this->sal = 0;
    }

    employee(int empid,float sal)
    {
       cout<<"EMPLOYEE PARAMETERIZED CONSTRUCTOR"<<endl;
        this->id = 0;
        this->sal = 0; 
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

    void display()
    {
        cout<<"****************************************"<<endl;
        cout<<"Employee ID :"<<this->id<<endl;
        cout<<"Employee Salary :"<<this->sal<<endl;
        cout<<"*****************************************"<<endl;
    }

    void accept()
    {
        cout<<"Enter ID :";
        cin>>this->id;
        cout<<"Enter Salary :";
        cin>>this->sal;
    }

};

class manager:virtual public employee
{
private:
    float bonus;

public:
    manager()
    {
        cout<<"MANAGER PARAMETERLESS CONSTUCTOR"<<endl;
        this->bonus = 0;
    }

    manager(float bonus)
    {
        cout<<"MANAGER PARAMETERIZED CONSTUCTOR"<<endl;
        this->bonus = bonus;
    }

     int get_bonus()
    {
        return this->bonus;
    }

    void set_bonus(float bonus)
    {
        this->bonus=bonus;
    }
protected:
    void display()
    {
        cout<<"****************************************"<<endl;
        cout<<"Employee bonus :"<<this->bonus<<endl;
        cout<<"*****************************************"<<endl;
    }

    void accept()
    {
        cout<<"Enter bonus :";
        cin>>this->bonus;
    }
};

class salesman:virtual public employee
{
private:
    float comm;

public:
    salesman()
    {
        cout<<"SALESMAN PARAMETERLESS CONSTRUCTOR"<<endl;
        this->comm = 0;
    }

     salesman(float comm)
     {
        cout<<"SALESMAN PARAMETERIZED CONSTRUCTOR"<<endl;
        this->comm = comm;
     }

          int get_comm()
    {
        return this->comm;
    }

    void set_comm(float comm)
    {
        this->comm=comm;
    }

protected:
    void display()
    {
        cout<<"****************************************"<<endl;
        cout<<"Employee comm :"<<this->comm<<endl;
        cout<<"*****************************************"<<endl;
    }

    void accept()
    {
        cout<<"Enter comm :";
        cin>>this->comm;
    }   
};

class sales_manager:public manager,public salesman
{
public:
    sales_manager()
    {
        cout<<"SALES_MANAGER PARAMETERLESS CONSTRUCTOR"<<endl;
    }

    sales_manager(int id,float sal,float bonus,float comm)
    {
       
    }

    void display()
    {
        employee::display();
        salesman::display();
        manager::display();
    }

    void accept()
    {
        employee::accept();
        salesman::accept();
        manager::accept();
    }
};

int main()
{
     sales_manager s;
     manager m;
     s.accept();
     s.display();
    return 0;
}