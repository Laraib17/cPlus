#include<iostream>
using namespace std;
/*Performing task in recursive manner is called loop. It needed to be terminanted as it will keep on occuring so different conditions are applied like while,for, etc. A loop variable/Iterator is specified eg: i=1, j=2 ,k=19 etc wwhich is its strating point*/
int main(){
    
    int n;
    cin>>n;
    
    int sum=0;
    // comment out seperatey
/*WHILE LOOP: iterator is specified only*/
    // int i=1;
    // while (i<=n)
    // {
    //     sum+=i;
    //     i++;
    // }
    // cout<<sum<<endl;
/*FOR LOOP:3 parameters are specified {in-itstatement,condition,final statement} */
    
    // for ( int i = 1; i <=n; i++)
    // {
    //     sum+=i;
    // }
    // cout<<sum<<endl;
/*Omitting(removing) parts of For loop
    
    a.omittig in-it:
    int i=1;
    for(;i<=n;i++)
    {
        sum+=i;
    }
        cout<<sum<<endl; 
    
    b.Omitting conditiion:
    // for(int i=1; ;i++){
        
    // }

    c.omitting final condition
    // for (int i = 1; i < 5;)
    // {
    //     cout<<1;
    //     i++;
    // }
DO-WHILE loop: its similar to while loop just the difference is with condition, as it is not checked for one time, it checks it every time loop is run.
    do{
        int num;
        cin>>num;
        sum+=num;
        n--;
    }while (n>0);
    cout<<sum<<endl;
 Continue:used to skip through an iteration through loop.
 FOR-EACH LOOP: We will be using this in array */

    return 0;
}