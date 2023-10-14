#include <stdio.h>


/*
When declaring a pointer in a function declaration or definition, `*` 
acts as part of a pointer declarator indicating that the parameter is 
a pointer to an object or function of a specific type.

When you use the unary `*` operator in expressions within the function, 
the unary `*` operator dereferences the pointer to the object.
*/
void swap(int *pa, int *pb) {
    int tmp = *pa;
    *pa = *pb; // dereference pb, read value, dereference pa, write pb value to pa
    *pb = tmp;
    printf("swap: a = %d, b = %d\n", *pa, *pb);
}

int main(void) {
    int a = 21;
    int b = 17;

    swap(&a, &b); // & address of operator to generate a pointer to its operand
    printf("main: a = %d, b = %d\n", a, b);
    return 0;
}