#include<iostream>
using namespace std;

int main()
{
    int row,column;

    cout << endl << "Enter The Size Of Row : ";
    cin >> row;
    cout << endl << "Enter The Size Of Column : ";
    cin >> column;

    int array[row][column];

    int i,j;
    for (i=0; i<row; i++)
    {
        for (j=0; j<column; j++)
        {
            cout << "Enter The Value Of Aray["<<i<<"]["<<j<<"] : ";
            cin >> array[i][j];
        }
    }
    cout  << endl;
    
    int choice;
    do
    {
        cout << endl << "The Array Is :- " << endl;
        for (i=0; i<row; i++)
        {
            for (j=0; j<column; j++)
            {
                cout << array[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;
        cout << "Enter 1 For The Sum Of Rows " << endl;
        cout << "Enter 2 For The Sum Of Column " << endl;
        cout << "Enter 3 For The Sum Of Diognioal " << endl;
        cout << "Enter 0 To Exit " << endl;
        cout << "Enter Your Coice : ";
        cin >> choice; 

    
        int index,sum=0;
        switch (choice)
        {
            case 1:
                cout << "Enter The Index Of Row To Sum : ";
                cin >> index;

                for (i=0; i<row; i++)
                {
                    for (j=0; j<column; j++)
                    {
                        if (i==index)
                        {
                            sum += array[i][j];
                        }
                    }
                }
                cout << endl << "Sum Of "<<index<<" Row Is : " << sum << endl;
                break;
            case 2:
                cout << "Enter The Index Of Column To Sum : ";
                cin >> index;

                for (i=0; i<row; i++)
                {
                    for (j=0; j<column; j++)
                    {
                        if (j==index)
                        {
                            sum+=array[i][j];
                        }
                    }
                }
                cout << endl << "The Sum Of "<<index<<" Column Is : " << sum << endl;
                break;
            case 3:
                for (i=0; i<row; i++)
                {
                    for (j=0; j<column; j++)
                    {
                        if (i==j)
                        {
                            cout << array[i][j];
                        }
                        else
                        {
                            cout << "  ";
                        }
                    }
                    cout << endl;
                }
                break;    
            default:
                break;
        }

    }while(choice != 0);
    return 0;
}