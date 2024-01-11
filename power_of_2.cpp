#include <iostream>
#include <stdint.h>


using namespace std;

int main(){
    int num, count = 1; // count for method 1
    cout << "Enter the number ";
    cin >> num; 
    while ( num<INT16_MAX && num > 0 ){
        if (count==num){
            cout<<"Power of 2 ";
            return 0;}
        count *= 2;       
        }
    cout<<"Not power of 2";

    return 0;
}