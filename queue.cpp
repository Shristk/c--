#include<iostream>
using namespace std;
#include<queue>
int main()
{
    queue<string> q;
    q.push("hello");
    q.push("world");
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;
    q.pop();
    q.pop();
    cout<<q.empty();
}