#include <iostream>
using namespace std;


//      {1, 45, 23, 6, 7, 54, 3}
//      {1,}
//      {1, 3, 6, 7, 23, 45, 54}

int main() 
{
    int n;
    cin>>n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    cout<<"Before sorting "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<endl;

    
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if(arr[i]>arr[j]){              // this block is for swapping the numbers
                int temp;
                temp = arr[j];
                arr[j]=arr[i];
                arr[i]= temp;

            }
        }
        
    }

    cout<<"After sorting "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}