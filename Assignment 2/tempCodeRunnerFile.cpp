#include<iostream>
using namespace std;
class A{
  public :
    static int count;
    void increment(){
      count++;
    }
};
int A::count = 0;
int main(){
  A obj;
  obj.increment();
  obj.increment();
  obj.increment();
  obj.increment();
  obj.increment();
  obj.increment();

  cout << A::count << endl;
  cout << endl;
  return 0;
}
