#include <iostream>
using namespace std;
template <class T>
class Number {
   private:
    T num;
    T num1;
   public:
    Number(T n,T n1)
    {
        num=n;
        num1=n1;
    }   // constructor
    T add() {
        return num+num1;
    }
    T multi()
    {
        return num*num1;
    }
    T div()
    {
        return num/num1;
    }
    T sub()
    {
        return num-num1;
    }
};
int main() {
    Number<float> nfloat(2,3);
    cout<< nfloat.add() << endl;
    cout<< nfloat.sub() << endl;
    cout<< nfloat.multi() << endl;
    cout<< nfloat.div() << endl;

    return 0;
}