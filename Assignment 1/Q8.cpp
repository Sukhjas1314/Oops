#include<iostream>
using namespace std;
int main(){
  int n;
  cout << "Enter the no. of days of late return : ";
  cin >> n;
  if(n <= 5){
    cout << "The fine is 50 paise." << endl;
  }
  else if(n >= 6 && n <= 10){
    cout << "The fine is 1 rupee." << endl;
  }
  else if(n > 10 && n <= 30){
    cout << "The fine is 5 rupees." << endl;
  }
  else if(n > 30){
    cout << "Your fine is 5 rupees and your membership is also cancelled." << endl;
  }
  return 0;
}