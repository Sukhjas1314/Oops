#include<iostream>
using namespace std;
class demo{
    private :
        int x;
    public :
        demo(){
            x = 0;
        }
        demo(int x){
            this->x = x;
        }
        // void operator++(){
        //     ++x;
        // }
        demo operator++(){
            demo D;
            D.x = ++x;
            return D;
        }
        void show(){
            cout << "Value of x is : " << x << endl;
        }
};
int main(){
    demo d1;
    demo d2(5); 
    ++d1;
    demo d3 = ++d2;
    d3.show();
    d1.show();
    d2.show();
}