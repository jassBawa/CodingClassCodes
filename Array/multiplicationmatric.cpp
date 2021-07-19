#include <iostream>
using namespace std;
//   multilication of matrix
int main()
{
    
#ifndef ONLINE_JUDGE

    // For getting input from input.txt file
    freopen("input.txt", "r", stdin);

    // Printing the Output to output.txt file
    freopen("output.txt", "w", stdout);

#endif

    int n1, n2, n3;
    // cout<<"enter the value of n1,n2,n3\n";
    cin >> n1 >> n2 >> n3;
    int matrix1[n1][n2];
    int matrix2[n2][n3];
    int ans[n1][n3];


    // first matrix input 
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            cin >> matrix1[i][j];
        }
    }

    // second matrix input 
    for (int i = 0; i < n2; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            cin >> matrix1[i][j];
        }
    }

     // third matrix initialize 
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            ans[i][j] = 0;
        }
    }

    // multiplication
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            for (int k = 0; k < n2; k++)
            {
                ans[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    // output of the required matrix
    cout << "multiplication of two matrix is : \n";
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}