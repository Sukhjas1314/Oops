#include<iostream>
using namespace std;
template <class T>
void bubbleSort(T a[],int n){
    for(int i = 0 ; i < n - 1 ; i++){
        for(int j = n - 1 ; j > i ; j--){
            if(a[j-1] > a[j]){
                swap(a[j],a[j-1]);
            }
        }
    }
}
template <class T>
void display(T a[],int n){
    for(int i = 0 ; i < n ; i++){
        cout << a[i] << " ";
    }
    cout << endl;
}
int main(){
    int a[5] = {5,3,4,2,1};
    display(a,5);
    bubbleSort(a,5);
    display(a,5);
    cout << endl;

    float b[5] = {4.3,2.6,7.2,1.3,9.9};
    display(b,5);
    bubbleSort(b,5);
    display(b,5);
    cout << endl;

    char c[5] = {'z','d','y','a','t'};
    display(c,5);
    bubbleSort(c,5);
    display(c,5);
    cout << endl;

    return 0;
}