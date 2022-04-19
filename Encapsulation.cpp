//Encapsulation
#include<bits/stdc++.h>

using namespace std;

class player{
private: 
    string name;
    string teamName;
    int points;
    list<string>trophy;
public:
    player(string Name, string Team){
        name=Name;
        teamName=Team;
        points=0;
    }
    void addPoint(int p){
        points+=p;
    }
    void removePoint(int p){
        points-=p;
    }
    void showData(){
        cout<<"Name: "<<name<<endl;
        cout<<"Team Name: "<<teamName<<endl;
        cout<<"Points: "<<points<<endl;
        cout<<"Achievements:"<<endl;
        for(auto x:trophy)cout<<x<<", ";
        cout<<endl;
    }
    void addAchievements(string tr){
        trophy.push_back(tr);
    }
};

int main()
{
    player p1("Niloy","Predator");
    p1.addPoint(5);
    p1.addPoint(4);
    p1.removePoint(1);
    p1.addAchievements("Trophy1");
    p1.addAchievements("Trophy4");
    p1.addAchievements("Player of the match 1");
    p1.addAchievements("Trophy2");
    p1.showData();

}