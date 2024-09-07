#include<iostream>
using namespace std;
#include<string>
template <typename h>
h add( h n1,h n2)
{
    return n1+n2;
}
int main()
{
    int res;
    double res1;
    res=add<int>(10,20);
    cout<<res<<endl;
    res1=add<double>(11.23,10.2);
    cout<<res1<<endl;
}