                // Single Inheritance
// #include<iostream>
// using namespace std;
// class base{
//     public :
//     void print(){
//         cout << "This is the base class." << endl;
//     }
// };
// class derived : public base{
//     public :
//         void display(){
//             print();
//             cout << "This is the derived class." << endl;
//         }
// };
// int main(){
//     derived d;
//     d.display();
//     cout << endl;

//     return 0;
// }


                // Multiple Inheritance
// #include<iostream>
// using namespace std;
// class base1{
//     public :
//         void print(){
//             cout << "This is the base class 1." << endl;
//         }
// };
// class base2{
//     public :
//         void display(){
//             cout << "This is the base class 2." << endl;
//         }
// };
// class derived : public base1,public base2{
//     public :
//         void show(){
//             print();
//             display();
//             cout << "This is the derived class." << endl;
//         }
// };
// int main(){
//     derived d;
//     d.show();
//     cout << endl;
//     return 0;
// }



                    // Multilevel Inheritance
// #include<iostream>
// using namespace std;
// class parent{
//     public : 
//         void print(){
//             cout << "This is the parent class." << endl;
//         }
// };
// class child : public parent{
//     public : 
//         void display(){
//             print();
//             cout << "This is the child class." << endl;
//         }
// };
// class grandchild : public child{
//     public : 
//         void show(){
//             display();
//             cout << "This is the grandchild class." << endl;
//         }
// };
// int main(){
//     grandchild gc;
//     gc.show();
//     cout << endl;

//     return 0;
// }



                    // Hierarchical Inheritance
// #include<iostream>
// using namespace std;
// class parent{
//     public: 
//         void print(){
//             cout << "This is the parent class." << endl;
//         }
// };
// class child1 : public parent{
//     public: 
//         void print1(){
//             print();
//             cout << "This is the child-1 class." << endl;
//         }
// };
// class child2 : public parent{
//     public: 
//         void print2(){
//             print();
//             cout << "This is the child-2 class." << endl;
//         }
// };
// int main(){
//     child1 c1;
//     c1.print1();
//     cout << endl;

//     child2 c2;
//     c2.print2();
//     cout << endl;

//     return 0;
// }



                    // Hybrid Inheritance
// #include<iostream>
// using namespace std;
// class base1{
//     public: 
//         void print(){
//             cout << "This is base-1 class" << endl;
//         }
// };
// class derived1 : public base1{
//     public: 
//         void print1(){
//             print();
//             cout << "This is derived-1 class" << endl;
//         }
// };
// class base2{
//     public: 
//         void print2(){
//             cout << "This is base-2 class" << endl;
//         }
// };
// class derived2 : public base2,public derived1{
//     public: 
//         void print3(){
//             print1();
//             print2();
//             cout << "This is derived-2 class" << endl;
//         }
// };
// int main(){
//     derived2 d;
//     d.print3();
//     cout << endl;
//     return 0;
// }