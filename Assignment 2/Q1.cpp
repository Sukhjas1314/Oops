#include<iostream>
using namespace std;
struct Student{
  public : 
    string name;
    int rollNo;
    string degree;
    string hostel;
    float cgpa;

    void addDetails(){
      cout << "Enter the name : ";
      cin >> name;

      cout << "Enter the Roll No. : ";
      cin >> rollNo;

      cout << "Enter the degree : ";
      cin >> degree;

      cout << "Enter the hostel : ";
      cin >> hostel;

      cout << "Enter the Current CGPA : ";
      cin >> cgpa;
    }

    void updateDetails(string s){
      if(s == "name"){
        cout << "Enter the updated name : ";
        cin >> name;
      }
      else if(s == "rollNo"){
        cout << "Enter the updated Roll No. : ";
        cin >> rollNo;
      }
      else if(s == "degree"){
        cout << "Enter the updated degree : ";
        cin >> degree;
      }
      else if(s == "hostel"){
        cout << "Enter the updated hostel : ";
        cin >> hostel;
      }
      else if(s == "cgpa"){
        cout << "Enter the updated Current CGPA : ";
        cin >> cgpa;
      }
    }

    void displayDetails(){
      cout << "Name : " << name << endl;
      cout << "Roll no. : " << rollNo << endl;
      cout << "Degree : " << degree << endl;
      cout << "Hostel : " << hostel << endl;
      cout << "Current CGPA : " << cgpa << endl;
    }
};
int main(){
  Student s1;

  cout << "Enter the details of Student 1 -: " << endl;
  s1.addDetails();
  cout << endl;

  s1.updateDetails("hostel");
  cout << endl;

  cout << "The details of the Student 1 -: " << endl;
  s1.displayDetails();

  cout << endl;
  return 0;
}