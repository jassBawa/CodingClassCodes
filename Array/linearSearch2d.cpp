
#include <iostream>
using namespace std;

int search(int arr[][], int r,int c, int key){
    // bool flag = false;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (key == arr[i][j])
            {
                cout << i << j;
                return 0;
            }
        }
        // cout << endl;
    }
    return -1;
}

int main()
{
#ifndef ONLINE_JUDGE

    // For getting input from input.txt file
    freopen("input.txt", "r", stdin);

    // Printing the Output to output.txt file
    freopen("output.txt", "w", stdout);

#endif

    int r, c;
    cin >> r >> c;
    int arr[r][c];

    // for taking the input from the user
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            cin >> arr[i][j];
    }

    int key;
    cin >> key;

    bool flag = false;

    // loop for searching the elements in array
    
    cout << endl;

    if (flag)
    {
        cout << "element found" << endl;
    }
    else
    {
        cout << "not found";
    }

    return 0;
}