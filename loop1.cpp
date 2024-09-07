#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"enter the number\n";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        if(i%2==0&&i%4==0)
        {
            cout<<i<<endl;
        }
    }
    return 0;


}