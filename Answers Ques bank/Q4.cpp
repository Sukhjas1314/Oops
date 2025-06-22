#include<iostream>
using namespace std;
class Person{
    protected :
        string name;
    public :
        Person(){

        }
        Person(string n){   
            name = n;
        }
};
class Address{
    private :
        string city;
        string zipcode;
    public :
        Address(){

        }
        Address(string c,string z){
            city = c;
            zipcode = z;
        }
};
class Employee : public Person, public Address {
    private :
        int empid;
    public :
        Employee(){

        }
        Employee(string n,string c,string z,int id){
            Person(n);
            Address(c,z);
            empid = id;
        }
};
class Company{
    private :
        string cname;
        double revenue;
        Employee emp;
    public :
        Company(string c,double r,Employee emp){
            cname = c;
            revenue = r;
            
        }

}
int main(){
    return 0;
}