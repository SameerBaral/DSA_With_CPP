

// prime number --> which number is only divisible by 1 and itself

// ex-> jaise number 31 hai to ye (2-30) tak ke kisi bhi number se divide nahi hona chahiye 


#include<iostream>
using namespace std;

int main(){

    // int num;
    // cout<<"Enter a number: ";
    // cin>>num;

    // if(num<2){
    //     cout<<"Not a Prime Number";
    // }

    // for(int i=2;i<=num-1;i++){
    //     if(num%i==0){
    //         cout<<"Not a Prime Number";
    //         return 0;
    //     }
    // }

    // cout<<"Prime Number";


    // -----------------------------------------------

    // sum of digits

    int num = 256;
    int rem,sum=0;
    while(num>0){
        rem=num%10;
        sum=sum+rem;
        num=num/10;
    }
    cout<<"Sum of digit is: "<<sum;
    return 0;
}
