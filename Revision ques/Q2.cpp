#include<iostream>
using namespace std;
class Config{
    private :
        static int count;
        string lang;
        static string def_lang;
    public : 
        Config(){
            count++;
            lang = def_lang;
            if(count > 0){
                cout << lang << endl;
            }
        }
        Config(string l){
            count++;
            lang = l;
            cout << lang << endl;
        }
        Config(Config &c){
            count++;
            lang = c.lang;
            cout << lang << endl;
        }
        static void display(){
            cout << "The number of active players : " << count << endl;
        }
};
int Config::count = -1;
string Config::def_lang = "English";
int main(){
    static Config c1;
    Config c2;
    Config c3("Punjabi");
    Config c4(c1);
    cout << endl;
    
    Config::display();

    cout << endl;
    return 0;
}