#include<iostream>
using namespace std;

int main(){
/*if-else-else_if*/    
    int marks;
    cin>>marks;
    
    if (marks> 80)
    {
        cout<<" very good"<<endl;
    }
    
    else if(marks>50){
        cout<<"need practice"<<endl;
    }
    else{
        cout<<"very bad"<<endl;
    } 
/*conditional -logical
    a.Logival-AND: &&
    b.Logical-OR: ||
    c.Ternary:shortcut for if else condition
    */
    marks>33 ? cout<<"pass"<<endl : cout<<"fail"<<endl;    
/*difference:
    1. & {if (false & 5/0==1), it will give error as 5/0==1 will give runtime error }; && {if(false && 5/0==1, it will not give any error in logical and checks if one is false then it will give false without checking other)}
    2. | {if(true | 5/0==1), it will give erroe as both expressions are checked and 2nd is run time error}; ||{if(true|| 5/0==1), it will not give error as in logical or it checks only one as one is true o it will not check for other as true+false=true} 
*/
    int num;
    cin>>num;

    if((num%2==0) && (num%3==0)){
        cout<<"first"<<endl;    
    }
    else if ((num%3==0) & (num%5==0))
    {
        cout<<"second"<<endl;
    }
    else if ((num%3==0) | (num%5==0))
    {
        cout<<"third"<<endl;
    }
    else if ((num%3==0) ||(num%5==0))
    {
        cout<<"fourth"<<endl;
    }
    else{
        cout<<"abey dubara number daal"<<endl;
    }
    
    return 0; 
}