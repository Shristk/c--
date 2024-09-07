//BFS implementation using queue
#include<iostream>
#include<vector>
#include<queue>
using namespace std;
class Graph{
    int v;
    vector<vector<int>> adj;
public:
    Graph(int v);
    void addedge(int v,int w);
    void BFS(int s);
};
Graph::Graph(int v) : v(v){
    adj.resize(v);
}
void Graph::addedge(int v,int w){
    adj[v].push_back(w);
}
void Graph::BFS(int s){
    vector<bool> visited(v,false);
    queue<int> queue;
    visited[s]=true;
    queue.push(s);
    while(!queue.empty())
    {
        s=queue.front();
        cout<< s<<" ";
        queue.pop();
        for(auto adjvertex:adj[s]){
            if(!visited[adjvertex])
            {
                visited[adjvertex] = true;
                queue.push(adjvertex);
            }
        }
    }
}

int main()
{
    Graph g(4);
    g.addedge(0,1);
    g.addedge(0,2);
    g.addedge(1,2);
    g.addedge(2,0);
    g.addedge(2,3);
    g.addedge(3,3);

    cout<<"breadth first Traversal"<<endl;
    g.BFS(2);
}