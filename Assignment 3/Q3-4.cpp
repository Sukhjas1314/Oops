#include<iostream>
using namespace std;
class Y;
class X{
  private :
    int x;
  public :
    X(){}
    X(int x){
      this->x = x;
    }
    friend void sum(X &a,Y &b);
};
class Y{
  private :
    int y;
  public :
    Y(){}
    Y(int y){
      this->y = y;
    }
    friend void sum(X &a,Y &b);
};
void sum(X &a,Y &b){
  int sum = a.x + b.y;
  cout << "The sum is : " << sum << endl;
}
int main(){
  X x1(30);
  Y y1(5);

  sum(x1,y1);

  return 0; 
}