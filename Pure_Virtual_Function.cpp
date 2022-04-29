#include<bits/stdc++.h>

using namespace std;

class Sports{
public:
    virtual void play() = 0; 
    //Pure virtual function
    //It forces every derived class to make their own implementation of this function. Otherwise, program will not be executed

    //This class can also be called an abstract class because it has at least one pure virtual function
};

class Football:public Sports{
public:
    void play(){
        cout<<"Football is going on. . .\n";
    }
};

class Basketball:public Sports{
public:
    void play(){
        cout<<"Basketball is going on. . .\n";
    }
};

int main()
{
    Sports* s1 = new Football();
    Sports* s2 = new Basketball();

    Sports* sports[] = {s1,s2}; //Polymorphism
    
    for(int i=0;i<2;i++){
        sports[i]->play();
    }
}