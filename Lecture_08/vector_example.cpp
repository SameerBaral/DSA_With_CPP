// vector in cpp
// it is dynamic array we can pushed and pop element

#include<iostream>
#include <vector>
using namespace std;

int main(){
    vector<int>arr(5);
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 11;
    arr[3] = 6;
    arr[4] = 16;

    arr.push_back(90);  //array ke last me ye 90 aa jaega ab
    arr.push_back(80);  //array ke last me ye 80 aa jaega ab flexible array hai apna size badha leta

    arr.pop_back(); //it can only remove a last element

    int n = arr.size();

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" "<<endl;
    }

    cout<<"size of arr: "<<n<<endl;

    return 0;
}

