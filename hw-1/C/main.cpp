#include "main.h"

#include <iostream>

int main() {
    Gen g { .x = 5 };
    g.inc();
    
    Gen g1 { .x = 6 };
    g1.inc();

    std::cout << lib::add(g.x, g1.x) << " " << lib::minus(g.x, g1.x);

    return 0;
}