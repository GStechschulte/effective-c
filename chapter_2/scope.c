int j;                              // file scope

void f(int i) {                     // block scope of i begins
    int j = 1;                      // block scope of j begins (hides file scope j)
    i++;                            // i refers to the function parameter
    for (int i = 0; i < 2; i++) {   // block scope of loop-local i begins
        int j = 2;                  // block scope of the inner j begin; hides outer j     
        printf("%d\n", i);          // inner j is in scope, prints 2
    }
    printf("%d\n", j);              // outer j is in scope, prints 1
}

void g(int j);                      // j has function prototype scope; hides file scope j