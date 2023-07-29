#include<iostream>
#include<cmath>
using namespace std;
//Functions are logical set of codes Performing a task, an inpurt is passed called parameter
//int main is the needed function to perform further task, and we need to retuen the code default is "retuen 0"
//There are 2 types of function 1: Built in & 2: User defined :Functions can be defined also which helps its reuse in any other file, preventing it to be written again. 
//USER DEFINED FORMAT: return_type function_type(parameter1, parameter2,....){ statement }
//Function name: it shhould give idea about that function, return Type: we can use return type default return 0 cause we use int, also  return sum can be used for sum function,etc.
//Parameters:function(param1,param2,..)eg int add(int num1,int num2,int num3,...) ; float add(float x1, float x2, float x3,...)
//Funtion body: { code inside this bracket}
//Calling the function: defined function must be called before  main function and to use it we need to call it inside main funtion, if we wanna define ia function after the function call, we need to use the "function prototype".
/*Different datatype have different storage,i.e 
 The size of int data type is 4
 The size of char data type is 1
 The size of float data type is 4
 The size of double data type is 8
*/
/*Scope of Function: where a function is called its scope, they are of 2 tupes 1. Global Scope(it can be accessed anywhere in th code), 2.Local Scope(Can only we accessed within the block it is called)
    if there exist local and global variable with same name then LOCAL>>GLOBAL but if we want to use global with same name, we use scope resolution(::)*/
int add(int num1, int num2){   //num1 & num2 are formal parameters
    int sum=num1+num2;
    return sum;
} 
int add(int num1, int num2,int num3){
    int sum=num1+num2+num3;
    return sum;
}
float add(float num1, float num2,float num3){
    float sum=num1+num2+num3;
    return sum;
}
void byvalue(int l){
    l=100;
}
void byreference(int &m){
    m=100;
}
int add_again(int o, int p=7, int q=4){
    return(o+p+q);
}
//functoin prototype
//int sub(int num1, int num2); 
    
int main(){
    cout<<pow(34,5)<<endl; //inside pow or any defined function 34,5 are Actual parameters.  
    cout<<sqrt(1024)<<endl;
    int a=5;
    int b=3;
    int c=7;
    float d=6.7;
    float e=2.9;
    float f=9.5;

    cout<<pow(3,4)<<endl;
    cout<<sqrt(35)<<endl;
// sqrt in int will give float value    
    int x=sqrt(35); 
    cout<<x<<endl; 
// sqrt in double will give eaxct value 
    double doublex=sqrt(35);
    cout<<doublex<<endl;
     
    add(d,e,f); 
    cout<<add(d,e, f)<<endl;
//Pass/call by value value: copies one variable to another variable
    int k=5;
    byvalue(k);
    cout<<k<<endl;
//pass/call by value are reference(& ampercent): Actual varibles are tansfered, both variable are stored  into same memory.
    int n=10;
    byreference(n);
    cout<<n<<endl;
//default Parameters:The parameters provided to the formal variable, so when required where compiler cant find the value of that variable will check for default value given in formal section.     
    int r=121;
    cout<<add_again(r)<<endl;
    cout<<add_again(r,5)<<endl;
    cout<<add_again(r,6,7)<<endl;  
    
    return 0;
}
/*int sub(int a,int b){
    int sum=num1-num2;
    return sum;
}
*/