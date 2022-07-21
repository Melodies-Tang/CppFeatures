#include <stdlib.h>

int main() {
    int * p = NULL;
    delete p;  // works
    return 0;
}