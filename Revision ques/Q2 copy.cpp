// Design a polymorphic hierarchy to model a transportation system. Each vehicle in the
// hierarchy must have a function type() that outputs the type of vehicle. However, there are
// unique requirements:
// 1. The base class Vehicle declares type() as a pure virtual function.
// 2. A derived class LandVehicle overrides type() and introduces a new virtual function land()
// that describes the type of terrain the vehicle is designed for.
// 3. A further derived class ElectricCar must override both type() and land(). Additionally, it has
// a unique function charge() to output its battery charging behavior.
// 4.
// The program must demonstrate how these methods behave when called through base class
// pointers.
// Tasks: 1. Create the class hierarchy:
// o Vehicle (abstract base class).
// o LandVehicle (inherits from Vehicle).
// o ElectricCar (inherits from LandVehicle).
// Task: 2. Instantiate an ElectricCar object and call its methods through:
// o A Vehicle* pointer.
// o A LandVehicle* pointer.
// o An ElectricCar* pointer.
// Task: 3. Demonstrate the behavior of charge() when called from each pointer type, and
// discuss why certain calls succeed or fail.


#include<iostream>
using namespace std;
class Vehicle{
    public :
        virtual void type() = 0 ;
        virtual ~Vehicle(){
            cout << "Vehicle class destroyed" << endl;
        }
};
class LandVehicle : public Vehicle{
    public :
        void type() override{
            cout << "This is a land vehicle" << endl;
        }
        virtual void land(){
            cout << "Designed for driving on roads or off-road terrain" << endl;
        }
        virtual ~LandVehicle(){
            cout << "LandVehicle destructor is called" << endl;
        }
};
class ElectricVehicle : public LandVehicle{
    public :
        void type() override{
            cout << "This is an electric vehicle" << endl;
        }
        void land() override{
            cout << "Designed for driving on smooth roods" << endl;
        }
        void charge(){
            cout << "Charging the battery using battery charging station" << endl;
        }
        ~ElectricVehicle(){
            cout << "ElectricVehicle destructor is called" << endl;
        }
};
int main(){
    ElectricVehicle elv;

    Vehicle *v = &elv;
    cout << "Vehicle Pointer" << endl;
    v->type();
    cout << endl;

    LandVehicle *lv = &elv;
    cout << "LandVehicle pointer" << endl;
    lv->type();
    lv->land();
    cout << endl;

    ElectricVehicle *elv1 = &elv;
    cout << "ElectricVehicle pointer" << endl;
    elv1->type();
    elv1->land();
    elv1->charge();
    cout << endl;

    return 0;
}