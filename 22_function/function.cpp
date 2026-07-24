#include<iostream>
using namespace std;

void happyBirthday(string name);

int main(){
    
    //function - a block of reusable code
    string name = "Aditya";
    happyBirthday(name);
     return 0;
}

void happyBirthday(string name){
    cout << "Happy Birthday to "<< name <<'\n';
    cout << "Happy Birthday to "<< name <<'\n';
    cout << "Happy Birthday to dear "<< name <<'\n';
    cout << "Happy Birthday to "<< name <<'\n';
    
}
