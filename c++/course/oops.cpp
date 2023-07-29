//Based on the concept of clsses and modulation of objects.Interacts with real world problems.
// CLASSES AND OBJECTS
#include<iostream>
using namespace std;
class fruit{    //keyword to declare class
    public:
    string name;
    string color;
};
int main(){
    fruit apple;        //object use(. operator to access class)
    apple.color="Red";
    apple.name="Apple";
    cout<<apple.color<<" "<<apple.name;
    // Using pointer to declare 
    fruit *mango = new fruit();
    //here pointer mango will take location of class fruit and we used the "new" keyword to create that pointer object
    mango->name="Mango";
    mango->color="yellow";
    //use similar way in pointer to assign values.
    return 0;      
}    