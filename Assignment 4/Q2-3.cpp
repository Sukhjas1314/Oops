#include<iostream>
using namespace std;
class Rectangle{
    private :
        float length;
        float breadth;
    public :
        Rectangle(){
            length = 1.0;
            breadth = 1.0;
        }
        Rectangle(float l,float b = 1.0){
            length = l;
            breadth = b;
            cout << "Rectangle with length : " << length << " and " << "breadth : " << breadth << endl;
        }
        void area(){
            cout << "The area of rectangle is : " << length * breadth << " unit sq." << endl;
        }
        ~Rectangle(){
            cout << "Rectangle with length : " << length << " and " << "breadth : " << breadth << " deleted" << endl;
        }
};
int main(){
    Rectangle rect[3] = {Rectangle(3.0) , Rectangle(3.4,4.2) , Rectangle(6)};
    for(int i = 0 ; i < 3 ; i++){
        cout << "Rectangle " << i + 1 << " : " << endl;
        rect[i].area();
    }
    cout << endl;
    return 0;
}