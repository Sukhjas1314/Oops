#include<iostream>
#include<algorithm>
#include<vector>
#include<numeric>
using namespace std;
int main(){
    vector<int> vec;
    vec.push_back(4);
    vec.push_back(3);
    vec.push_back(2);
    vec.push_back(5);
    vec.push_back(3);

    for(auto it = vec.begin() ; it != vec.end() ; ++it){
        cout << *it << " ";
    }
    cout << endl;

    sort(vec.begin(),vec.end());
    for(auto it = vec.begin() ; it != vec.end() ; ++it){
        cout << *it << " ";
    }
    cout << endl;
    int count3 = count(vec.begin(),vec.end(),3);
    cout << "Count of 3 : " << count3 << endl;

    int sum = accumulate(vec.begin(),vec.end(),0);
    cout << "Sum of the elements : " << sum << endl;

    return 0;
}
