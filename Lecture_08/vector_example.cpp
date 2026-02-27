// vector in cpp
// it is dynamic array we can pushed and pop element

#include<iostream>
#include <vector>
using namespace std;

int main(){

    // vector<int>arr(5);
    // arr[0] = 10;
    // arr[1] = 20;
    // arr[2] = 11;
    // arr[3] = 6;
    // arr[4] = 16;

    // arr.push_back(90);  //array ke last me ye 90 aa jaega ab
    // arr.push_back(80);  //array ke last me ye 80 aa jaega ab flexible array hai apna size badha leta,yha bhale hi 5 size ka array bana ho lekin ye baad me push_back karke array element ko insert kr skta hai

    // arr.pop_back(); //it can only remove a last element

    // int n = arr.size();

    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" "<<endl;
    // }

    // cout<<"size of arr: "<<n<<endl;


    // -------------------------------------------------

    
    vector<int>arr;  //aisa karke sirf declare bhi kar skte ho yha size nahi diya gya hai jaise hi element dalenge to ye grow hota jaega

    arr.push_back(30);
    arr.push_back(10);

    int n = arr.size();

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    // ye vector apne size ko grow and shrink karta raheta hai element ke hisab se

    return 0;
}



