#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int> deque;
    deque.push_back(1);
    deque.push_back(2);
    deque.push_back(3);
    deque.push_back(4);
    deque.push_front(5);

    for(int i = 0 ; i < deque.size() ; i++){
        cout << deque[i] << " ";
    }
    cout << endl;

    deque.pop_back();
    deque.pop_front();

    for(int i = 0 ; i < deque.size() ; i++){
        cout << deque[i] << " ";
    }
    cout << endl;

    deque.erase(deque.begin() + 1);
    for(int i = 0 ; i < deque.size() ; i++){
        cout << deque[i] << " ";
    }
    cout << endl;

    return 0;
}