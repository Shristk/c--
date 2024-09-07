//Implementation using adjacency list
// #include<iostream>
// #include<vector>
// using namespace std;
// class graph{
//     int v;
//     vector<vector<int>> adjlist;
//     public:
//     graph(int v)
//     {
//         this->v;
//         adjlist.resize(v);
//     }
//     void addedge(int u,int v){
//         adjlist[u].push_back(v);
//         adjlist[v].push_back(u);
//         }
//     void printGraph(){
//         for(int  i = 0;i<v;++i)
//         {
//             cout<<"vertex"<< i << ":";
//             for(int j : adjlist[i])
//             {
//                 cout<<" -> "<<j;
//             }
//             cout<<endl;
//     }
// }
// };
// int main()
// {
//     int v = 5;
//     graph g(5);
//     g.addedge(0,1);
//     g.addedge(0,4);
//     g.addedge(1,2);
//     g.addedge(1,3);
//     g.addedge(1,4);
//     g.addedge(2,3);
//     g.addedge(3,4);
//     g.printGraph();
// }



//Implemention of a weighted graph using vectors
// #include<iostream>
// #include<vector>
// using namespace std;
// class graph{
//     int v;
//     vector<vector<pair<int,int>>> adjlist;
//     public:
//     graph(int v)
//     {
//         this->v;
//         adjlist.resize(v);
//     }
//     void addedge(int u,int v,int wt){
//         adjlist[u].push_back(make_pair(v, wt));
//         adjlist[v].push_back(make_pair(u, wt));
//         }
//     void printGraph(){
//         for(int  i = 0;i<v;++i)
//         {
//             cout<<"vertex"<< i << ":"<<endl;
//             for(auto j : adjlist[i] )
//             {
//                 cout<<" is connected to "<<j.first<<" with edge weight "<<j.second<<endl;
//             }
//             cout<<endl;
//     }
// }
// };
// int main()
// {
//     int v = 5;
//     graph g(5);
//     g.addedge(0,1,10);
//     g.addedge(0,4,20);
//     g.addedge(1,2,30);
//     g.addedge(1,3,40);
//     g.addedge(1,4,50);
//     g.addedge(2,3,60);
//     g.addedge(3,4,70);
//     g.printGraph();
// }

//implementation of graph using adjacency matrix
#include<iostream>
#include<vector>
using namespace std;
int v = 4;
void initAM(int AM[v][v])
{
    for(int i =0;i<v;i++)
    {
        for(int j=0;j<v;j++)
        {
            AM[i][j]=0;
        }
    }
}
void addedge(int AM[v][v], int u,int v)
{
    AM[u][v] = 1;
    AM[v][u] = 1;
}
void printAM( int AM[v][v])
{
    for(int i = 0;i<v;i++)
    {
        for(int j=0;j<v;j++)
        {
            cout<<AM[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    int v=4;
    int AM[v][v];
    initAM(AM);
    addedge(AM,0,1);
    addedge(AM,0,2);
    addedge(AM,1,2);
    addedge(AM,2,3);
    cout<<"Adjacency Matrix"<<endl;
    printAM(AM);
}









