#include<iostream>
using namespace std;
int main(){
  int n;
  cout << "Enter value of n : ";
  cin >> n;
  
          // Use of +=
  for(int i = 1 ; i <= n ; i+=1){
    cout << i << endl;
  }

          // Use of -=
  // for(int i = n ; i > 0 ; i-=1){
  //   cout << i << endl;
  // }
  return 0;
}