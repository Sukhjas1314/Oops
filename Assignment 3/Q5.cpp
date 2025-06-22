#include<iostream>
using namespace std;
class Rectangle{
  private :
    float width;
    float length;
  public : 
    Rectangle(){}
    Rectangle(float w,float l){
      width = w;
      length = l;
    }
    float area(){
      return width*length;
    }
    float display(){
      return area();
    }
};
int main(){
  int n;
  cout << "Enter the size of the array : ";
  cin >> n;
  Rectangle r[] = {
    Rectangle(3.5,5.4),
    Rectangle(3,8.9),
    Rectangle(7.5,2)
  };
  for(int i = 0 ; i < n ; i++){
    cout << "The area of Rectangle " << i+1 << " is : ";
    float result = r[i].display();
    cout << result <<" unit sq." << endl;
  }
  cout << endl;
  return 0;
}