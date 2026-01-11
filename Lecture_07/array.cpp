
#include<iostream>
using namespace std;

int main(){

    // 5 students store the marks 0f 5 students

    // int marks1 = 70, marks2 = 80, marks3 = 40, marks4 =50, marks5 = 90;

    // cout<<marks1<<endl;
    // cout<<marks2<<endl;
    // cout<<marks3<<endl;
    // cout<<marks4<<endl;
    // cout<<marks5<<endl;

    // // find average marks

    // cout<<(marks1+marks2+marks3+marks4+marks5)/5<<endl;



    // ====================================================
    // Array declaration and array accessing

    // int marks[5] = {70,80,40,50,90};

    // cout<<marks[2]<<endl;

    // for(int i=0;i<5;i++){
    //     cout<<marks[i]<<endl;
    // }



    // -------------------------------------


    // int arr[3]; //thi is only contain integer type value only

    // arr[0]=5;
    // arr[1]=7;
    // arr[2]=2;

    // for(int i=0;i<3;i++){
    //     cout<<arr[i]<<endl;
    // }



    // ------------------------------------------

    // if array only declared but not initialized it then by default its value is garbage

    // int arr[4];

    // for(int i=0;i<4;i++){
    //     cout<<arr[i]<<endl;
    // }



    // ------------------------------------------

    // if you want to initialize array all elements by 0 then:-

    // int arr[4] = {0};

    // for(int i=0;i<4;i++){
    //     cout<<arr[i]<<endl;
    // }


    // ------------------------------------------

    // if you initialize a array less than its declared size then remaining blok would be filled by 0 ,not garbage

    // int arr[4] = {12,10};

    // for(int i=0;i<4;i++){
    //     cout<<arr[i]<<endl;
    // }


    // -------------------------------------

    // array, index zero se start kyon hota hai?
    // int arr[10];
    // int n;
    // cin>>n;
    // int arr[n];


    // int n;
    // cout<<"Tell me the size of an array\n";
    // cin>>n;
    // int arr[n];
    // cout<<"Enter the value in array";
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }

    // cout<<"Array elements are:";
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<endl;
    // }
    // aisa shi tareka nahi hota hai ye ki size bhi user se hi poch rahe hai
    // array size should be constant



    // -----------------------------------------

    // int marks[5] = {70,80,40,30,20};
    // int sum = 0;
    // for(int i=0;i<5;i++){
    //     sum+=marks[i];
    // }
    // cout<<sum/5<<endl;


    // --------------------------------------

    // Heighest marks class mein kiske hai find karo

    // int marks[5] = {70,80,40,30,20};

    // int max_val = marks[0];
    // int index = 0;
    // for(int i=1;i<5;i++){
    //     if(marks[i]>max_val){
    //         max_val = marks[i];
    //         index = i;
    //     }
    // }
    // cout<<"Max marks is: "<<max_val<<endl;
    // cout<<"Index is: "<<index<<endl;



    // =======================================
    // Linear search : ek ek karke pore array me search karna

    int marks[5] = {70,80,40,30,20};
    int stu_mark = 10;

    // for(int i=0;i<5;i++){
    //     if(stu_mark==marks[i]){
    //         cout<<"Yes";
    //         return 0;
    //     }
        
    // }
    // cout<<"No";


    // ---------------------------------

    // iska dusra logic

    bool found = false;
    for(int i=0;i<5;i++){
        if(marks[i]==stu_mark){
            found = true;
            break;
        }
    }

    if(found)
        cout<<"Yes";
    else
        cout<<"No";

    return 0;
}



// H/W:-
// Find minimum in an array
// Reverse the array elements