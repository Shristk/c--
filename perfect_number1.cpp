#include <iostream>
using namespace std;

class input{
    public:
    int n;
    void input_number()
    {
        cout<<"enter the number"<<endl;
        cin>>n;
    }
};

class perfect{
    public:
    input obj1;
    int i,sum=0;
    void check(int n)
    {
        for(i=1;i<n;i++)
        {
            if(n%i==0)
            {
                sum=sum+i;
            }
        }
    }
};
int main(){
    input obj1;
    perfect obj2;
    obj1.input_number();
    obj2.check(obj1.n);
    int s = obj2.sum;
    if(s==obj1.n)
    {
        cout<<"it is a perfect number"<<endl;
    }
    else{
        cout<<"not a perfect number";
    }
}