#include<bits/stdc++.h>

using namespace std;

class player{
    string name,teamName;
protected:
    int rating;
public:
    player(string name, string teamName){
        this->name=name;
        this->teamName=teamName;
        rating=0;
    }

    void showDetails(){
        cout<<"Name: "<<name<<endl;
        cout<<"Team Name: "<<teamName<<endl;
        cout<<endl;
    }

    void analysis(){
        cout<<name;
        if(rating<4)cout<<" is not good because the player has rating "<<rating<<endl;
        else cout<<" is good because the player has rating "<<rating<<endl;
    }
};

class footballPlayer:public player{
public:
    footballPlayer(string name,string teamName):player(name,teamName){
    }

    void goalScored(){
        rating++;
    }
};

class basketballPlayer:public player{
public:
    basketballPlayer(string name, string teamName):player(name,teamName){

    }
    void basketScored(){
        rating++;
    }
};

int main()
{
    footballPlayer p1("Niloy","Predator");
    basketballPlayer p2("Shakil","CSEBasketball");

    p1.goalScored();
    p1.goalScored();
    p1.goalScored();
    p1.goalScored();
    p1.goalScored();

    p2.basketScored();
    p2.basketScored();
    p2.basketScored();

    p1.showDetails();
    p2.showDetails();

    p1.analysis();
    p2.analysis();

    //use of pointer
    //polymorphism
    player* pp1=&p1;
    player* pp2=&p2;

    pp1->analysis();
    pp2->analysis();
}