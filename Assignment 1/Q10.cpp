#include<iostream>
using namespace std;
int main(){
  int n;
  cout << "Enter the value of n : ";
  cin >> n;
  if(n % 2 == 0){
    cout << "It is an even number." << endl;
  }else{
    cout << "It is an odd number." << endl;
  }
  return 0;
}