#include<iostream>
using namespace std;
int sum()
{
    // int r1,r2,i ,a = 1,j;
    // cout<<"lower value"<<endl;
    // cin>>r1;
    // cout<<"upeer value"<<endl;
    // cin>>r2;
    // int count = 2;
    // for(i = r1;i<=r2;i++)
    // {
    //     for(j=2;j<i;j++)
    //     {
    //         if(j%i==0)
    //         {
    //             count++;
    //             break;
    //         }
    //     }
    //     if(count==2)
    //     {
    //         cout<<i<<" ";
    //     }
    // }
    int n,f = 1;
    cout<<"enter the number\n";
    cin>>n;
    if(n>0)
    {
    while(n>1)
    {
        f = f*n;
        n--;
    }
    return f;
    }
    if(n<0)
    {
        while(n<0)
    {
        f = f*n;
        n--;
    }
    cout<<"-";
    return f;
    }
    }
int main()
{
    cout<<sum();
    return 0;
}

