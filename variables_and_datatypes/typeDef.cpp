#include <iostream>
#include <vector>

// typedef std::vector<std::pair<std::string, int>> pairlist_t;

typedef std::string text_t;
typedef int number_t;
int main(){

    /* 
    typedef = reserver keyword used to create an additional name (alias) for another data type.
                New identifer for an existing type helps with readability and reduces types
                use when there is a clear benefit 
                Replaced with 'using' (work better with tempelates) 
    */
    text_t name = "Aditya";
    number_t time = 12;

    std::cout << name <<'\n';
    std::cout << time <<'\n';

    return 0;
}