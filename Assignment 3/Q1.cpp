#include<iostream>
using namespace std;
class Cars{
  public :
    string name;
    string gearsystem;
    int seats;
  
    Cars(){}
    Cars(string name,string gearsystem,int seats){
      (*this).name = name;
      this->gearsystem = gearsystem;
      this->seats = seats;
    }
    void display(){
      cout << "Name : " << name << endl;
      cout << "Gear System : " << gearsystem << endl;
      cout << "No. of seats : " << seats << endl;
    }
};
int main(){
  Cars c1("BMW X7","Automatic/Manual",7);
  Cars *c2 = new Cars("Range Rover Evoque","Automatic",7);
  cout << endl;

  c1.display();
  cout << endl;

  c2->display();
  cout << endl;

  cout << endl;
  return 0;
}