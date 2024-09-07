#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"enter the number\n";
    cin>>n;
    for(i=0;i<=n;i++)
    {
        if(i%2==0)
        {
            cout<<i<<" is even"<<endl;
        }
        else
        {
            cout<<i<<" is odd\n";
        }
    }
    return 0;


}