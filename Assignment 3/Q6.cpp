#include<iostream>
using namespace std;
inline float cube(float s){
  return s*s*s;
}
int main(){
  float n;
  cout << "Enter the number you want cube of : ";
  cin >> n;
  cout << "The cube of " << n << " : " << cube(n) << endl;
  cout << endl;
  return 0;
}