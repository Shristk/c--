#include<iostream>
using namespace std;
#include<string>
    // class encap{
    //     protected:
    //     int a=555;
    //     void p()
    //     {
    //         cout<<"encap function"<<endl;
    //         cout<<a<<endl;
    //     }
    // };
    // int main()
    // {
    //     encap obj;
    //     obj.p();
    //     cout<<obj.a;
    //     return 0;
    // }
class animal
{
    public:
    int a;
    void type()
    {
        cout<<"enter the speed of your animal "<<endl;
        cin>>a;
    }
};
class carnivore:public animal
{
    public:
    string a1;
    void name()
    {
        cout<<"enter the name of your animal"<<endl;
        cin>>a1;
    }
};
int main()
{
    string s1,s2;
    carnivore obj;
    obj.type();
    obj.name();
    cout<<"the name of the animal is "<<obj.a<<" and it can run with a speed of "<<obj.a1;
}