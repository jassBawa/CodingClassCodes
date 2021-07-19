// Program to print right angle triangle after 180degree


#include <iostream>
using namespace std;


/* 
        * * * * *
        * * * *
        * * *
        * *
        *
*/



int main() 
{
    int row;
    cout<<"Enter the number of rows:"<<endl;
    cin>>row;
    
    cout<<endl;
    cout<<"The required pattern is:"<<endl;
    
    
    // loop for printing the pattern 
    for (int i = 1; i <= row; i++)
    {
        for (int j = row; j >= i; j--)        // i = 2
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    
    return 0;
}