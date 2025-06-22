/*Q1. Design a book management system for a book store where books of different subjects
(physics, maths, chemistry and biology) are managed. Each book has unique cleanup
requirement from the data when it is purchased by any customer and addition in data when
new books are added by the seller. Design a base class store_items containing string
representing book name, virtual destructor, a pure virtual function void describe() to describe
the items. And derived classes of 4 subjects mentioned above with data members as string
type author name, int type dynamic array to store book number. Create a solution in such it
takes input from the user about which book is purchased and added in stock. For deletion of
a book use base class pointers. Try to implement without a virtual destructor and with virtual
destructor and observe what happens.*/

#include<iostream>
#include<vector>
using namespace std;
class StoreItems{
    protected : 
        string bookname;
    public :    
        StoreItems(string name){
            bookname = name;
        }
        virtual void describe() = 0;
        virtual void addBook(int bookno) = 0;
        virtual void removeBook(int bookno) = 0;
        virtual string getSubject() = 0;
        virtual ~StoreItems(){
            cout << "This is the destructor of book : " << bookname << endl; 
        }
};
class Physics : public StoreItems{
    private : 
        string authorName;
        int *bookno;
        int bookCount;
    public :
        Physics(string name,string author) : StoreItems(name),authorName(author){
            bookno = NULL;
            bookCount = 0;
        }
        void addBook(int bno) override{
            int *temp = new int[bookCount + 1];
            for(int i = 0 ; i < bookCount ; i++){
                temp[i] = bookno[i];
            }
            temp[bookCount++] = bno;
            delete[] bookno;
            bookno = temp;
        }
        void removeBook(int bno) override{
            int *temp = new int[bookCount - 1];
            int j = 0;
            bool found = false;
            for(int i = 0 ; i < bookCount ; i++){
                if(bookno[i] == bno){
                    found == true;
                }
                else{
                    temp[j++] = bookno[i];
                }
            }
            if(found){
                --bookCount;
                delete[] bookno;
                bookno = temp;
            }
            else{
                cout << "Book number : " << bno << " is not in the Physics inventory" << endl;
                delete[] temp;
            }
        }
        void describe() override{
            cout << "Physics book : " << bookname << " by " << authorName << endl << "Available book numbers : ";
            for(int i = 0 ; i < bookCount ; i++){
                cout << bookno[i] << " ";
            }
            cout << endl;
        }
        string getSubject() override{
            return "Physics";
        }
        ~Physics(){
            cout << "Physics destructor for : " << bookname << endl;
            delete[] bookno;
        }
};
class Maths : public StoreItems{
    private :
        string authorname;
        int *bookno;
        int bookCount;
    public :
        Maths(string name,string author) : StoreItems(name),authorname(author){
            bookno = NULL;
            bookCount = 0;
        }
        void addBook(int bno) override{
            int *temp = new int[bookCount + 1];
            for(int i = 0 ; i < bookCount ; i++){
                temp[i] = bookno[i];
            }
            temp[bookCount++] = bno;
            delete[] bookno;
            bookno = temp;
        }
        void removeBook(int bno) override{
            int *temp = new int[bookCount - 1];
            int j = 0;
            bool found = false;
            for(int i = 0 ; i < bookCount ; i++){
                if(bookno[i] == bno){
                    found = true;
                }
                else{
                    temp[j++] = bookno[i];
                }
            }
            if(found){
                --bookCount;
                delete[] bookno;
                bookno = temp;
            }
            else{
                cout << "Book number : " << bno << " is not in the Maths inventory" << endl;
                delete[] temp;
            }
        }
        void describe() override{
            cout << "Maths book : " << bookname << " by " << authorname << endl << "Available books : ";
            for(int i = 0 ; i < bookCount ; i++){
                cout << bookno[i] << " ";
            }
            cout << endl;
        }
        string getSubject() override{
            return "Maths";
        }
        ~Maths(){
            cout << "This is Maths destructor for : " << bookname << endl;
            delete[] bookno;
        }
};
class Chemistry : public StoreItems{
    private :
        string authorName;
        int *bookno;
        int bookCount;
    public :
        Chemistry(string name,string author) : StoreItems(name),authorName(author){
            bookno = NULL;
            bookCount = 0;
        }
        void addBook(int bno) override{
            int *temp = new int[bookCount + 1];
            for(int i = 0 ; i < bookCount ; i++){
                temp[i] = bookno[i];
            }
            temp[bookCount++] = bno;
            delete[] bookno;
            bookno = temp;
        }
        void removeBook(int bno) override{
            int *temp = new int[bookCount - 1];
            int j = 0;
            bool found = false;
            for(int i = 0 ; i < bookCount ; i++){
                if(bookno[i] == bno){
                    found = true;
                }
                else{
                    temp[j++] = bookno[i];
                }
            }
            if(found){
                --bookCount;
                delete[] bookno;
                bookno = temp;
            }
            else{
                cout << "Book number : " << bno << " is not in the Chemistry inventory" << endl;
                delete[] temp;
            }
        }
        void describe() override{
            cout << "Chemistry book : " << bookname << " by " << authorName << endl << "Available books : ";
            for(int i = 0 ; i < bookCount ; i++){
                cout << bookno[i] << " ";
            }
            cout << endl;
        }
        string getSubject() override{
            return "Chemistry";
        }
        ~Chemistry(){
            cout << "This is Chemistry destructor for : " << bookname << endl;
            delete[] bookno;
        }
};
class Biology : public StoreItems{
    private :
        string authorname;
        int *bookno;
        int bookCount;
    public :
        Biology(string name,string author) : StoreItems(name),authorname(author){
            bookno = NULL;
            bookCount = 0;
        }
        void addBook(int bno) override{
            int *temp = new int[bookCount + 1];
            for(int i = 0 ; i < bookCount ; i++){
                temp[i] = bookno[i];
            }
            temp[bookCount++] = bno;
            delete[] bookno;
            bookno = temp;
        }
        void removeBook(int bno) override{
            int *temp = new int[bookCount - 1];
            int j = 0;
            bool found = false;
            for(int i = 0 ; i < bookCount ; i++){
                if(bookno[i] == bno){
                    found = true;
                }
                else{
                    temp[j++] = bookno[i];
                }
            }
            if(found){
                --bookCount;
                delete[] bookno;
                bookno = temp;
            }
            else{
                cout << "Book number : " << bno << " is not in the Biology inventory" << endl;
                delete[] temp;
            }
        }
        void describe() override{
            cout << "Biology book : " << bookname << " by " << authorname << endl << "Available books : ";
            for(int i = 0 ; i < bookCount ; i++){
                cout << bookno[i] << " ";
            }
            cout << endl;
        }
        string getSubject() override{
            return "Biology";
        }
        ~Biology(){
            cout << "This is Biology destructor for : " << bookname << endl;
            delete[] bookno;
        }
};
int main(){
    vector<StoreItems*> inventory;

    Physics *phy = new Physics("Quantum Mechanics","Einstein");
    phy->addBook(101);
    phy->addBook(102);
    inventory.push_back(phy);

    Maths *math = new Maths("Alzebraic Structures","Euler");
    math->addBook(201);
    math->addBook(202);
    inventory.push_back(math);

    Chemistry *chem = new Chemistry("Compounds","Einstein");
    chem->addBook(301);
    chem->addBook(302);
    inventory.push_back(chem);

    Biology *bio = new Biology("Reproduction","Einstein");
    bio->addBook(401);
    bio->addBook(402);
    inventory.push_back(bio);

    int choice;
    while(choice != 4){
        cout << endl << "--------Book Store Management----------" << endl;
        cout << "1. Display Inventory" << endl;
        cout << "2. Purchase a book" << endl;
        cout << "3. Add a new book" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice : ";
        cin >> choice;

        switch(choice){
            case 1 :{
                cout << "Current Inventory" << endl;
                for(auto item : inventory){
                    item->describe();
                }
                break;
            }
            case 2 :{
                string subject;
                int bookno;
                cout << "Enter the subject(Physics/Maths/Chemistry/Biology) : ";
                cin >> subject;

                cout << "Enter book number to purchase : ";
                cin >> bookno;

                bool found = false;
                for(auto item : inventory){
                    if(item->getSubject() == "Physics"){
                        item->removeBook(bookno);
                        found = true;
                    }
                }
                if(!found){
                    cout << "No matching subject or book found" << endl;
                }
                break;
            }
            case 3 :{
                string subject;
                cout << "Enter the subject(Physics/Maths/Chemistry/Biology) : ";
                cin >> subject;

                string bookname;
                cout << "Enter the book name : ";
                cin.ignore();
                getline(cin,bookname);

                string authorname;
                cout << "Enter the author name : ";
                cin.ignore();
                getline(cin,authorname);

                int bookno;
                cout << "Enter book number : ";
                cin >> bookno;

                StoreItems *newbook = NULL;
                if(subject == "Physics"){
                    newbook = new Physics(bookname,authorname);
                }
                else if(subject == "Maths"){
                    newbook = new Maths(bookname,authorname);
                }
                else if(subject == "Chemistry"){
                    newbook = new Chemistry(bookname,authorname);
                }
                else if(subject == "Biology"){
                    newbook = new Biology(bookname,authorname);
                }

                if(newbook){
                    newbook->addBook(bookno);
                    inventory.push_back(newbook);
                    cout << "Book added successfully" << endl;
                }
                else{
                    cout << "Invalid subject entered" << endl;
                }
                break;
            }
            case 4 :{
                cout << "Exiting program..." << endl;
                break;
            }
            default :{
                cout << "Invalid choice. Try again!" << endl;
            }
        }
    }
    for(auto item : inventory){
        delete item;
    }
    return 0;
}