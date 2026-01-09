
#include<iostream>
using namespace std;

// int square(int n);  //fun declaration

// Function Overloading: => Function ke name to same hoga lekin parameter alag alag hoga

int sum(int a,int b){
    return a+b;
}

// aise me dono function same ho gya to compiler confuse ho jaega
// int sum(int a,int b){
//     return a+b;
// }


int sum(int a,int b,int c){
    return a+b+c;
}


float sum(float a,float b){
    return a+b;
}


int main(){
    // int num=5;
    // cout<<square(num)<<endl;    //fun call

    float a = 3.1, b = 3.4;

    cout<<sum(3,4)<<endl;

    cout<<sum(3,4,5)<<endl;

    // cout<<sum(2.3,4.5)<<endl;    //aise me error isliye hai kyuki bydefault double hai direct me consider kra ja raha compiler ke dwara

    // cout<<sum(2.3f,4.5f)<<endl;     //last me f se bata rahe ki ye float type ka hai to double se float me ho gya

    cout<<sum(a,b)<<endl;

    return 0;
}


// int square(int n){      //func definition
//     return n*n;
// }