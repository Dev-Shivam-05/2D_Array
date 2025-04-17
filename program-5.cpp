#include<iostream>
using namespace std;

int main()
{
    int i,size;
    
    cout << endl << "Enter The Size Of Array : ";
    cin >> size;
    
    int array[size];

    for (i=0; i<size; i++)
    {
        cout << "Enter The VAlue Of Array["<<i<<"] : ";
        cin >> array[i];
    }

    int max = array[0],min = array[0];
    for(i=0; i<size; i++)
    {
        if (array[i]>max)
        {
            max = array[i];
        }
        if (array[i]<min)
        {
            min = array[i];
        }
    }

    cout << "The Greatest Number In The Array Is : "<< max << endl;
    cout << "The Smallest Number In The Array Is : "<< min << endl;
    return 0;
}