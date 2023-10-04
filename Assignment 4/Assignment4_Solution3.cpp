#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

// Matrix Class : 2 D array;

class Matrix
{

    // Some Data members as required (length and a double pointer)
private:
    int length;
    int **array;

    // Some Member Functions
public:
    // Parameterless constructor; - - create a 3*3 matrix;
    Matrix()
    {
        this->length = 3;
        this->array = new int *[this->length];
        for (int i = 0; i < this->length; i++)
            this->array[i] = new int[this->length];
    }

    // parameterize constructor; - - create a n*n matrix;
    Matrix(int length)
    {
        this->length = length;
        this->array = new int *[this->length];
        for (int i = 0; i < this->length; i++)
            this->array[i] = new int[this->length];
    }

    // For accpeting values in matrix
    void acceptValues()
    {
        for (int r = 0; r < this->length; r++)
        {
            for (int c = 0; c < this->length; c++)
            {
                cout << "please enter value for row " << r + 1 << " and column " << c + 1 << " : ";
                cin >> this->array[r][c];
            }
        }
    }

    // For printing the matrix

    void print()
    {
        for (int r = 0; r < this->length; r++)
        {
            for (int c = 0; c < this->length; c++)
            {
                cout << this->array[r][c];
            }
            cout << "\n";
        }
    }

    // GetLength fun for operations in global functions
    int getLength()
    {
        return this->length;
    }
    // get array pointer to access the array outside of class
    int **get_array()
    {
        return this->array;
    }
    // for Deallocating memory ;
    ~Matrix()
    {
        for (int i = 0; i < this->length; i++)
            delete this->array[i];
        delete this->array;
    }
};

// Functions for Matrix calculation :
namespace Nmatrix
{
    // code for adding 2 matrix
    void add(Matrix *m1, Matrix *m2)
    {
        int len = m1->getLength();
        Matrix res(len);

        // Calculating the Addition and storing in res;
        for (int i = 0; i < len; i++)
            for (int j = 0; j < len; j++)
                res.get_array()[i][j] = m1->get_array()[i][j] + m2->get_array()[i][j];

        // //printing array
        cout << endl
             << "Sum of two matrix is: " << endl;
        for (int i = 0; i < len; i++)
        {
            for (int j = 0; j < len; j++)
                cout << res.get_array()[i][j] << "  ";
            cout << endl;
        }
    };

    // code for substracting 2 matrix
    void substract(Matrix *m1, Matrix *m2)
    {
        int len = m1->getLength();
        Matrix res(len);

        // calculating the substraction
        for (int i = 0; i < len; i++)
            for (int j = 0; j < len; j++)
                res.get_array()[i][j] = m1->get_array()[i][j] - m2->get_array()[i][j];

        // Printing the result
        cout << endl
             << "Substraction of two matrix is: " << endl;
        for (int i = 0; i < len; i++)
        {
            for (int j = 0; j < len; j++)
                cout << res.get_array()[i][j] << "  ";
            cout << endl;
        }
    };

    // Code for mutiplying 2 Matrix
    void multiply(Matrix *m1, Matrix *m2)
    {
        int len = m1->getLength();
        Matrix res(len);

        //
        for (int i = 0; i < len; i++)
        {
            for (int j = 0; j < len; j++)
            {
                res.get_array()[i][j] = 0;

                for (int k = 0; k < len; k++)
                    res.get_array()[i][j] += m1->get_array()[i][k] * m2->get_array()[k][j];
            }
        }

        // Printing the result
        cout << endl
             << "Multiplication of two matrix is: " << endl;
        for (int i = 0; i < len; i++)
        {
            for (int j = 0; j < len; j++)
                cout << res.get_array()[i][j] << "  ";
            cout << endl;
        }
    }


    //Transpose of a matrix
    void transpose(Matrix *m1)
    {
        int len = m1->getLength();
        Matrix res(len);

        //Calculating the Transpose 
        for (int i = 0; i < len; i++)
        for (int j = 0; j < len; j++)
            res.get_array()[i][j] = m1->get_array()[j][i];

        // Printing the result
        cout << endl
             << "Transpose of the matrix is: " << endl;
        for (int i = 0; i < len; i++)
        {
            for (int j = 0; j < len; j++)
                cout << res.get_array()[i][j] << "  ";
            cout << endl;
        }
    }

    

    

};
using namespace Nmatrix;
int main()
{
    Matrix m1;
    Matrix m2;
    m1.acceptValues();
    m1.print();
    m2.acceptValues();
    m2.print();
    add(&m1, &m2);
    substract(&m1, &m2);
    multiply(&m1, &m2);
    transpose(&m1);

    return 0;
}