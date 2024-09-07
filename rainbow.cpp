#include<iostream>
using namespace std;
int main()
{
    char c;
    cout<<"enter the choice"<<endl;
    cin>>c;
    c = tolower(c);
    switch(c)
    {
        case 'v':
        cout<<"its violet "<<endl;
        break;
        case 'i':
        cout<<"its indigo "<<endl;
        break;
        case 'b':
        cout<<"its blue "<<endl;
        break;
        case 'g':
        cout<<"its blue "<<endl;
        break;
        case 'y':
        cout<<"its yellow"<<endl;
        break;
        case 'o':
        cout<<"its orange "<<endl;
        break;
        case 'r':
        cout<<"its red "<<endl;
        break;
        default:
        cout<<"incaild input";
        
    }

    return 0;
}