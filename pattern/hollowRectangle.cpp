// Program to print hollow rectangle

#include <iostream>
using namespace std;
/* 
            * * * * 
            *     * 
            *     * 
            *     * 
            * * * * 

*/
int main() 
{
    int rows,column;
    cout<<"Entter the number of rows: "<<endl;
    cin>>rows;
    cout<<"Entter the number of columns: "<<endl;
    cin>>column;

    cout<<endl;
    cout<<"The required pattern is"<<endl;
    cout<<endl;

    
    // loop for printing the pattern 
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= column; j++)
        {
            if (i==1 or i==rows )           // i denotes the row number on which we are working 
            {
                cout<<"*";
            }
            else if (j==1 or j==column)      // j denotes the column number on which we are working
            {
                 cout<<"*";
            }
        
            else{
                cout<<" ";
            }           
            cout<<" "; 
        }
        cout<<endl;
    }
    
    return 0;
}