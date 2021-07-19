// Program to print right angle triangle 

#include <iostream>
using namespace std;
/* 
        *
        * *
        * * *
        * * * *
        * * * * *
*/
int main() 
{
    int n;
    cout<<"Enter the number of lines: "<<endl;
    cin>>n;
    cout<<endl;

    cout<<"The required pattern is"<<endl;
    cout<<endl;

    
    // loop for printing pattern 
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)        
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    
    return 0;
}