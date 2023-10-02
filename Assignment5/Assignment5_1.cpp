#include<iostream>
using namespace std;

class student
{
private:
    string name;
    string gender;
    int rollno;
    double marks[3];
public:
    student()
    {
        this->name = " ";
        this->gender =" ";
        this->rollno = 0;   
    }
    student(string name,string gender,int rollno,double marks)
    {
        this->name = name;
        this->gender = gender;
        this->rollno = rollno;
    }

    void accept()
    {
        cout<<"Enter a name =";
        cin>>this->name;
        cout<<"Enter a gender :";
        cin>>this->gender;
        cout<<"Enter a roll no =";
        cin>>this->rollno;
        cout<<"Enter the marks =";
        for(int i=0;i<3;i++)
        {
            cout<<"Subject  "<< i+1 <<" =";
            cin>>this->marks[i];
        }cout<<"Thank you"<<endl;
    
    }

    void display()
    {
        cout<<"Student info"<<endl;
        cout<<"Name = "<<this->name<<endl;
        cout<<"Gender :"<<this->gender<<endl;
        cout<<"Roll no :"<<this->rollno<<endl;

        for(int i=0;i<3;i++)
        {
            cout<<"Marks of students "<<"["<<i<<"]:"<<this->marks[i]<<endl;
        }

        int total =0;
        for(int i=0;i<3;i++)
        {
            total =total + marks[i];
        }
        int percent =(total/3);
        cout<<"Percentage :"<<percent<<"%"<<endl;
    }

    string getName()
    {
        return this->name;
    }

    string getgender()
    {
        return this->gender;
    }

    int getrollno()
    {
        return this->rollno;
    }

    double getmarks()
    {
        for(int i=0;i<3;i++)
        return this->marks[i];
    }
    friend void searchRecords(student arr[],int size);
    friend void sortRecords(student arr[],int size);

};

void searchRecords(student arr[],int size)
{
    int rollno;
    cout << "Enter a roll no u want to search";
    cin>>rollno;
    for (int i = 0; i < size; i++)
    {
        if (arr[i].rollno == rollno)
        {
            cout << "Student is present at index " << i << endl;
            break;
        }
    
    }
}

void sortRecords(student arr[],int size)
{
    for(int j=0;j<size;j++)
    {
        if(arr[j+1].rollno > arr[j+2].rollno)
        {
            cout<< j+1 <<"."<<arr[j+1].rollno<<endl;
            cout<< j+2 <<"."<<arr[j+2].rollno<<endl;
        }
        else
        {
            cout<< j+1 <<"."<<arr[j+2].rollno<<endl;
            cout<< j+2 <<"."<<arr[j+1].rollno<<endl;
        }
    }
}


int menu()
{
    int choice;

    cout<<"0. EXIT"<<endl;
    cout<<"1. Accept"<<endl;
    cout<<"2. Display"<<endl;
    cout<<"3. SEARCH RECORDS"<<endl;
    cout<<"4. SORT RECORDS"<<endl;
    cout<<"Enter choice :";
    cin>>choice;
    return choice;
}

int main()
{
    int choice;
    int size;
    cout<<"Enter the capacity of class " <<endl;
    cin>>size;

    student s[size];
    int counter = 1;
     while((choice = menu()) != 0)
     {
        switch(choice)
        {
            case 1:
            if(counter<size)
            {
                s[counter].accept();
                counter++;
            }
            else
            {
                cout<<"Student admission is full"<<endl;
            }
            break;

            case 2:
             for (int i = 0; i < counter; i++)
            {
                s[i].display();
            }
            break;

            case 3:
            searchRecords(s,counter);
            break;

            case 4:
            sortRecords(s,counter-2);
            break;

            default:
            cout<<"WRONG CHOICE...."<<endl;
            cout<<" ENTER VALID CHOICE...."<<endl;
            break;
        }
     }
cout<<"THANK YOU FOR VISITING OUR APP PLEASE VISIT AGAIN..."<<endl;
return 0;
}



