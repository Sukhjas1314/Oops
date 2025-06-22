#include<iostream>
using namespace std;
class Base{
    public :
        virtual void virtualFun(){
            cout << "This is the virtual function in base class" << endl;
        }
        virtual void pureVirtualFun() = 0;
};
class Derived : public Base{
    public :
        void virtualFun() override{
            cout << "This is the function in derived class" << endl;
        }
        void pureVirtualFun() override{
            cout << "This is the pure virtual function in derived class" << endl;
        }
};
int main(){
    Base *b = new Derived();

    b->virtualFun();
    b->pureVirtualFun();

    return 0;
}