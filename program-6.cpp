#include<iostream>
using namespace std;

int main()
{
    int row,column;

    cout << endl << "ENter The SIze Of The Row : ";
    cin >> row;
    cout << endl << "ENter The SIze Of The Column : ";
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

    int max,min = array[0][0];
    for (i=0; i<row; i++)
    {
        for (j=0; j<column; j++)
        {
            if (array[i][j] > max)
            {
                max = array[i][j];
            }
            if (array[i][j] < min)
            {
                min = array[i][j];
            }
        }
    }

    cout << endl << "The Laargest Number In Array Is : " << max << endl;
    cout << endl << "The Smallest Number In The Array Is : " << min << endl;
    
    return 0;
}