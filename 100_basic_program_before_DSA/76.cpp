//  Write a program to check whether two strings are anagrams of each other.

#include<bits/stdc++.h>
using namespace std;

int main(){
   string s1,s2;
   cin >> s1 >> s2;

   int a[256] = {0};
   int b[256] = {0};

   for(char ch : s1){
    a[ch]++;
   }
   for(char ch : s2){
    b[ch]++;
   }
   bool anagram = true;

   for(int i = 0; i < 256; i++){
    if(a[i] != b[i]){
        anagram = false;
        break;
    }
   }
   
   if(anagram){
    cout << "It is a anagram string ";
   }else{
        cout << "It is not a anagram strin ";
   }
    return 0;
}
