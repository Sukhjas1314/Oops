#include<iostream>
using namespace std;
namespace A{
  int x = 5;
  void display(){
    cout << "The value of x in A is : " << x << endl;
  }
}
namespace B{
  int x = 10;
  void display(){
    cout << "The value of x in B is : " << x << endl;
  }
}
int main(){
  A::display();

  B::display();

  cout << "In A : " << A::x << endl;
  cout << "In B : " << B::x << endl;

  cout << endl;
  return 0;
}