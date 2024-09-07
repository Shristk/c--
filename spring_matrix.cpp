#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int r,c,i;
    cout<<"enter row and column\n";
    cin>>r>>c;
    vector<vector<int>>mat(r,vector<int>(c));
    int top=0,down=r-1,left=0,right=c-1;
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
        }
        cout<<endl;
    }
    while(left<=right&&top<=down)
    {
        for(i=left;i<=right;i++)
        {
            cout<<mat[top][i]<<" ";
        }
        top++;
        for(i=top;i<=down;i++)
        {
            cout<<mat[i][right]<<" ";
        }
        right--;
        if(left<=right)
        {
            for(i=right;i>=left;i--)
            {
                cout<<mat[right][i]<<" ";
            }
        }
        down--;
        if(top<=down)
        {
            for(i=down;i>=top;i--)
            {
                cout<<mat[i][left]<<" ";
            }
            left++;
        }

    }

}
