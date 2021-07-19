// floyads triangle

#include <iostream>
using namespace std;


/* 
    1
    2 3
    4 5 6
    7 8 9 10
    11 12 13 14 15   
*/


int main() 
{
    int n;
    cout<<"Enter the number of rows: "<<endl;
    cin>>n;
    int counter =1;     // counter is made for the ease to change the values of floyad's triangle 

    cout<<endl;
    cout<<"The required pattern is:"<<endl;
    
    // loop for printing the pattern;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)        // i = 2
        {
            cout<<counter<<" ";
            counter++;
        }
        cout<<endl;
    }
    
    return 0;
}