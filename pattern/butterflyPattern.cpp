#include <iostream>
using namespace std;

//                  *                          * 
//                  *  *                    *  *
//                  *  *  *              *  *  *
//                  *  *  *  *        *  *  *  *
//                  *  *  *  *  *  *  *  *  *  *
//                  *  *  *  *  *  *  *  *  *  *
//                  *  *  *  *        *  *  *  *
//                  *  *  *              *  *  *
//                  *  *                    *  *
//                  *                          *


int main()
{
    int n, i, j;
    cout << "Enter the number of rows: "<<endl;
    cin >> n;

    cout<<endl;
    cout<<"The required pattern is:"<<endl;
    
    // loop for printing the uppper half pattern;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << " * ";
        }
        for (j = 1; j <= 2 * n - 2 * i; j++)
        {
            cout << "   ";
        }
        for (j = 1; j <= i; j++)
        {
            cout << " * ";
        }
        cout << endl;
    }

    // loop for printing the lower half pattern;
    for (i = n; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            cout << " * ";
        }
        for (j = 1; j <= 2 * n - 2 * i; j++)
        {
            cout << "   ";
        }
        for (j = 1; j <= i; j++)
        {
            cout << " * ";
        }
        cout << endl;
    }
    return 0;
}