
#include<iostream>

using namespace std;

int main(){


    // 1
    // 01
    // 101
    // 0101
    // 10101


    // for(int i=1;i<=5;i++){
    //     for(int j=1;j<=i;j++){
    //         if((i+j)%2==0)
    //             cout<<"1";
    //         else
    //             cout<<"0";
    //     }
    //     cout<<endl;
    // }



    // =======================================

    // A
    // AB
    // ABC
    // ABCD
    // ABCDE


    // for(int i=1;i<=5;i++){
    //     char ch = 'A';
    //     for(int j=1;j<=i;j++){
    //         cout<<ch;
    //         ch++;
    //     }
    //     cout<<endl;
    // }



    // =======================================


    // A
    // BB
    // CCC
    // DDDD
    // EEEEE

    
    char ch='A';
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            cout<<ch;
        }
        ch++;
        cout<<endl;
    }

    return 0;
}