#include<iostream>
using namespace std;
class Animal{
    protected : 
        int n;
    public : 
        Animal(){
            n = 5;
        }
};
class Tiger : public Animal{
    public :
        void number(){
            cout << "There are " << n << " tigers in the zoo." << endl; 
        }
};
int main(){
    Animal a;
    Tiger t;
    t.number();
    cout << endl;
    return 0;
}