//countl.c

#include <stdio.h>

int countl(FILE *fp) {
    
    int numl=0;
    char c;

    for (c = getc(fp); c != EOF; c = getc(fp)) {
        if (c == '\n') {
            numl = numl + 1;
        }
    }

    rewind(fp);

    return numl;

}

