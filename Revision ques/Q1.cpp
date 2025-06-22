#include<iostream>
using namespace std;
class Player{
  private :
    string name;
  public :
    int score;
    Player(){

    }
    void set_player(string n,int s){
      name = n;
      score = s;
    }
    void display(){
      cout << "Name : " << name << endl;
      cout << "Score : " << score << endl;
    }
};
class Team{
  private :
    Player players[3];
    int sum;
  public :
    Team(){
      sum = 0;
    }
    void set_player(){
      int score;
      string name;
      for(int i = 0 ; i < 3 ; i++){
        cout << "Enter the details of Player " << i+1 << " : " << endl;
        cin >> name >> score;
        players[i].set_player(name,score);
      }
    }
    void display(){
      for(int i = 0 ; i < 3 ; i++){
        players[i].display();
      }
    }
    void add_score(){
      for(int i = 0 ; i < 3 ; i++){
        sum += players[i].score;
      }
      cout << "Total score of team is : " << sum;
    }
    friend int comp_score(Team T1,Team T2);
};
int comp_score(Team T1,Team T2){
  if(T1.sum > T2.sum){
    return 1;
  }
  else {
    return 0;
  }
}
int main(){
  Team India,Pak;

  cout << "Details of Team India : " << endl;
  India.set_player();
  cout << endl;
  India.display();
  cout << endl;
  India.add_score();
  cout << endl << endl;

  cout << endl << "Details of Team Pakistan : " << endl;
  Pak.set_player();
  cout << endl;
  Pak.display();
  cout << endl;
  Pak.add_score();
  cout << endl << endl;

  int result = comp_score(India,Pak);
  if(result == 1){
    cout << "India is the winner." <<  endl;
  }
  else{
    cout << "Pakistan is the winner." << endl;
  }

  cout << endl;
  return 0;
}