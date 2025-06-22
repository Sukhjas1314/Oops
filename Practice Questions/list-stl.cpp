#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int> dll;
    dll.push_back(1);
    dll.push_back(2);
    dll.push_back(3);
    dll.push_back(4);
    dll.push_back(5);

    for(int n : dll){
        cout << n << " ";
    }
    cout << endl;

    dll.reverse();
    for(int n : dll){
        cout << n << " ";
    }
    cout << endl; 
    return 0;
}
    