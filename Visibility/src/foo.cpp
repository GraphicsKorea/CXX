
#include <cstdio>
#include "config.h"

void SYMBOL_BINDING SYMBOL_VISIBILITY print() {
    printf("%s in %s\n", __FUNCTION__, __FILE__);
}

void foo() {
    print();
}
