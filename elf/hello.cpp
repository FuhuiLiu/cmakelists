#include <stdio.h>
#include "add.h"
#include "sub.h"

int main(int argc, char* argv[]){
    int a = 10;
    int b = 20;
    printf("%d+%d=%d\n", a, b, add(a, b));
    printf("%d-%d=%d\n", a, b, sub(a, b));
    return 0;
}
