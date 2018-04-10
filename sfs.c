//sfs.c
#include <stdio.h>
#include <ctype.h>

int main( int argc, char **argv)
{
    FILE* f_read;

    f_read = fopen(argv[1], "r");
    if (!f_read) {
        printf("Uh oh. Something went wrong.\n");
    }
    else {
        int c;
        int numc;
        while (!feof(f_read)){
            if(fscanf(f_read, "%c", &c)){
                printf("%c", c);
                numc++;
            }
        }
        
        printf("Num chars: %d\n", numc);

        fclose(f_read);
    }

    

    return 0;
}
