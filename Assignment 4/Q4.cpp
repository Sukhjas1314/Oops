#include<iostream>
using namespace std;
class Rectangle{
    private : 
        float length;
        float breadth;
    public :
        Rectangle(){
            length = 1;
            breadth = 1;
        }
        Rectangle(float l,float b){
            length = l;
            breadth = b;
            cout << "Rectangle with length : " << length << " and breadth : " << breadth << endl;
        }
        void area(){
            cout << "The area of the rectangle is : " << length * breadth << " unit sq." << endl;
        }
};
int main(){
    int *intptr = new int(5);
    cout << "Dynamically allocated int : " << *intptr << endl;
    delete intptr;
    cout << endl;

    float *floatptr = new float(5.25);
    cout << "Dynamically allocated float : " << *floatptr << endl;
    delete floatptr;
    cout << endl;

    cout << "Dynamically allocated integer array : " << endl;
    int *intarray = new int[3];
    for(int i = 0 ; i < 3 ; i++){
        intarray[i] = i * 10;
        cout << "intarray[" << i << "] : " << intarray[i] << endl; 
    }
    delete[] intarray;
    cout << endl;

    cout << "Dynamically allocated float array : " << endl;
    float *floatarray = new float[3];
    for(int i = 0 ; i < 3 ; i++){
        floatarray[i] = i * 2.5;
        cout << "floatarray[" << i << "] : " << floatarray[i] << endl;
    }
    delete[] floatarray;
    cout << endl;

    cout << "Dynamically allocated class object : " << endl;
    Rectangle *r1ptr = new Rectangle(4.0,5.0);
    r1ptr->area();
    delete r1ptr;
    cout << endl;

    cout << "Dynamically allocated array of objects : " << endl;
    Rectangle *r2array = new Rectangle[3];
    for(int i = 0 ; i < 3 ; i++){
        r2array[i] = Rectangle(i * 5 , i * 10);
        r2array[i].area();
    }
    delete[] r2array;
    cout << endl;

    return 0;
}