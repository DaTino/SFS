//sfs.c revised

#include <stdio.h>
#include <ctype.h>
#include "countc.h"
#include "countw.h"
#include "countl.h"


int main(int argc, char **argv)
{
    
    int lcount, ccount, wcount;
    

    if (argc=1) {
        //make the same things but for stdio..
        FILE* temp = freopen("temp.txt", "w+", stdout);
        lcount = countl(temp);
        ccount = countc(temp);
        wcount = countw(temp);
        fclose(temp);

    } 



    FILE* f_read;
    f_read = fopen(argv[1], "r");

    if (!f_read) {
        printf("Sommat fucked up.\n");
    }
    else {

        lcount = countl(f_read);
        ccount = countc(f_read);
        wcount = countw(f_read);
        
        printf("COUNTS: %d, %d, %d\n", ccount, lcount, wcount);

    }

    fclose(f_read);

    return 0;
}
