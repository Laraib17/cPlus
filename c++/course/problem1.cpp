#include <iostream>
using namespace std;
// Q.Numer divisible by 5 as well as 7
int main()
{
    int i = 5;
    while (true)
    {
        if (i % 7 == 0)
        {
            cout << i << endl;
            break;
            
        }
        i += 5;
    }
    // or
    for (int i = 5; ; i+=5)
    {
        if (i%7==0)
        {
            cout<<i<<endl;
            break;
        }
        
    }
    
    return 0;
}