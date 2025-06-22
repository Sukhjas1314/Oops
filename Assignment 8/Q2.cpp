#include<iostream>
using namespace std;
double divide(int a,int b){
    if(b == 0){
        throw "Division by 0 is not allowed";
    }
    return (double)a / b;
}
int main(){
    int a,b;

    try{
        cout << "Enter the integers : ";
        cin >> a >> b;

        if(!cin){
            throw "Input Error : Enter integers only";
        }
        double result = divide(a,b);
        cout << "Result : " << result << endl;
    }
    catch(const char *e){
        cout << "Exception caught : " << e << endl;
    }
    catch(...){
        cout << "Unexpected error" << endl;
    }
    cout << "After handling exception the code runs normally" << endl;
    return 0;
}