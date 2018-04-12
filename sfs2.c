//sfs.c revised

#include <stdio.h>
#include <ctype.h>
#include "countc.h"
#include "countw.h"
#include "countl.h"


int main(int argc, char **argv)
{
    FILE* f_read;
    f_read = fopen(argv[1], "r");

    if (!f_read) {
        printf("Sommat fucked up.\n");
    }
    else {

        int lcount = countl(f_read);
        int ccount = countc(f_read);
        int wcount = countw(f_read);
        
        printf("COUNTS: %d, %d, %d\n", ccount, lcount, wcount);

    }

    fclose(f_read);

    return 0;
}
