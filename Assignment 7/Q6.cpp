#include<iostream>
using namespace std;
class Time{
    private :
        int h,m,s;
    public :
        Time(int h = 0,int m = 0,int s = 0):h(h),m(m),s(s){
            this->adjust();
        }
        void adjust(){
            if(s >= 60){
                m = m + 1;
                s = s - 60;
            }
            if(m >= 60){
                h = h + 1;
                m = m - 60;
            }
        }
        Time operator+(Time &t){
            Time T;
            T.h = t.h + h;
            T.m = t.m + m;
            T.s = t.s + s;
            T.adjust();
            return T;
        }
        void show(){
            cout << "Time is : " << h << "hrs " << m << "min " << s << "sec " << endl;
        }
};
int main(){
    Time t1(3,50,34);
    Time t2(2,40,28);
    Time t3 = t1 + t2;
    t3.show();
    return 0;
}