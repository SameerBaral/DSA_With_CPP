
// Passing array using function 


#include<iostream>
using namespace std;

// array ko  name ke basis pe pass kar, uska size bhi pass karna 

// yha pr function se jo array pass kara aur ye jo receive kar raha hai a[] dono ek hi array ko point kar rahe hai alag alag array nahi banta hai

// array ke pass karne ke saath saath number of size bhi pass karna usme jaroori hota hai , agar ek se jyada array hoga to tab asani rahega na

// yha printValue(arr_address,size of array)


void printValue(int a[],int n){

    for(int i=0;i<n;i++){
        cout<<a[i]<<endl;
    }

    a[0] = 111;
}


int main(){

    // int arr[5] = {10,20,11,18,30};
    // printValue(arr,5);

    // cout<<arr[0];


    // ------------------------------------
    // yha pr original array ka same copy hi bheja hai to ab dono same ko refer nahi kar raha hai
    // to ab yha changes refelect nahi hoga ek dusre ka

    // int arr[5] = {10,20,11,18,30};
    // int arr2[5];
    // for(int i=0;i<5;i++){
    //     arr2[i]=arr[i];
    // }
    // printValue(arr2,5);
    // cout<<arr[0];

    // ------------------------------------


    // int marks[10] = {11,1,2,33,22,44,34,67,8,75};
    // printValue(marks,10);

    return 0;
}





// Practice Question on diffrent websiets:-

// 1) Search in array  (GFG)
// 2) Reverse the array (strike)
