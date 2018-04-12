//countc.c counts number of chars 

#include <stdio.h>

int countc(FILE *fp) {
    
    int c;
    int numc=0;
    
    c = fgetc(fp);
    while (c != EOF) {
        numc++;
        c = fgetc(fp);
    }

    rewind(fp);

    return numc;

}
