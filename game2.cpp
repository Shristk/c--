#include<iostream>
using namespace std;
#include<string>
int main()
{
    string s;
    cout<<"enter a string"<<endl;
    cin>>s;
    int n,i,d,sum=0;
    char t,t1;
    int l=s.length();
    // cout<<l;
    cout<<"enter the number"<<endl;
    cin>>n;
    // while(n>0)
    // {
    //     d=n%10;
    //     n=n/10;
    //     sum = sum+(d*d);
    // }
    // if(sum%2==0)
    // {
    //  t=s[l-1];
    //  t1=s[l-2];
    //  for(i=l-2;i>=0;i--)
    //  {
    //     s[i+2]=s[i];
    //  }
    //  s[0]=t1;
    //  s[1]=t;
    // }
    // else if(sum%2==1)
    // {
        t1=s[0];
        t=s[1];
        for(i=0;i<l-1;i++)
        {
            s[i]=s[i+2];
        }
        s[l-2]=t;
        s[l-1]=t1;
    // }
    cout<<s;
    return 0;
}