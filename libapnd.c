#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int write(char *twr, char *ck) {
    FILE *f = fopen(ck, "w");
    if (f == NULL) {
        return(5);
    }
    fprintf(f, " %s\n", twr);
    free(f);
    free(twr);
    free(ck);
    return 0;
}
