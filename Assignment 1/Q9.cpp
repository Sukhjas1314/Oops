#include<iostream>
using namespace std;
int main(){
  float a,b;
  cout << "Enter the value of a & b : ";
  cin >> a >> b;
  char sign;
  cout << "Enter the valid operator : ";
  cin >> sign;
  switch(sign){
    case '+':
      cout << "The sum is : " << a+b << endl;
      break;
    case '-':
      cout << "The difference is : " << a-b << endl;
      break;
    case '*':
      cout << "The product is : " << a*b << endl;
      break;
    case '/':
      cout << "The quotient is : " << a/b << endl;
      break;
    default:
      cout << "Invalid operator/operation." << endl;
  }
  return 0;
}