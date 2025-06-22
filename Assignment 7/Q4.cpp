                        // Arthematic
#include<iostream>
using namespace std;
class Number{
    private :
        float x;
    public :
        Number(){
            x = 0;
        }
        Number(float x){
            this->x = x;
        }
        Number operator+(Number &n){
            return Number(x + n.x);
        }
        Number operator-(Number &n){
            return Number(x - n.x);
        }
        Number operator*(Number &n){
            return Number(n.x * x);
        }
        Number operator/(Number &n){
            return Number(x / n.x);
        }
        bool operator==(Number &n){
            return x == n.x;
        }
        bool operator<=(Number &n){
            return x <= n.x;
        }
        bool operator>=(Number &n){
            return x >= n.x;
        }
        bool operator<(Number &n){
            return x < n.x;
        }
        bool operator>(Number &n){
            return x > n.x;
        }
        void show(){
            cout << "Number : " << x << endl; 
        }
};
int main(){
    Number n1(3);
    Number n2(5);
    Number n3 = n2 + n1;
    Number n4 = n2 - n1;
    Number n5 = n2 * n1;
    Number n6 = n2 / n1;
    if(n2 == n1){
        cout << "n1 is equal to n2" << endl;
    }
    else if(n2 <= n1){
        cout << "n1 is greater than or equal to n2" << endl;
    }
    else if(n2 >= n1){
        cout << "n1 is smaller than or equal to n2" << endl;
    }
    else if(n2 < n1){
        cout << "n1 is greater than n2" << endl;
    }
    else if(n2 > n1){
        cout << "n1 is smaller than n2" << endl;
    }
    n3.show();
    n4.show();
    n5.show();
    n6.show();
    return 0;
}
