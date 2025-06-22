#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> stk;
    stk.push(1);
    stk.push(2);
    stk.push(3);
    stk.push(4);

    while(!stk.empty()){
        cout << stk.top() << " ";
        stk.pop();
    }
    cout << endl;
    return 0;
}