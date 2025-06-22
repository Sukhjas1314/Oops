#include<iostream>
using namespace std;
class Vehicle{
    public : 
        string make;
        string model;
        int year;

        void print(){
            cout << "Make : " << make << endl;
            cout << "Model : " << model << endl;
            cout << "Year : " << year << endl;
        }
};
class Truck : public Vehicle{
    public : 
        float load_capacity;

        void print1(){
            print();
            cout << "Load Capacity : " << load_capacity << " tons" << endl;
        }
};
class RefrigeratedTruck : public Truck{
    public :
        float temperature_control;

        RefrigeratedTruck(string make,string model,int year,float load_capacity,float temperature_control){
            this->make = make;
            this->model = model;
            this->year = year;
            this->load_capacity = load_capacity;
            this->temperature_control = temperature_control;
        }
        void display(){
            print1();
            cout << "Temperature Control : " << temperature_control << " °C" << endl;
        }
};
int main(){
    RefrigeratedTruck r("Tata","T-407",2023,16,28);
    r.display();
    cout << endl;

    return 0;
}