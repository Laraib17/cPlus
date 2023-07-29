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
class multi:public parent1,public parent2{     //3.Multiple inheritance: can inherit a property of more than one class at a time 
        public:
        multi(){
            cout<<"Multiple class"<<endl;
            cout<<z;
        }
        private:
        int z=x+y;
};
int main(){
    multi m;

}