#include<iostream>
using namespace std;

int main()
{
    int row,column;

    cout << endl << "Enter The Size Of Row : ";
    cin >> row;
    cout << endl << "Enter The Size Of Column : ";
    cin >> column;

    int array_a[row][column],array_b[row][column];

    cout << endl << "Enter Values Of A Matrix :-" << endl;
    for (i=0; i<row; i++)
    {
        for (j=0; j<column; j++)
        {
            cout << "Enter The Value Of Array["<<i<<"]["<<j<<"] : ";
            cin >> array_a[i][j];
        }
    }

    cout << endl << "Enter VAlues Of B Matrix :-" << endl;
    for (i=0; i<row; i++)
    {
        for (j=0; j<column; j++)
        {
            cout << "ENter The Value Of Array["<<i<<"]["<<j<<"] : ";
            cin >> array_b[i][j];
        }
    }

    

    return 0;
}