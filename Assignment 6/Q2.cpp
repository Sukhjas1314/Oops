#include<iostream>
using namespace std;
class Base{
    public :
        void bfun(){
            cout << "Base function call" << endl;
        }
};
class Derived : public Base{
    public :
        void dfun(){
            cout << "Derived function call" << endl;
        }
};
int main(){
    Derived d1;
    Derived *d2 = &d1;
    d2->bfun();
    d2->dfun();
    return 0;
}