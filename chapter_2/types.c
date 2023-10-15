# include <stdio.h>

// array with 11 elements of type int
int ia[11]; 


int array(void) {
    char str[11];
    for (unsigned int i = 0; i < 10; ++i) {
        str[i] = '0' + i;
    }
    printf("str = %s\n", str);
}

// structs
struct sigrecord {
    int signum;
    char signame[20];
    char sigdesc[100];
} sigline, *sigline_p;

void structures(void) {
    // directly access members of the struct
    sigline.signum = 1;
    strcpy(sigline.signame, "SIGINT");
    strcpy(sigline.sigdesc, "Interrupt from keyboard");

    
    // indirectly access members of the struct
    sigline_p = &sigline; // assign pointer to sigline_p

    sigline_p->signum = 1;
    strcpy(sigline_p->signame, "SIGINT");
    strcpy(sigline_p->sigdesc, "Interrupt from keyboard");
}

// unions

// below, contains 3 structs, with different types
// could be used in a tree, graph, or other data structure that has nodes
// of different types
union {
    struct {
        int type;
    } n;
    struct {
        int type;
        int intnode;
    } ni;
    struct {
        int type;
        double doublenode;
    } nf;
} u;
