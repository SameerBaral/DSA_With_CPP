
#include<iostream>

using namespace std;

int main(){

    //01) print even numbers

    // for(int i=2;i<=20;i+=2){
    //     cout<<i<<endl;
    // }


    // --------------------------------------

    // for(int i=1;i<=20;i++){
    //     if(i%2==0)
    //         cout<<i<<endl;
    // }



    // ========================================

    // Odd number 1-20

    // for(int i=1;i<=20;i+=2){
    //     cout<<i<<endl;
    // }



    // =========================================

    // print a to z

    // for(char alpha = 'a';alpha<='z';alpha++){
    //     cout<<alpha<<endl;
    // }


    // ======================================

    // sum of first 10 numbers

    // int sum = 0;
    // for (int i = 1; i <=10; i++)
    // {
    //     sum = sum+i;
    // }
    // cout<<sum<<endl;


    // =======================================

    // sum of square of first 10 natural numbers

    // int sum = 0;
    // for (int i = 1; i <=10; i++)
    // {
    //     sum = sum+i*i;
    // }
    // cout<<sum<<endl;


    // =======================================

    // 1 2 3 4 5
    // 1 2 3 4 5
    // 1 2 3 4 5
    // 1 2 3 4 5
    // 1 2 3 4 5
    // 1 2 3 4 5


    // for(int i=1;i<=6;i++){
    //     for(int j=1;j<=5;j++){
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }



    // =========================================


    // a b c d e
    // a b c d e
    // a b c d e
    // a b c d e
    // a b c d e


    // for(int i=1;i<=5;i++){
    //     for (char ch = 'a'; ch <='e'; ch++)
    //     {
    //         cout<<ch<<" ";
    //     }
    //     cout<<endl;
    // }



    // =======================================

    // 10 to 1 number 

    // for(int i=10;i>=1;i--){
    //     cout<<i<<" ";
    // }


    // ======================================

    // Table program:-

    // int table = 7;

    // for(int i=1;i<=10;i++){
    //     cout<<table*i<<endl;
    // }


    // ========================================

    // * * * * *
    // * * * * *
    // * * * * *
    // * * * * *
    // * * * * *


    // for(int i=1;i<=5;i++){
    //     for(int j=1;j<=5;j++){
    //         cout<<"*"<<" ";
    //     }
    //     cout<<endl;
    // }



    // =========================================

    // *
    // **
    // ***
    // ****
    // *****


    // for(int i=1;i<=5;i++){
    //     for(int j=1;j<=i;j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }


    // ===============================


    // *****
    // ****
    // ***
    // **
    // *


    // for(int i=1;i<=5;i++){
    //     for(int j=5;j>=i;j--){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }



    // ================================

    //     *
    //    **
    //   ***
    //  ****
    // *****


    // for(int i=4;i>=0;i--){
    //     for(int j=0;j<i;j++){
    //         cout<<" ";
    //     }
    //     for(int j=0;j<5-i;j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }


    // 4 space 1 star
    // 3 space 2 star
    // 2 space 3 star
    // 1 space 4 star
    // 0 space 5 star



    // =============================


    // 1 2 3 4 5 
    // 6 7 8 9 10
    // 11 12 13 14 15
    // 16 17 18 19 20 
    // 21 22 23 24 25


    // for(int i=1;i<=21;i+=5){
    //     for(int j=i;j<=i+4;j++){
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }
    


    int num = 1;
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }




    // for(int j=1;j<=5;j++){
    //     cout<<j<<" ";
    // }
    // cout<<endl;

    // for(int j=6;j<=10;j++){
    //     cout<<j<<" ";
    // }
    // cout<<endl;

    // for(int j=11;j<=15;j++){
    //     cout<<j<<" ";
    // }
    // cout<<endl;

    // for(int j=16;j<=20;j++){
    //     cout<<j<<" ";
    // }
    // cout<<endl;

    // for(int j=21;j<=25;j++){
    //     cout<<j<<" ";
    // }
    // cout<<endl;

    

    return 0;
}