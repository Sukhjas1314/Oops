#include<iostream>
using namespace std;
template <class T>
T MyMax(T x,T y){
    return x>y?x:y;
}
int main(){
    cout << MyMax(5,6) << endl;
    cout << MyMax(5.67,2.34) << endl;
    cout << MyMax('z','R') << endl;

    return 0;
}