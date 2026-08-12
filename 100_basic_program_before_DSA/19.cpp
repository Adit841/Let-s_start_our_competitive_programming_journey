 // Write a program to read a number and check whether it is divisible by both 3 and 5


 #include<iostream>

 using namespace std;

 int main(){
    int n;
    cin >> n;
    if(n % 3 == 0 && n % 5 == 0){
        cout << n << " number is divisible by both"; 
    }else {
        cout << n << " number is not divisible by both";
    }
    return 0;
 }