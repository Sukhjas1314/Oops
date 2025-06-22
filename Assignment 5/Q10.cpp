#include<iostream>
using namespace std;
class Person{
    public :
        string name;
        string address;

        void print(){
            cout << "Name : " << name << endl;
            cout << "Address : " << address << endl;
        }
};
class Student : virtual public Person{
    public :
        int student_id;
        string grade;

        void print1(){
            cout << "Student ID : " << student_id << endl;
            cout << "Grade : " << grade << endl;
        }
};
class Staff : virtual public Person{
    public :
        int employee_id;
        string department;

        void print2(){
            cout << "Employee ID : " << employee_id << endl;
            cout << "Department : " << department << endl;
        }
};
class TeachingAssistant : public Student , public Staff{
    public : 
        TeachingAssistant(){

        }
        TeachingAssistant(string name,string address,int student_id,string grade,int employee_id,string department){
            this->name = name;
            this->address = address;
            this->student_id = student_id;
            this->grade = grade;
            this->employee_id = employee_id;
            this->department = department;
        }
        void display(){
            print();
            print1();
            print2();
        }
};
int main(){
    TeachingAssistant t("Simran","131, Phase-1, Ldh",112,"A+",800,"Programming");
    t.display();
    cout << endl;

    return 0;
}