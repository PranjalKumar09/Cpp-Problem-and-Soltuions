//reversing a number
#include<iostream>
using namespace std;

int main(){
    int num, Answer = 0; 
    cout << "Enter the number ";
    cin >> num; cout << endl;
    cout << " Reversed number is "; 
    while  (num != 0 ){
        int digit = num % 10;
        Answer = Answer * 10 + digit;
        num /= 10;
    }
    cout << Answer;

    return 0;
}




