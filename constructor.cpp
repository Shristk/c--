#include<iostream>
using namespace std;
#include<string>
#include<cmath>
class triangle
{
    public:
    void area(float r)
    {
        float area = (r*r)*3.14;
        cout<<"area of the incircle is "<<area<<endl;
    }

};
int main()
{
    float p,b;
    cout<<"enter perpendicular of the triangle\n";
    cin>>p;
    cout<<"enter base of the triangle\n";
    cin>>b;
    float h=sqrt((p*p)+(b*b));
    cout<<"hypotenus is "<<h<<endl;
    float r = (p+b-h)/2;
    triangle obj;
    obj.area(r);

    return 0;
}