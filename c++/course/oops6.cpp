/*Friend /function: A Function which not a part of class function but still can access private members from it*/
#include<iostream>
using namespace std;
class A{
    private:
    int x;
    public:
    A(int y){
        x=y;
    }
    void friend print(A &obj);
};
void print(A &obj){
    cout<<obj.x<<endl;
}
int main(){
    A obj(5);
    print(obj);
    return 0;
}
