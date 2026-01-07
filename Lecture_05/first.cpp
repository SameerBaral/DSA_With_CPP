#include<iostream>

using namespace std;

int main(){

    // for loop
    // while loop

    // int i = 1;

    // while loop :=>
    // while (i<10)
    // {   
    //     cout<<i<<" ";
    //     i++;
    // }
    

    // ------------------------------------
    // do while loop

    // do{
    //     cout<<i<<" ";
    //     i++;
    // }while(i<10);



    // ==========================================

    // WAP to find reverse of a given number

    // int num,last_digit,sum=0;
    // cout<<"Enter a number: ";
    // cin>>num;
    // while (num)     //234
    // {
    //     last_digit = num%10;  //234%10=>4
    //     sum = sum*10+last_digit;
    //     num/=10;
    // }

    // cout<<"Reverse number: "<<sum;



    // ==========================================

    // Decimal to binary number

    // int num,rem,ans=0;
    // cout<<"Enter a number: ";
    // cin>>num;
    // // find binary
    // while (num)
    // {
    //     // reminder
    //     rem = num%2;
    //     // devide by 2
    //     num = num/2;
    //     // cout<<rem;

    //     ans = ans*10+rem;
    // }

    // // cout<<ans;

    // // reverse the number
    // // reinitialise the value of num abd ans
    // num = ans;
    // ans = 0;

    // while (num)     
    // {
    //     rem = num%10;  
    //     ans = ans*10+rem;
    //     num/=10;
    // }

    // cout<<ans;



    // ====================================

    // binary to decimal

    // int num = 11011;
    // int ans = 0,mul = 1;
    // while (num!=0)
    // {
    //     int rem = num%10;
    //     num/=10;
    //     ans = ans+rem*mul;
    //     mul*=2;
    // }

    // cout<<ans<<endl;



    // ======================================

    // factorial of given number

    // int num;
    // long long fact=1;
    // cout<<"Enter a number: ";
    // cin>>num;
    // for (int i = 1; i <=num; i++)
    // {
    //     fact=fact*i;
    // }

    // cout<<fact;




    // =======================================

    // fibbonacci series


    // int num,first=0,second=1,curr,i;
    // cout<<"Enter a number: ";
    // cin>>num;

    // if(num<=1){
    //     cout<<num;
    // }
    
    // for(i=2;i<=num;i++){
    //     curr = first+second;
    //     first = second;
    //     second = curr;
    // }

    // cout<<second;

    // ================================================ 

    // square root of number
    // 4 ==> 2
    // 16 ==> 4
    // 25 ==> 5
    // 6 ==> iska 2.54324 jaise aise me iska ans 2 hi print karo
    // 13 ==> 3 ans dena iska

    return 0;
}   