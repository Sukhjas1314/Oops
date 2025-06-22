#include<iostream>
using namespace std;
int main(){
  float c,f;
  cout << "Enter the temperature in celcius : ";
  cin >> c;
  f = 9*c/5 + 32;
  cout << "The temperature in fahrenheit : " << f << endl;
  return 0;
}