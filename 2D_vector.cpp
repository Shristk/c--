#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int r=3,c=3;
    vector<vector<int>>mat(r,vector<int>(c));
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>mat[i][j];
        }
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<mat[i][j]<<" ";
            if(j==c-1)
            {
                int t=j-1;
                for (i=1;i<r;i++)
                {
                    cout<<mat[i][j]<<" ";
                }
                while(j>0)
                {
                    j-=1;
                    cout<<mat[i][j]<<" ";
                }
            }

        }
        cout<<endl;
    }
}