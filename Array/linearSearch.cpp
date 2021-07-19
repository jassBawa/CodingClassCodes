#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (key == arr[i])
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int n;
    cout << "Enter the number of elements you want: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int key;
    cout << "Enter the key: ";
    cin >> key;

    int ans = linearSearch(arr, n, key);
    if(ans==-1){
        cout<<"element is not present";
    }
    else{
        cout<<ans;
    }

    return 0;
}
