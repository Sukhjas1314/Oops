#include<iostream>
using namespace std;
class Complex{
  private :
    float real;
    float imaginary;
  public :
    Complex(){
    }
    void setComplex(float r,float i){
      real = r;
      imaginary = i;
    }
    void displayComplex(){
      cout << real << "+" << imaginary << "i" << endl; 
    }
    Complex addComplex(const Complex &c){
      Complex temp;
      temp.real = real + c.real;
      temp.imaginary = imaginary + c.imaginary;
      return temp;
    } 
};
int main(){
  Complex c1,c2,c3;

  c1.setComplex(2.5,3.6);
  c2.setComplex(1.5,4.5);

  cout << "Complex number c1 : ";
  c1.displayComplex();

  cout << "Complex number c2 : ";
  c2.displayComplex();

  c3 = c2.addComplex(c1);
  cout << "Sum of Complex number , c3 : ";
  c3.displayComplex();

  return 0;
}