#include<iostream>
using namespace std;

/*BREAK: this statement is used to break the program, menas if a program is of more than one conditional statement and your answer comes within 2 statement and if you want o print that statement we use break to treminate our program there only, if we havent putted any break at the end of the statement then it will perform all the conditions one by one 
  SWITCH:this statement selects one of many code blocks to be executed.where value of the expression entrered is compared with each case defined if it matches that case then output is generated, to use this default case or break is used to terminate it. 
*/
int main(){
    int day;
    cin>>day;
    switch (day){
        case 1:
        cout<<"Monday"<<endl;
        break;
        
        case 2:
        cout<<"Tuesday"<<endl;
        break;
        
        case 3:
        cout<<"wednesady"<<endl;
        break;
        
        case 4:
        cout<<"Thursday"<<endl;
        break;
        
        case 5:
        cout<<"Friday"<<endl;
        break;
        
        case 6:
        cout<<"Saturday"<<endl;
        break;

        case 7:
        cout<<"sunday"<<endl;
        break;
        
        default:
        cout<<"default case"<<endl;

        return 0;
    }
}