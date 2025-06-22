#include<iostream>
using namespace std;
class Rectangle{
  private :
    int width;
    int height;
  public :
    Rectangle(){
      width = 0;
      height = 0;
    }
    void getdata(){
      cout << "Width : ";
      cin >> width;
      cout << "Height : ";
      cin >> height;
    }
    void calculateArea(){
      int area = width * height;
      cout << "The area is : " << area << endl;
    }
};
int main(){
  Rectangle r1;

  r1.getdata();
  cout << endl;

  r1.calculateArea();
  cout << endl;
  
  return 0;
}