
// #include<iostream>
// using namespace std;

// void increment(int n){   //pass by value means only copy the value
//     n++;
// }

// int main(){

//     int a = 10;
//     increment(a);
//     cout<<a<<endl;
    
//     return 0;
// }




// =============================================

// Call by value me alag copy create hota hai
// Call by reference me same hi ko dono refer karte hai


// #include<iostream>
// using namespace std;

// void increment(int &n){   //pass by reference means only copy the reference
//     n++;
// }

// int main(){

//     int a = 10;
//     increment(a);   //suppose a reference 1000 meanse address
//     cout<<a<<endl;
    
//     return 0;
// }



// ----------------------------------------------


#include<iostream>
using namespace std;

// void swap(int &x, int &y){
//     int temp = x;
//     x=y;
//     y=temp;
// }


// --------------------------------------------
// Default Parameter: agar koi parameter me value nahi aya to by default 1 hoga num ka value
// agar koi value pass hua to vo value ayega


void printing(int num=1){
    cout<<num<<endl;
}

int main(){
    // int a = 10, b = 20;
    // swap(a,b);
    // cout<<"a="<<a<<endl;
    // cout<<"b="<<b<<endl;

    printing(10);
    printing();

    return 0;
}



// Function ki help se prime number
// Function ki help se armstrong number
// Function, swap ka a b c , a=10, b=20, c=30 ==> a=20, b=30, c=10 
// 0.1+0.2 sum kitna hota hai ?


// ap 0.1 ko binary me convert karo fir 0.2 ko bhi binary me convert karo uske baad ab add karo binary binary ko 