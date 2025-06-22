#include<iostream>
using namespace std;
int main(){
  int a,b;
  cout << "Enter the value of a & b : ";
  cin >> a >> b;
  a = a ^ b;
  b = a ^ b;
  a = a ^ b;
  cout << "After swapping : " << a << " " << b << endl;
  return 0;
}