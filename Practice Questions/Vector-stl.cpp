#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> numbers;
    numbers.push_back(1);
    numbers.push_back(2);
    numbers.push_back(3);
    numbers.push_back(4);
    numbers.push_back(5);

    for(int i = 0 ; i < numbers.size() ; i++){
        cout << numbers[i] << " ";
    }
    cout << endl;
    return 0;
}