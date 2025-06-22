#include<iostream>
using namespace std;
class Distance{
    private : 
        float f;
        float i;
    public :
        Distance(){
            f = 0;
            i = 0;
        }
        Distance(float f,float i){
            this->f = f;
            this->i = i;
        }
        Distance operator-(){
            f = -f;
            i = -i;
            return *this;
        }
        void show(){
            cout << "Distance is : (" << f << "," << i << ")" << endl; 
        }
};
int main(){
    Distance d1(4.8,3.3);
    Distance d2 = -d1;
    d2.show();
    return 0;
}