#include<iostream>

using namespace std;

class sports{
public:
    virtual void play(){
        cout<<"Sports is going on. . .\n";
    }
    //When a virtual function is invoked using base class pointer,
    //it checks whether this function is implemented in the derived class or not
    //if it is implemented in the derived class it says to execute that 
    //otherwise it says to execute this version from base class
};

class football:public sports{
public:
    void play(){
        cout<<"Football is going on. . .\n";
    }
};

class basketball:public sports{

};

int main()
{
    sports* s1 = new football();
    s1->play(); //football class has it's own implementation of play function

    sports* s2 = new basketball();
    s2->play(); /*basketball class has no implemaentation of play funcion of it's own.
                So play function from sports class (base class) is executed*/
    return 0;
}