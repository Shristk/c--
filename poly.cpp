#include<iostream>
using namespace std;
#include<string>
// OPERATOR OVERLOADING
// int main()
// {
//     cout<<10+20<<endl;
//     string a="10";
//     string b="20";
//     cout<<100+200<<endl;
//     cout<<a+b;
// }
// METHOD OVERLOAD
void prod(int n1,int n2)
{
    cout<<n1*n2<<endl;
}
void prod(int a,int b,int c)
{
    cout<<a*b*c<<endl;
}
int main()
{
    prod(10,20);
    prod(1,2,3);
    return 0;
}