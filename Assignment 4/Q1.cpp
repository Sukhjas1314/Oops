#include<iostream>
using namespace std;
class Rectangle{
    private :
        int length;
        int breadth;
    public :
        Rectangle(){
            length = 0;
            breadth = 0;
        }
        Rectangle(int l,int b){
            length = l;
            breadth = b;
        }
        Rectangle(int n){
            length = n;
            breadth = n;
        }
        void area(){
            cout << "The area of the rectangle is : " << length * breadth << " unit sq." << endl;
        }
};
int main(){
    int l , b , n;
    cout << "Enter the length : ";
    cin >> l;

    cout << "Enter the breadth : ";
    cin >> b;

    cout << "Enter the number : ";
    cin >> n;

    Rectangle r1;
    Rectangle r2(l,b);
    Rectangle r3(n);

    r1.area();
    r2.area();
    r3.area();

    cout << endl;
    return 0;
}