#include <iostream>  // header file
using namespace std; // always use

//     *
//    **
//   ***
//  ****
// *****

int main()
{
    int n;
    cout << "Enter the number of rows: " << endl; 
    cin >> n;                           

    cout<<endl;
    cout<<"The required pattern is:"<<endl;
    
    // loop for printing the pattern;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j <= n - i)
            {
                cout << " ";
            }
            else
            {
                cout << "*";
            }
        }
        cout << endl;
    }

    return 0;
}