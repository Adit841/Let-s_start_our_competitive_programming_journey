#include <iostream>
using namespace std;

int searchArray(string array[], int size,string  userInput);

int main (){

    string food[] = {"Burger", "pizza", "Chowmin", "Chole bathure", "Dal bathi", "French fires"};
    int size = sizeof(food)/ sizeof(food[0]);
    string userInput;
    int index;
    
    cout << "Enter an element to search = ";
    cin >> userInput;
    
    index = searchArray(food, size, userInput);

    if(index != -1){
        cout << "The food you are looking for is at index : " << index;
    }else{
        cout << "The food is not in the list";
    }
    return 0;
}


int searchArray(string array[], int size,string  userInput){
    for(int i = 0; i < size; i++){
        if(array[i] == userInput){
            return i;
        }
    }
    return -1;
}