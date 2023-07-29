#include<iostream>
using namespace std;

int main (){
    int num1=5;
    int num2=6;
    bool exp1=true;
    bool exp2=false;
    
/*Arithmetic operators=>
  1.addition: num1+num2
  2.subtraction: num1-num2
  3.multiplication: num1(*num2)
  4.division: num1/num2
  5.modulus:(gives remainder)useed to find if no. is even or odd, num1%num2
  6.increment: increase by 1 a=3,a++=4 
  7.decreament: decrease the no. by 1 a=3,a--=2*/
    cout<<num1+num2<<endl;
    cout<<num1-num2<<endl;
    cout<<num1/num2<<endl;
    cout<<num1*num2<<endl;
    cout<<num1%num2<<endl;
/*Relational operators=>{gives true(1) and false(0)}
  1.is equlas to(==)
  2.not equals to (!)
  3.greater than(>)
  4.less than(<)
  5.greater tha and equal to(>=)
  6. less than equal to(<=)
*/    
    cout<<(num1==num2)<<endl;
    cout<<(num1>num2)<<endl;
    cout<<(num1<num2)<<endl;
    cout<<(num1>=num2)<<endl;
    cout<<(num1<=num2)<<endl;
/*Logical operators(like logical gates)
  1.Logical AND(&&)
  2.Logical OR(||)
  3.Logical NOT(!)
 */    
    cout<<(exp1&&exp2)<<endl;
    cout<<(exp1||exp2)<<endl;
    cout<<(!exp1)<<endl;
/*Assignment operators(it performs function on itself)
  1. +=
  2. -=
  3. /=
  4. %=
 */
    num1+=3;
    cout<<num1<<endl;
    num2-=2;
    cout<<num2<<endl;
/*Bitwise operator(there are two bits 0,1 and writing number in this is binary representaion and its operators work only in binary form)
   1.bitwise complement(~){its complement of something}
   2.left shift(<<n){shifts binary to left by n; eg:0101 i.e 5, if 0101<<1 gives 1010 i.e 10}
   3.right shift(n>>){shifts binary to right by n; eg:0100 i.e 4, if 0100>>1 gives 0010 i.e 2}
   4.bitwise OR(|)(its is bit logical operator eg 1|1=1,1|0=0)
   5.bitwise AND(&)(it will add logically )
   6.bitwise exclusive OR(^)(if both bits different then 1 and if same then will give 0)
*/  
    cout<<(num1<<1)<<endl;
    cout<<(num2>>1)<<endl;
    cout<<(num1&num2)<<endl;
    cout<<(num1|num2)<<endl;
    cout<<(num1^num2)<<endl;   
/*Miscelanious oprators:
   1.Sizeof operator:(it gives size of variable eg: int a=4, sizeof(a) will give 4 bytes ).
   2.ternery operator ? (Condition) exp1(if true):exp2(if false): (a condition is given if truee then exp 1 will print else if false exp2 will be printed),
   3.comma operator:it gives out the last value of ,(eg: int y=4,5,6 will give 6 ).
   4.Dot and Arrow Operator :(. used for classes)&(-> used as pointers).
   5.casting Operators:used to cast variable into one data type from another  (eg: float a=3.44, and print it will give 3).
   6.&address Operator:it provides the address of varible in the code .
   7.*Pointer Operator: it points towards a single variable.
*/ 
    int a=10;
    cout<<sizeof(a)<<endl;
    
    char name='a';
    cout<<sizeof(a)<<endl;
    
    bool flag;
    a==name? flag=true : flag=false;
    cout<<flag<<endl;

    cout<<(&a)<<endl;
/*Unary Operator:(simple operator to show simple mathematical operations)
   1.Unary plus(+)
   2.Unkiary Minus(-)
   3.Increment Operator(++)
     a.Post-increment(a++):firstly it returs the value then adds it
     b.Pre-increment(++a): it directly adds.
   4.Decrement Operator(--){similar as post&pre decrement}
   5.Complement Operator(!){!true=false, !any number=0 because it takes any number is as true i.e 1 so its complement is 0 }
*/
    int j=11;
    cout<<(j++)<<endl;
    cout<<(++j)<<endl;
    int k=8;
    cout<<(--k)<<endl;
    cout<<(k--)<<endl;
/*C++ Operators Precedence (like BODMAS in maths there is also order in c lang.)and Associativity(if operaturs have same precedence then for right order we check weather it works from left to rigth or vice versa and provide according to it.)

Operator            NAME                                      Associativity

( )         Parentheses (function call)                       left-to-right
[ ]         Brackets (array subscript)                        left-to-right
.           Member selection via object name                  left-to-right
->          Member selection via pointer                      left-to-right
++ ––	      Postfix increment/decrement                       left-to-right
 
++ ––       Prefix increment/decrement                        right to left
+ –         Unary plus/minus                                  right to left
! ~         Logical negation/bitwise complement               right to left
(type)      Cast(convert value to temporary value of type) 
*                                                             right to left
&           Dereference                                       right to left
sizeof	    Address (of operand)Determine size in bytes       right to left
            on this implementation
                                                              
* / %	       Multiplication/division/modulus	                left-to-right
+ –	         Addition/subtraction	                            left-to-right
<<  >>	     Bitwise shift left, Bitwise shift right	        left-to-right
<  <=        Relational less than/less than or equal to       left-to-right
>  >=	       Relational greaterthan/greaterthan or equal to   left-to-right
	
== !=	       Relational is equal to/is not equal to	
&	           Bitwise AND	                                     left-to-right
^	           Bitwise exclusive OR	                             left-to-right
|	           Bitwise inclusive OR	                             left-to-right
&&	         Logical AND	                                     left-to-right
| |	         Logical OR	                                       left-to-right
? :	         Ternary conditional	                             right-to-left
=            Assignment                                        right-to-left
+=  -=       Addition/subtraction assignment 
*=  /=       Multiplication/division assignment
%=  &=       Modulus/bitwise AND assignment 
^=  |=       Bitwise exclusive/inclusive OR assignment 
<<=  >>=	   Bitwise shift left/right assignment	

,	           Comma (separate expressions)                     	left-to-right
*/    
    return 0;
}

