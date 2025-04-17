#include<iostream>
using namespace std;

int main()
{   
    int size,i;

    cout << endl << "Enter The Size Of Array : ";
    cin >> size;

    int array_a[size],array_b[size],array_c[size];

    cout << endl << "ENter The value Of First Array : " << endl;
    for (i=0; i < size; i++)
    {
        cout << "Enter The Value Of Array["<<i<<"] : ";
        cin >> array_a[i];
    }

    cout << endl << "Eter The Values Of Second Array : " << endl;
    for (i=0; i<size; i++)
    {
        cout << "Enter The Value Of Array["<<i<<"]: ";
        cin >> array_b[i];
    }

    for (i=0; i<size; i++)
    {
        cout << endl << "Element Of First Array["<<i<<"] : " << array_a[i] << endl;
        cout << "Element Of Second Array["<<i<<"] : " << array_b[i] << endl;
        array_c[i] = array_a[i] + array_b[i];
    }
    cout << endl << "Th Sum Of Two Array's A And B Is : " << endl;
    for (i=0; i<size; i++)
    {
        cout << "{" <<  array_c[i] << "}";
    }
    cout << endl;
    return 0;
}