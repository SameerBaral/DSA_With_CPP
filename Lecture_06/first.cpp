

#include<iostream>
using namespace std;

// declaration and defimition of facctorial function
// return_type functionName(parameter1,parameter2...,parameterN)

void factorial(int n){
    int fact = 1;
    for(int i = 1;i<=n;i++){
        fact*=i;
    }
    cout<<fact<<endl;
}


int sum(int a,int b){
    return a+b;
}

int main(){

    // factorial

    int num = 5,num2 = 7;
    int fact = 1;

    // function call
    factorial(num);

    factorial(num2);


    int ans1=sum(4,6);   //arguments
    cout<<ans1<<endl;


    // for(int i=1;i<=num;i++){
    //     fact*=i;
    // }
    // cout<<fact<<endl;

    // fact = 1;
    // for(int i=1;i<=num2;i++){
    //     fact*=i;
    // }

    // cout<<fact<<endl;
    return 0;
}