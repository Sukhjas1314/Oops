#include<iostream>
using namespace std;
class Complex{
    private :
        float r;
        float i;
    public :
        Complex(){
            r = 0;
            i = 0;
        }
        Complex(float r,float i){
            this->r = r;
            this->i = i;
        }
        Complex operator+(Complex &c){
            Complex C;
            C.r = c.r + r;
            C.i = c.i + i;
            return C;
        }
        void show(){
            cout << "Complex number is : " << r << " + " << i << "i" << endl;
        }
};
int main(){
    Complex c1(4.5,3);
    Complex c2(3.5,9);
    Complex c3 = c1 + c2;
    c3.show();
    return 0;
}