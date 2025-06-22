#include<iostream>
using namespace std;
class Fraction{
  public : 
    int num;
    int den;

    Fraction(){

    }
    Fraction(int num,int den){
      this->num = num;
      this->den = den;
    }
    void display(){
      cout << num << "/" << den << endl;
    }
    Fraction add(Fraction f){
      int newNum = this->num*f.den + f.num*this->den;
      int newDen = this->den*f.den;
      Fraction ans(newNum,newDen);
      return ans;
    }
};
int main(){
  Fraction f1(1,2);
  Fraction f2(2,3);

  f1.display();
  f2.display();

  Fraction f3 = f1.add(f2);
  f3.display();

  cout << endl;
  return 0;
}