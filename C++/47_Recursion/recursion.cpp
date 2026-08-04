#include <iostream>
using namespace std;

void walk(int number);
void walks(int number);


int main(){

    /*
        Revursion = A programming technique where a function invokes itself from within break a     complex concept into a repeatable single step 

        (iterative vs recursive )

        advantages = less code and it cleaner, useful for sorting and searching algorithm
        disadvantages = user more memory slower
    */


    // walk(100);
    walks(100);

    return 0;
}

// iterative approcah 
void walk(int number){
    for(int i = 0; i < number; i++){
        cout << "Just you take a step" << '\n';
    }
}

//Recursive approach
void walks(int number){
    if(number > 0){
        cout << "You take a step" << '\n';
        walks(number - 1);
    }
}
