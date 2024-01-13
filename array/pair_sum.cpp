#include <iostream>
using namespace std;

int main(){
    int arr1[9] = {1,2,3,3,4,5,6,7,8} , target = 7;
    int i = 0 , j = sizeof(arr1)/sizeof(int) -  1 ; 

      
    while (i <  j   ){
        if (arr1[i] + arr1[j] < target) i++;
        else if (arr1[i] + arr1[j] > target) j--;
        else
            {cout << i << " " << arr1[i] << endl << j << " " << arr1[j] ;   
            break;}}
    

    return 0 ;
}