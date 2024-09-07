#include<iostream>
#include<vector>
using namespace std;
class graph{
    int v;
    vector<vector<pair<int,int>>> adjlist;
    public:
    graph(int v)
    {
        this->v;
        adjlist.resize(v);
    }
    void addedge(int u,int v,int wt){
        adjlist[u].push_back(make_pair(v, wt));
        adjlist[v].push_back(make_pair(u, wt));
        }
    void printGraph(){
        for(int  i = 0;i<v;++i)
        {
            cout<<"vertex"<< i << ":";
            for(auto j : adjlist[i] )
            {
                cout<<" ( "<<j.first<<","<<j.second<<") ->";
            }
            cout<<endl;
    }
}
};
int main()
{
    int v = 5;
    graph g(5);
    g.addedge(0,1,10);
    g.addedge(0,4,20);
    g.addedge(1,2,30);
    g.addedge(1,3,40);
    g.addedge(1,4,50);
    g.addedge(2,3,60);
    g.addedge(3,4,70);
    g.printGraph();
}