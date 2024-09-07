#include <iostream>
using namespace std;
int main()
{
    int n,n1,m,m1, i, a = 0;
    cout << "enter the number of rows of array\n";
    cin >> n;
    cout << "enter the number of columns of array\n";
    cin >> n1;
    int arr[n][n1],arr1[n][n1],s[n][n1];
    cout<<"enter the number in 1st array "<<endl;
    for (i = 0; i < n; i++)
    {
        for(int j=0;j<n1;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"enter the number in 2nd array "<<endl;
    for (i = 0; i < n; i++)
    {
        for(int j=0;j<n1;j++)
        {
            cin>>arr1[i][j];
        }
    }

    for (i = 0; i < n; i++)
    {
        for(int j=0;j<n1;j++)
        {
            s[i][j] = (arr[i][j]*arr1[i][j]) + (arr[i][j+1]*arr1[i+1][j+1]);
        }
    }
    cout<<"products  are "<<endl;
    for (i = 0; i < n; i++)
    {
        for(int j=0;j<n1;j++)
        {
            cout<<s[i][j]<<endl;
        }
    }
}