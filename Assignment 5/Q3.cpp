#include<iostream>
using namespace std;
class base{
    private :
        int vprivate;
    protected :
        int vprotected;
    public : 
        int vpublic;
        base(){
            vprivate = 1;
            vprotected = 2;
            vpublic = 3;
        }
};
class privatederived : private base{
    public :
        void print(){
            // cout << "Private variable : " << vprivate << endl;
            cout << "Protected variable : " << vprotected << endl;
            cout << "Public variable : " << vpublic << endl;
        }
};
class protectedderived : protected base{
    public :
        void display(){
            // cout << "Private variable : " << vprivate << endl;
            cout << "Protected variable : " << vprotected << endl;
            cout << "Public variable : " << vpublic << endl;
        }
};
class publicderived : public base{
    public :
        void show(){
            // cout << "Private variable : " << vprivate << endl;
            cout << "Protected variable : " << vprotected << endl;
            cout << "Public variable : " << vpublic << endl;
        }
};
int main(){
    privatederived pd1;
    cout << "Private inheritance -> " << endl;
    pd1.print();
    cout << endl;

    protectedderived pd2;
    cout << "Protected inheritance -> " << endl;
    pd2.display();
    cout << endl;

    publicderived pd3;
    cout << "Public inheritance -> " << endl;
    pd3.show();
    cout << endl;

    return 0;
}