#include<iostream>
using namespace std;
class Book{
    public :
        string title;
        string author;
        float price;
    
        Book(){
            price = 0;
        }
        Book(string t,string a,float p){
            title = t;
            author = a;
            price = p;
        }
};
class Textbook : public Book{
    private : 
        string subject;
    public : 
        Textbook(){}
        Textbook(string t,string a,string s,float p) : Book(t,a,p){
            subject = s;
        }
        void print(){
            cout << "Title : " << title << endl;
            cout << "Author : " << author << endl;
            cout << "Subject : " << subject << endl;
            cout << "Price : " << price << endl;
        }
};
int main(){
    Textbook t("Let us C","ABCD","C programming",500.0);
    
    t.print();
    cout << endl;

    return 0;
}