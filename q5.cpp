#include<iostream>
using namespace std;
int main()
{
    int n1,n2;
    cout<<"enter 2 numbers\n";
    cin>>n1>>n2;
    int res = (n1>n2)?1:0;
    if(res==1)
    {
        cout<<"n1 is greater";
    }
    else
    {
        cout<<"n2 is greater";
    }
    return 0;
}