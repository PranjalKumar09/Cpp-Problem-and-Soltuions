#include<iostream>
#include<string>

using namespace std;

bool CheckreverseStr(string& old_str){
    string str = old_str;
    int length = old_str.length();
    for (int i = 0; i < length/2 ; i++){
        swap(str[i] ,str[length-i-1]);}

    return str == old_str;
}



int main(){
    cout << "Enter the string :" ;
    string str;
    getline(cin , str); cout <<  endl;
    CheckreverseStr(str) ? cout << "Palindrome " : cout << "Not palindrome" ;
    cout<< endl;

    
    return 0;
}