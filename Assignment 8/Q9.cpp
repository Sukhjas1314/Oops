#include<iostream>
using namespace std;
template <class T,int n>
class Test{
    private :
        T a[n];
    public :
        void setElement(int idx,T val){
            if(idx >= 0 && idx < n){
                a[idx] = val;
            }
            else{
                cout << "Index is out of bounds." << endl;
            }
        }

        T getElement(int idx){
            if(idx >= 0 && idx < n){
                return a[idx];
            }
            else{
                cout << "Index is out of bounds." << endl;
                return T();
            }
        }

        void display(){
            cout << "Array elements : ";
            for(int i = 0 ; i < n ; i++){
                cout << a[i] << " ";
            }
            cout << endl;
        }
};
int main(){
    Test<int,5> intarr;
    intarr.setElement(0,1); 
    intarr.setElement(1,2); 
    intarr.setElement(2,4); 
    intarr.setElement(3,10); 
    intarr.setElement(4,45);
    intarr.display();

    Test<float,3> floatarr;
    floatarr.setElement(0,1.3);
    floatarr.setElement(1,4.23);
    floatarr.setElement(2,5.1);
    floatarr.display();

    cout << "Element at index 6 : " << intarr.getElement(6) << endl;

    return 0;
}