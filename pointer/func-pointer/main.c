#include <stdio.h>
#include "func.h"
int main() {
    int (*p)(int, int);
    p = add_num;
    printf("%d", p(5, 4));
    return 0;
