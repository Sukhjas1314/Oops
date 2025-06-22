#include<iostream>
using namespace std;
class LibraryUser{
    public :
        string name;
        int id;
        string contact;

        LibraryUser(){}
        LibraryUser(string n,int id,string c){
            name = n;
            this->id = id;
            contact = c;
        }
        void print(){
            cout << "Name : " << name << endl;
            cout << "ID : " << id << endl;
            cout << "Contact : " << contact << endl;
        }
};
class Student : public LibraryUser{
    private :
        string grade_level;
    public : 
        Student(){}
        Student(string n,long id,string c,string g) : LibraryUser(n,id,c){
            grade_level = g;
        }
        void print1(){
            print();
            cout << "Grade Level : " << grade_level << endl;
        }
};
class Teacher : public LibraryUser{
    private :
        string department;
    public :
        Teacher(){}
        Teacher(string n,int id,string c,string d) : LibraryUser(n,id,c){
            department = d;
        }
        void print2(){
            print();
            cout << "Department : " << department << endl;
        }
};
int main(){
    Student s1("Sukhman",112,"9876589414","Btech 2nd Year");
    s1.print1();
    cout << endl;

    Teacher t1("Kavita Narula",50,"9857853452","Mathematics");
    t1.print2();
    cout << endl;

    return 0;
}