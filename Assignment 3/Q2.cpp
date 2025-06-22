#include<iostream>
using namespace std;
class Y;
class X{
  private :
    int x;
  public :
    X(){
      x = 10;
    }
    friend void swap(X &a,Y &b);
    void display(){
      cout << "Value of x : " << x << endl;
    }
};
class Y{
  private :
    int y;
  public :
    Y(){
      y = 25;
    }
    friend void swap(X &a,Y &b);
    void display(){
      cout << "Value of y : " << y << endl;
    }
};
void swap(X &a,Y &b){
  int temp = a.x;
  a.x = b.y;
  b.y = temp;
}
int main(){
  X x1;
  Y y1;

  cout << endl << "Before Swapping : " << endl;

  x1.display();
  y1.display();

  swap(x1,y1);
  
  cout << endl << "After Swapping : " << endl;

  x1.display();
  y1.display();

  cout << endl;
  return 0;
}