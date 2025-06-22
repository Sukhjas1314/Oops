            // (a)
// #include<iostream>
// using namespace std;
// class Complex{
//   private :
//     float real;
//     float imaginary;
//   public :
//     Complex(){
//       real = 0;
//       imaginary = 0;
//     }
//     Complex(float r,float i){
//       real = r;
//       imaginary = i;
//     }
//     void addComplex(Complex &c){
//       real = real + c.real;
//       imaginary = imaginary + c.imaginary;
//     }
//     void display(){
//       cout << real << "+" << imaginary << "i" << endl;
//     }
// };
// Complex passbyvalue(Complex c1,Complex &c2){
//   c1.addComplex(c2);
//   return c1;
// }
// int main(){
//   Complex c1(6.4,3.0);
//   Complex c2(5.3,3.5);

//   Complex c3 = passbyvalue(c1,c2);

//   c3.display();
//   cout << endl;
//   return 0;
// }



              // (b)
#include<iostream>
using namespace std;
class Complex{
  private :
    float real;
    float imaginary;
  public :
    Complex(){
      real = 0;
      imaginary = 0;
    }
    Complex(float r,float i){
      real = r;
      imaginary = i;
    }
    void addComplex(Complex &c){
      real = real + c.real;
      imaginary = imaginary + c.imaginary;
    }
    void display(){
      cout << real << "+" << imaginary << "i" << endl;
    }
};
Complex* passbyaddress(Complex *c1,Complex &c2){
  c1->addComplex(c2);
  return c1;
}
int main(){
  Complex c1(6.4,3.0); 
  Complex c2(5.3,3.5);

  cout << "The complex no. 1 : ";
  c1.display();

  cout << "The complex no. 2 : ";
  c2.display();

  Complex* c3 = passbyaddress(&c1,c2);

  cout << "The complex no. 3 : ";
  c3->display();
  cout << endl;
  return 0;
}