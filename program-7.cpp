#include<iostream>
using namespace std;

int main()
{
    int row,column,negative_number;

    cout << endl << "Enter The Size Of Row : ";
    cin >> row;

    cout << "Enter The Size Of Column : ";
    cin >> column;

    int array[row][column];

    int i,j;

    for (i=0; i<row; i++)
    {
        for (j=0; j<column; j++)
        {
            cout << "Enter The Value Of Array["<<i<<"]["<<j<<"] : ";
            cin >> array[i][j];
        }
    }
    negative_number = 0;

    for (i=0; i<row; i++)
    {
        for (j=0; j<column; j++)
        {
            if (array[i][j] < negative_number)
            {
                cout << "Negative Values From Matrix Are : " << array[i][j];
            }
        }
    }

    return 0;
}