#include<iostream>
using namespace std;
template <class T1,class T2>
void show(T1 a,T2 b){
    cout << a << " " << b << endl;
}
int main(){
    show(100,"Hello Hello");
    show('k',79);
    show(3.45,2873);
    
    return 0;
}