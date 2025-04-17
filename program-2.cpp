#include<iostream>
using namespace std;

int main()
{
    int size;

    cout << "Enter The Size Of Array : ";
    cin >> size;

    int array[size][size];

    for (int i=0; i<size; i++)
    {
        for (int j=0; j<size; j++)
        {
            cout << "Enter The Value Of Array["<<i<<"]["<<j<<"] : ";
            cin >> array[i][j];
            cout << endl;
        }
    }

    cout << "The inputed Array Is : " << endl << endl;
    for (int i = 0; i <size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << array[i][j] << " ";
        }
        cout << endl;        
    }
    cout << endl;

    return 0;
}