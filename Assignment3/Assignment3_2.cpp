#include<iostream>
using namespace std;

class tollbooth
{
    private:
    int totalcars;
    double totalmoney;

    public:
    
    tollbooth()
    {
        this->totalcars=0;
        this->totalmoney=0;
    }

    void payingcar()
    {
        this->totalcars++;
        this->totalmoney=this->totalmoney + 0.5;
    }
    
    void nopaycar()
    {
        this->totalcars++;
        this->totalmoney=this->totalmoney+0;
    }
    void printOnConsol()
    {
        cout<<"Total cars passed "<<this->totalcars<<endl;
        cout<<"Total paying cars passed "<<(this->totalmoney)/0.5<<endl;
        cout<<"Total non paying cars passed "<<(this->totalcars)-(this->totalmoney)/0.5<<endl;
        cout<<"Total cash collected "<<this->totalmoney<<endl;
    }
};

int menu()
{
    int choice;
    cout<<"********************************"<<endl;
    cout<<"0. EXIT "<<endl;
    cout<<"1. PAYING CARS  "<<endl;
    cout<<"2. NO PAYING CARS "<<endl;
    cout<<"3. PRINT ON CONSOLE "<<endl;
    cin>>choice;
    return choice;
}

int main()
{
    tollbooth t;
    int choice;

    while((choice = menu()) != 0)
    {
        switch(choice)
        {
            case 1:
            t.payingcar();
            break;

            case 2:
            t.nopaycar();
            break;

            case 3:
            t.printOnConsol();
            break;

            default: 
            cout<<"WRONG CHOICE NUMBER......"<<endl;
            cout<<"ENTER VALID CHOICE :-"<<endl;
        }
    }
cout<<"THANKS FOR COMING OUR APP PLEASE VISIT AGAIN....."<<endl;
return 0;
}