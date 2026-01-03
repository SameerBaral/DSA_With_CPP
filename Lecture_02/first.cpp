
#include<iostream>

using namespace std;

int main(){
    // int a,b;
    // cout<<"Enter first number: ";
    // cin>>a;
    // cout<<"Enter second number: ";
    // cin>>b;
    // cout<<"Your sum is: "<<a+b;


    // char c = 'a'+1;
    // cout<<c;

    // int c = 'a'+1;
    // cout<<c;


    // Arithmetic operator

    // + - * / %

    // int a = 20;
    // int b = 10;

    // cout<<a+b<<endl;
    // cout<<a-b<<endl;
    // cout<<a*b<<endl;
    // cout<<a/b<<endl;
    // cout<<a%b<<endl;    //% reminder , modulo operator

    // --------------------------------------

    // Assignment operator
    // a+=b;       //a=a+b
    // cout<<a;

    // --------------------------------------

    // Comparison operator
    // >,<,>=,<=,!=,==

    // cout<<(a>b)<<endl;
    // cout<<(a<b)<<endl;
    // cout<<(a>=b)<<endl;
    // cout<<(a<=b)<<endl;
    // cout<<(a==b)<<endl;
    // cout<<(a!=b)<<endl;


    // ---------------------------------------

    // left shift and right shift operator

    // int a = 20;

    // cout<<(a<<1)<<endl;   //20*2^1=40
    // cout<<(a<<2)<<endl;   //20*2^2=80

    // cout<<(a>>2)<<endl;   //20/2^2=5


    // ---------------------------------------

    // Logical operator
    // &&, ||, !

    // &&(and): both side should be true,then it will give true only otherwise false

    //  ||(or): both side should be false then it will give false only otherwise true

    // ! (not): it will invert the value true->false , false->true

    // cout<<(true && false)<<endl;
    // cout<<(true && 20)<<endl;   //ye number ko bhi true consider karta hai
    // cout<<(true && true)<<endl;
    // cout<<(true || false)<<endl;
    // cout<<(false || false)<<endl;
    // cout<<(!true)<<endl;



    // ---------------------------------------

    // Increment and Decrement operator
    // pre-increment and post-increment
    int a = 10;
    // int b = a++;   //post-increment
    // post-increment pehle value assign karta hai fir increment karta hai

    int b = ++a;   //pre-increment
    // pre-increment pehle increment karta hai fir value assign karta hai
    
    cout<<b<<endl;   
    cout<<a<<endl;   
    return 0;



}