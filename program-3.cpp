#include<iostream>
using namespace std;

int main()
{
    int size;

    cout << "Enter The Size Of Array : ";
    cin >> size;

    int array_a[size][size], array_b[size][size], array_c[size][size];

    cout << "Enter The Values For A Matrix : " << endl << endl;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << "Enter The Element Of Array["<<i<<"]["<<j<<"] : ";
            cin >> array_a[i][j];
        }
        cout << endl;
    }

    
    cout << endl << "Enter The Values For B Matrix : " << endl << endl;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << "Enter The Element Of Array["<<i<<"]["<<j<<"] : ";
            cin >> array_b[i][j];
        }
        
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << array_a[i][j];
        }
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << array_b[i][j];
        }
    }
    
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            array_c[i][j] = array_a[i][j] + array_b[i][j];
        }
    }
    cout << endl << "The Sum Of A Matrix And B Matrix Are : " << endl << endl;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << array_a[i][j] << "  ";
            cout << array_b[i][j] << "  ";
            cout << array_c[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    
    return 0;
}