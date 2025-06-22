#include<iostream>
using namespace std;
template <typename T1,typename T2>
void show(T1 a,T2 b){
    cout << a << " " << b << endl;
}
void show(int x,int y){
    cout << "Overloaded with integers. Sum : " << x + y << endl;
}
int main(){
    show(100,"Hello Hello");
    show(3,3);

    return 0;
}