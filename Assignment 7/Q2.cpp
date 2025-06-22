#include<iostream>
using namespace std;
class Distance{
    private :
        float x,y;
    public :
        Distance(){
            x = 0;
            y = 0;
        }
        Distance(float x,float y){
            this->x = x;
            this->y = y;
        }
        Distance operator+(Distance &d){
            Distance D;
            D.x = d.x + x;
            D.y = d.y + y;
            return D;
        }
        void show(){
            cout << "Distance is : (" << x << "," << y << ")" << endl; 
        }
};
int main(){
    Distance d1(3,5);
    Distance d2(4,7);
    Distance d3 = d1 + d2;
    d3.show();
    return 0;
}
