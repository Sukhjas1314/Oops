#include<iostream>
using namespace std;
class Speedometer{
    public :
        float speed;

        void print(){
            cout << "The speed is : " << speed << " km/hr" << endl;
        }
};
class FuelGuage{
    public :    
        float fuel_level;

        void print1(){
            cout << "The fuel level is : " << fuel_level << " l" << endl;
        }
};
class Thermometer{
    public :
        float temperature;

        void print2(){
            cout << "The temperature is : " << temperature << " °C" << endl;
        }
};
class CarDashboard : public Speedometer , public FuelGuage , public Thermometer{
    public :
        CarDashboard(float s,float f,float t){
            speed = s;
            fuel_level = f;
            temperature = t;
        }
        void display(){
            print();
            print1();
            print2();
        }
};
int main(){
    CarDashboard cd(60.00,10.3,75);
    cd.display();
    cout << endl;
    
    return 0;
}