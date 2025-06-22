#include<iostream>
using namespace std;
class Base{
    protected :
        int bval;
    public :
        Base(int val){
            bval = val;
            cout << "Base abstract class is called and base value = " << bval << endl;
        }
        virtual void show() = 0;
};
class Derived : public Base{
    protected :
        int dval;
    public :
        Derived(int val1,int val2) : Base(val1){
            dval = val2;
            cout << "Derived class is called and derived value = " << dval << endl;
        }
        void show() override{
            cout << "Derived class display function.\nBase value : " << bval << "\nDerived value : " << dval << endl;
        }
};
int main(){
    Derived d(10,20);
    d.show();
    
    return 0;
}