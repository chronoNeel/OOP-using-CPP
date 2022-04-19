//Inheritance
#include<bits/stdc++.h>

using namespace std;

class player{
protected: //This Access Modifier allows subclass to use it's attributes
    string name,teamName;
    list<string>achievements;
public:
    player(string name, string teamName){
        this->name=name;
        this->teamName=teamName;
    }

    void addAchievements(string ac){
        achievements.push_back(ac);
    }

    void showDetails(){
        cout<<"Name: "<<name<<endl;
        cout<<"Team Name: "<<teamName<<endl;
        cout<<"Achievements: ";
        for(auto x:achievements)cout<<x<<" ";
        cout<<endl;
    }
};

class footballPlayer:public player{
    int goalScored;
public:
    footballPlayer(string name,string teamName,int goal):player(name,teamName){
        goalScored=goal;
    }

    void showDetails(){
        cout<<"Name: "<<name<<endl;
        cout<<"Team Name: "<<teamName<<endl;
        cout<<"Achievements: ";
        cout<<"Goal Scored: "<<goalScored<<endl;
        for(auto x:achievements)cout<<x<<" ";
        cout<<"\n\n";
    }
};

int main()
{
    player p1("Niloy","Predator");
    p1.addAchievements("MoM1");
    p1.addAchievements("BestDEF2");
    p1.addAchievements("TrophyChamp");
    p1.showDetails();
    cout<<endl;

    footballPlayer p2("Shakil","Predator",6);
    p2.addAchievements("MoT");
    p2.addAchievements("MoM4");
    p2.addAchievements("TrophyChamp");
    p2.addAchievements("BestDEF");
    p2.showDetails();

    footballPlayer p3("Joy","Predator", 7);
    p3.addAchievements("MoM3");
    p3.addAchievements("TrophyChamp");
    p3.addAchievements("Top Scorer");
    p3.showDetails();
}