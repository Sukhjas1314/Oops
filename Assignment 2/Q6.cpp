        // (1)
// #include<iostream>
// using namespace std;
// class A{
//   public :
//     void fun();
// };
// void A::fun(){
//   cout << "In fun()" << endl;
// }
// int main(){
//   A obj;
//   obj.fun();
//   cout << endl;
//   return 0;
// }



        // (2)
// #include<iostream>
// using namespace std;
// int x = 100;
// int main(){
//   int x = 90;
//   cout << "Global x : " << ::x << endl;
//   cout << "Local x : " << x << endl;
//   return 0;
// }



        // (3)
// #include<iostream>
// using namespace std;
// class A{
//         public :
//                 static int count;
//                 void increment(){
//                         count++;
//                         // cout << count << endl;
//                 }
// };
// int A::count = 0;
// int main(){
//         cout << A::count << endl;

//         A obj;
//         obj.increment();
//         obj.increment();
//         obj.increment();
//         obj.increment();
//         obj.increment();
//         obj.increment();

//         cout << A::count << endl; 

//         obj.increment();
//         obj.increment();
//         cout << A::count << endl;

//         cout << endl;
//         return 0;
// }



          // (4)
// #include<iostream>
// int main(){
//   int n,m;
//   std::cout << "Enter 1st number : ";
//   std::cin >> n;
//   std::cout << "Enter 2nd number : ";
//   std::cin >> m;

//   std::cout << "The sum of the numbers is : " << n + m << std::endl;
//   std::cout << std::endl;
//   return 0;
// }