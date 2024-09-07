#include<iostream>
#include<list>
#include<iterator>
using namespace std;
int main()
{
    list<int>l{1,2,3};
    for (int i:l)
    {
        cout<<i<<endl;
    }
    // l.push_front(200);
    // // for (int i:l)
    // // {
    // //     cout<<i<<endl;
    // // }
    // l.push_back(300);
    // for (int i:l)
    // {
    //     cout<<i<<endl;
    // }
    // l.pop_front();
    // for (int i:l)
    // {
    //     cout<<i<<endl;
    // }
    cout<<"insert in between - iterator"<<endl;
    auto it = l.begin();
    advance(it,2);
    l.insert(it,333);
    // for (int i:l)
    // {
    //     cout<<i<<endl;
    // }
    auto itt= l.end();
    advance(itt,1);
    l.insert(itt,111);
    for (int i:l)
    {
        cout<<i<<endl;
    }
}