#include<iostream>
using namespace std;
class base{
    public :
        base(){
            cout << "This is the base class." << endl;
        }
        ~base(){
            cout << "The base class is destroyed." << endl;
        }
};
class derived : public base{
    public :
        derived(){
            cout << "This is the derived class." << endl;
        }
        ~derived(){
            cout << "The derived class is destroyed." << endl;
        }
};
int main(){
    derived d;
    return 0;
}