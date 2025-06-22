#include<iostream>
using namespace std;
class Test{
    private :
        float x;
    public : 
        Test(){
            x = 0;
        }
        Test(float x){
            this->x = x;
        }
        friend Test operator-(Test &t);
        void show(){
            cout << "Number is : " << x << endl;
        }
};
Test operator-(Test &t){
    return Test(-t.x);
}
int main(){
    Test t1(5);
    Test t2 = -t1;
    t1.show();
    t2.show();
    return 0;
}