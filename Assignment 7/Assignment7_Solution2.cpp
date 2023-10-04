#include <iostream>
using namespace std;

class Product
{

protected:
    int id;
    string title;
    float price;

    char type;

public:
    char getType()
    {
        return type;
    }
    float getPrice()
    {
        return price;
    }

    virtual void accept() = 0;
};

class Book : public Product
{
private:
    string author;

public:
    void accept()
    {
        this->type = 'B';
        cout << "Please Enter Book ID : ";
        cin >> this->id;
        cout << "Please Enter Book title : ";
        cin >> this->title;
        cout << "Please Enter Book author : ";
        cin >> this->author;
        cout << "Please Enter Book price : ";
        cin >> this->price;
    }
};

class Tape : public Product
{
private:
    string artist;

public:
    void accept()
    {
        this->type = 'T';
        cout << "Please Enter Tape ID : ";
        cin >> this->id;
        cout << "Please Enter Tape title : ";
        cin >> this->title;
        cout << "Please Enter Tape artist : ";
        cin >> this->artist;
        cout << "Please Enter Tape price : ";
        cin >> this->price;
    }
};

void calculateBill(Product ptr[])
{
    float amount = 0;
    for (int i = 0; i < 3; i++)
    {
        if (ptr[i].getType() == 'B')
        {
            amount += ptr[i].getPrice() * 0.9;
        }
        else if (ptr[i].getType() == 'T')
        {
            amount += ptr[i].getPrice() * 0.95;
        }
    }
    cout << " total amount = " << amount << endl;
}

int menu()
{
    int flag;
    cout << "-----------------------------------------" << endl;
    cout << "WELCOME TO CPP - BOOK AND TAPE SHOP" << endl;
    cout << "0. Exit" << endl;
    cout << "1. Add a Book " << endl;
    cout << "2. Add a Tape " << endl;
    cout << "3. Calculate bill " << endl;
    cout << "Please enter your choice : ";
    cin >> flag;
    cout << "------------------------------------------" << endl;
    return flag;
}

int main()
{
    Product *ptr[3];
    int i = 0;
    int flag;
    while ((flag = menu()) != 0)
    {

        switch (flag)
        {
        case 1:
            if (i < 3)
            {
                ptr[i] = new Book;
                ptr[i]->accept();
                i++;
            }
            else
            {
                cout << "you can only buy 3 items " << endl;
            }
            break;
        case 2:
            if (i < 3)
            {
                ptr[i] = new Tape;
                ptr[i]->accept();
                i++;
            }
            else
            {
                cout << "you can only buy 3 items " << endl;
            }
            break;
        case 3:
            calculateBill(*ptr);
            break;
        default:
            cout << "Please Try Again :" << endl;
            break;
        }
    }
    for (int i = 0; i < 3; i++)
        if (ptr[i] != NULL)
            delete ptr[i];

    return 0;
}