#include<iostream>
using namespace std;
class rectangle{       //To initialize a object,created when object is created, has same name as the class
    public:
    int l;
    int b;
    rectangle(){    //Defalut constructor:No args passed
        l=0;
        b=0;
    }
    rectangle(int x, int y){    //Parametraised constructor:arguments passed to intialize the object
        l=x;
        b=y;
    }
    rectangle(rectangle& k){    //Copy constructor: Initialize an object by another existing object(syntax: existing_object_name+'&'[asteric sigh]  an object)
        l=k.l;
        b=k.b;
    }
    
};
int main(){
    rectangle r1;           //Create and object (r1,r2,r3) to acces the class data member, member function
    cout<<r1.l<<" "<<cout<<r1.b<<endl;
    rectangle r2(3,5);
    cout<<r2.l<<" "<<cout<<r2.b<<endl;
    rectangle r3= r2;          //Copy constructor initialized
    cout<<r3.l<<" "<<cout<<r3.b<<endl;
    return 0;
} 