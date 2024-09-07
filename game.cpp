#include<iostream>
using namespace std;
int main()
{
    int n,i,p,count=0,f=0;
    // cout<<"enter number of monsters"<<endl;
    cin>>n;
    // cout<<"enter the experience of the player"<<endl;
    cin>>p;
    int mon_exp[n],mon_bon[n];
    // cout<<"enter the experience of the monsters"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>mon_exp[i];
    }
    // cout<<"enter the bonus gained from each monster "<<endl;
    for(i=0;i<n;i++)
    {
        cin>>mon_bon[i];
    }
    for(i=0;i<n;i++)
    {
        f=1;
        if(p>=mon_exp[i]||mon_exp!=0)
        {
            p=p+mon_bon[i];
            mon_exp[i]=0;
            count=count+1;
        }
        else if(p<mon_exp[i])
        {
            f=0;
        }
        if(f==0)
        {
            i=0;
        }
    }
    cout<<"number of monsters killed "<<count<<endl;
    // cout<<"total experience pf player "<<p;

}