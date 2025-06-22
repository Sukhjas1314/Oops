#include<iostream>
using namespace std;
class Base{
    public :
        virtual void show(){
            cout << "This is the Base class" << endl;
        }
};
class Derived : public Base{
    public :
        void show() override{
            cout << "This is the Derived class" << endl;
        }
};
int main(){
    Base *b1 = new Base();
    b1->show();

    Base *b2 = new Derived();
    b2->show();

    Derived *d = new Derived();
    d->show();
    
    return 0;
}