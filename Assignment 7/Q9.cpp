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
        operator float(){
            return x;
        }
        void show(){
            cout << "Number is : " << x << endl;
        }
};
int main(){
    Test t1(5.4);
    float x = t1;
    cout << "Value after conversion is : " << x << endl;
    return 0;
}