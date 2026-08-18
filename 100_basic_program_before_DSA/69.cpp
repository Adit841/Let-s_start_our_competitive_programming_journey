// Write a program to count the number of vowels and consonants in a string.

#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int vowel = 0;
    int consonant = 0;
    for(char c : s){
        c = tolower(c);
        if(c == 'a' || c == 'e' || c == 'i' || c ==  'o' || c == 'u'){
            vowel++;
        }else if(c >= 'a' && c <= 'z') {
            consonant++;
        }

    }

    cout << "Vowels: " << vowel << endl;
    cout << "Consonants: " << consonant << endl;

    return 0;
}
