#include<iostream>
#include<vector>

using namespace std;


int main(){
    vector<int> arr = {3,4,2,1,76,5,4,43};
    // method1(arr);

    int smallest =  arr[0] , largest = arr[0];
    //method 2
    for (int i = 1 ; i < arr.size() ; i++){
        if (smallest > arr[i]) smallest = arr[i];
        if (largest < arr[i]) largest = arr[i];}
    cout << "Smallest - >" << smallest << endl;
    cout << "Largest - >" << largest;

    return 0 ;
}