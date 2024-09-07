#include <iostream>
using namespace std;
int main()
{
    int n, i, s = 1, a = 0;
    cout << "enter ther size of array\n";
    cin >> n;
    int arr[n], j, flag = 0;
    for (i = 0; i < n; i++)
    {
        cout << "enter the elements" << endl;
        cin >> arr[i];
    }
    for (i = 0; i < n - 1; i++)
    {
        flag = 0;
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] > arr[i])
            {
                flag = flag + 1;
                break;
            }
        }
        int flag1 = 0;
        for(j = i-1;j>=0;j++)
        {
            if(arr[j]<arr[i])
            {
                flag1 = flag1 + 1;
            }
        }
        if(flag==0&&flag1==0)
        {
            cout<<arr[i]<<" is peak";
        }
    }
    return 0;
}
