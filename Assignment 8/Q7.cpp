#include<iostream>
using namespace std;
template <class T>
class Test{
    private :
        T var;
    public : 
        Test(T val){
            var = val;
        }
        T divideby2(){
            return var/2;
        }
        void display(){
            cout << "Value : " << var << endl;
        }
};
int main(){
    Test<int> t1(10);
    t1.display();
    cout << "Result : " << t1.divideby2() << endl;

    Test<float> t2(29.78);
    t2.display();
    cout << "Result : " << t2.divideby2() << endl;

    Test<double> t3(4354.74);
    t3.display();
    cout << "Result : " << t3.divideby2() << endl;

    Test<long> t4(4354893987);
    t4.display();
    cout << "Result : " << t4.divideby2() << endl;
    return 0;
}