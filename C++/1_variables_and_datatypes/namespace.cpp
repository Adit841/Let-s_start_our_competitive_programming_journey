#include <iostream>

namespace first {
    int x = 1;

}
namespace second {
    int x  = 32;
}

int main(){

    /*
        Namespace = provides a solution for preventing a name conflicts 
                    in large projects. Each entity needs a unique name.
                    A namespace allows for identically named entites as long as the namespaces are 
                    differnet
    */

    int x = 0;

    std:: cout << first::x;

    return 0;
}