#include<iostream>
using namespace std;
class Parent{
    public :
        virtual void show(){
            cout << "This is the parent class" << endl;
        }
        void display(){
            cout << "Display function with no arguments" << endl;
        }
        void display(int x){
            cout << "Display function with argument : " << x << endl;
        }
};
class Child : public Parent{
    public :
        void show() override{
            cout << "This is the child class" << endl;
        }
};
int main(){
    Child c;
    c.show();
    Parent p;
    p.show();
    p.display();
    p.display(3);
    return 0;
}