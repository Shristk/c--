#include<iostream>
#include<string>
#include<vector>
#include<iterator>
#include<unordered_set>
using namespace std;
int main()
{
    int maxlength=0;
    string s;
    cin>>s;
    unordered_set<int> set;
    if(s.size()==1)
    {
        cout<<1<<endl;
    }
    else
    {
        string::iterator left=s.begin();
        for(string::iterator right=s.begin();right!=s.end();++right)
        {
            while(set.find(*right) != set.end())
            {
                set.erase(*left);
                ++left;
            }
            set.insert(*right);
            maxlength = max(maxlength,right-left+1);
        }

    cout<<maxlength<<endl;
    }
}