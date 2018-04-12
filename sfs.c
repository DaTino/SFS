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
       
        FILE* temp = fopen("temp.txt", "w+");
        char filename[] = "temp";
        int input=0;

        input = fgetc(temp);
        whilea (input != EOF) {
          input = fgetc(temp);
        }

        lcount = countl(temp);
        ccount = countc(temp);
        wcount = countw(temp);

        printf("COUNTS: %d, %d, %d\n", ccount, lcount, wcount);

        fclose(temp);
        remove(filename);

    } 
    else {


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
    }

    return 0;
}
