#include<iostream>
using namespace std;
class parent{
    private:
    int a,*b;
    public:
    parent();
    parent(int x, int y){
        a=x;
        b=&a;
    }
    void get_num(){
        cout<<"Enter the numbers :";
        cin>>a;

    }
    void dipslay(){
        cout<<"the firsst value is :"<<a<<"seconf value is : "<<b;
    }
};
int main(){
    parent obj;
    obj.get_num();
    obj.dipslay();
}