#include<iostream>
#include<cmath>
using namespace std;
class Polar{
    private :
        float r;
        float a;
    public :
        Polar(){
            r = 0;
            a = 0;
        }
        Polar(float r,float a){
            this->r = r;
            this->a = a;
        }
        float getRadius(){
            return r;
        }
        float getAngle(){
            return a;
        }
        void show(){
            cout << "Polar coordinates are : (" << r << "," << a << ")" << endl;
        }
};
class Cartesian{
    private :
        float x,y;
    public :
        Cartesian(Polar &p){
            x = p.getRadius() * cos(p.getAngle());
            y = p.getRadius() * sin(p.getAngle());
        }
        void show(){
            cout << "Cartesian coordinates are : (" << x << "," << y << ")" << endl;
        }
};
int main(){
    Polar p1(5,90);
    Cartesian c1 = p1;
    p1.show();
    c1.show();
    return 0;
}