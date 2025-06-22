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
        void show(){
            cout << "Number is : " << x << endl;
        }
};
int main(){
    float x = 4.5;
    Test t = x;
    t.show();
    return 0;
}