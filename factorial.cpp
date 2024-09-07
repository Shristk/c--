#include<iostream>
using namespace std;
#include<string>
#include<cmath>
int factorial(int n)
{
    
    if(n>0)
    {
        return n*factorial(n-1);
    }
    else{
        return 1;
    }
}
int main()
{
    int n,p=1;
    cout<<"enter the number "<<endl;
    cin>>n;
    if(n>=0)
    {
    int result=factorial(n);
    cout<<"the factorial is "<<result<<endl;
    }
    else{
        cout<<"invalid input"<<endl;
    }

    return 0;
}