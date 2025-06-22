#include<iostream>
using namespace std;
void divide(int a,int b){
    if(b == 0){
        throw "Division by 0 is not allowed";
    }
    cout << "Result is : " << (double)a/b << endl;
}
int main(){
    int a,b;
    cout << "Value of a : ";
    cin >> a;
    cout << "Valiue of b : ";
    cin >> b;
    try{
        divide(a,b);
    }
    catch(const char *e){
        cout << "Exception caught : " << e << endl;
    }
    cout << "After Exception is handled , program continues normally" << endl;

    return 0;
}