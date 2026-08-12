// Write a program to read a character and check whether it is a vowel or a consonant

#include<iostream>
using namespace std;

int main(){
    char ch;
    cout<<"Enter a character to check if it vowel or not :";
    cin>>ch;
    ch = tolower(ch);
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
        cout <<"It is vowel ";
    }else{
        cout <<"It is a consonant ";
    }
    return 0;
}