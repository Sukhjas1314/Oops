#include<iostream>
using namespace std;
class Animal{
    public : 
        void sound(){
            cout << "Animal sound" << endl;
        }
};
class Cat : public Animal{
    public : 
        void voice(){
            cout << "Meow Meow!!!" << endl;
        }
};
int main(){
    Animal a;
    a.sound();
    cout << endl;

    Cat c;
    c.sound();
    c.voice();
    cout << endl;
    
    return 0;
}