//polymorphism:one interface many mediums; or one method different forms;
//They are of two types:
    //1.Compile time:
        //used in Function overloading and operator overloading 
//Function Overloading:(Based on concept of polymorphism) number of functions having same name but different function due to their parameters. 
#include<iostream>
using namespace std;
class sum{
    public:
    void add(int x, int y){
        int sum=x+y;
        cout<<"sum:"<<sum<<endl;
    }
    void add(float x, float y){
        float sum=x+y;
        cout<<"sum:"<<sum<<endl;
    }
    void add(double x, double y){
        double sum=x+y;
        cout<<"Sum:"<<sum<<endl;
    }
};
int main(){
    sum s;
    s.add(4,6);
    s.add(4.5,6.3);
    s.add(4.342342424,64.43654536);
    return 0;
}
