//polymorphism part 2
//Operator overloading: C++ allows us to specify more than one definition for a function name or an operator in the same scope , which is caled as function overloading. eg '+'used to add integers as well as concatenate string. 
#include<iostream>
using namespace std;
class complex{
    public:
    int real;
    int img;
    complex(int x, int y){
        real=x;
        img=y;
    }
    //creating a constructor(using keyword "operator")
    complex operator+(complex &c){      // here 'c' is an object of class complex. and this operand which is present after the operator(+), i.e here in calling function c3=c1+c2, after + there is c2 so "c" denotes to "c2"
        complex ans(0,0);               // created object to store the ans
        ans.real = real + c.real;       // here real is part of c1 and c.real is part  of c2
        ans.img = img + c.img;          // here img is part of c1 and c2.img is part of c2
        return ans;
    }
};
int main(){
    complex c1(1,2);
    complex c2(3,4);
    complex c3=c1+c2;   
    cout<<c3.real<<"+i"<<c3.img<<endl;;
    return 0;
}
