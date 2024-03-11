#include <iostream>

// Namespace = provides a solition for preventing
//              name conflicts in large projects. Each entity needs a 
//              unique name. A namespace allows for identically named entities
//              as long as the namespaces are different.

namespace first {
    int x = 1;
}

namespace second {
    int x = 2;
}

int main() {
    // using namespace first; // torna a saída padrão o escopo first: 1

    int x = 0;

    std::cout << x << '\n'; // saída padrão, sem escopo de namespace: 0
    std::cout << first::x << '\n';
    std::cout << second::x << '\n';

    return 0;
}