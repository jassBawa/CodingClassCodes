// combined pattern of right triangles
#include <iostream>
using namespace std;
/* 
            *
            * *
            * * *
            * * * *
            * * * * *
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
    
    // loop for upper triangle
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= i; j++)        
        {
            cout<<"* ";
        }
        cout<<endl;
    }

    
    // loop for lower triangle
    for (int i = 1; i <= row; i++)
    {
        for (int j = row; j >= i; j--)       
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    
    return 0;
}