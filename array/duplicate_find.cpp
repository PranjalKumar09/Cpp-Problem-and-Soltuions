#include <iostream>
using namespace std;

int main(){
    int arr[9] = {1,2,3,3,4,5,6,7,8};
    // method 1 
    for (int i = 0 ; i < sizeof(arr)/sizeof(int) ; i++){
        int count = 0;
        for (int j = 0; j < sizeof(arr)/sizeof(int) ; j++ ){
            if (arr[i] == arr[j])
                count++;
            } 
        if (count == 2){
            cout << "Duplicate element is " << arr[i];
            break;}             }
    // method 2 
    int xor_value = 0 ; 
    for  (int i = 0 ; i < sizeof(arr)/sizeof(int) ; i++){
        xor_value ^= arr[i] ;
        cout << endl <<  i << " " << xor_value;}
    
    for  (int i = 1 ; i < sizeof(arr)/sizeof(int)  ; i++){
        xor_value ^= i ;
        cout << endl <<  i << " " << xor_value;}
    

    cout << endl << "Duplicate element is " << xor_value;

    return 0 ;
}