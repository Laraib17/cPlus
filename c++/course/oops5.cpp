//Runtime polymorphism: It is rsolved at runtime and is done using function over-riding   
#include<iostream>
using namespace std;
class parent{
    public:
    virtual void print(){       //virtual keyword makes function over-ride. 
        cout<<"Parent class"<<endl;
    }
    void show(){
        cout<<"parent class"<<endl;
    }
};
class child: public parent{
    public:
    void print(){
        cout<<"child class"<<endl;
    }
    void show(){
        cout<<"child class"<<endl;
    }
};
int main(){
    parent *p;
    child c;
    p=&c;    // here we have assigned the p as object of child class
    p->print();        //added virtual so function overrided(output from child class)
    p->show();         //didnt add virtual so function didnt overrided(output from parent class)
};