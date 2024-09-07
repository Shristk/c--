#include <iostream>
using namespace std;
int main()
{
    int n,n1,j ,i, a = 0,flag = 0,s=0,p=1;
    cout << "enter the number of rows of array\n";
    cin >> n;
    cout << "enter the number of columns of array\n";
    cin >> n1;
    int arr[n][n1],arr1[n][n1];
    cout<<"ente the number in 1st array "<<endl;
    for (i = 0; i < n; i++)
    {
        for(int j=0;j<n1;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"diagonal elements are \n";
    for(i=0,j=0;i<n,j<n1;i++,j++)
    {
        cout<<arr[i][j]<<endl;
        if(arr[i][j]==0)
        {
            flag = flag+1;
        }
    }
    if(flag>=n)
    {
        cout<<"diagonal elements are 0\n";
    }
    else
    {
        cout<<"diagonal elements are not 0\n";
    }
    for (i = 0; i < n; i++)
    {
        for(int j=0;j<n1;j++)
        {
            if(i<j)
            {
                s = s+arr[i][j];
            }
            else if(i>j)
            {
                p = p*arr[i][j];
            }
        }
    }
    cout<<"upper bound sum "<<s<<endl;
    cout<<"lower bound sum "<<p<<endl;
}