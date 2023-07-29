//Types of inheritance:understanding using diamond problem
/*Base class has multiple parent class having a common ancestor class
    i.e class A -> enharit from (class B and class C)
        & class B(enhertir from class D which enharit fromt class f)
        & class C(enherit from class E and class f)
    so now here class A will be having prooperty of class f 2 times */
#include<iostream>
using namespace std;
class parent1{
    public:
    parent(){
        cout<<"Parent1 class"<<endl;
    }
};
class parent2{
    public: 
    parent(){
        cout<<"Parent2 class"<<endl;
    }
};
class child: public parent1{  //1.Single inheritance: class name 'child' inherit from parentc lass using (:) and we are accesing its public section.
        public:
        child(){
            cout<<"single inheritance"<<endl;
        }
};
class toy: public child{        //2.Multi-level inheritance: topy derives from child class which derievs from parent class
        public:
        toy(){
            cout<<"Mult-level inheritance"<<endl;
        }
};
class multi:public parent1,public parent2{     //3.Multiple inheritance: can inherit a property of more than one class at a time 
        public:
        multi(){
            cout<<"Multiple class"<<endl;
        }
};
class hrch1:public parent1{
    public:
    hrch1(){
        cout<<"heirarchy from parent 1"<<endl;
    }
};                              //Heirarchy inheritance : different classes inherit from one same class
class hrch2:public parent1{
    public:
    hrch2(){
        cout<<"another heirarchy from same class parent 1"<<endl;
    }
};
class diamond: public child,public toy{
    public:
    diamond(){
        cout<<"diamond class"<<endl;
    }
};
int main(){
    toy t;
    multi m;
    hrch1 h1;
    hrch2 h2;
    diamond c;
    return 0;
}