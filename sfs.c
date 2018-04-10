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
        int numl;
        char buf[900];

        while (!feof(f_read)){
            
            fgets(buf, 900, (FILE*)f_read);

            if(fscanf(f_read, "%c", &c)){
                printf("%c", c);

                if (c == '\n'){
                    numl++;
                }

                numc++;
            }
        }
        
        printf("Num chars: %d\n", numc);
        printf("Num lines: %d\n", numl);

        printf("%s", buf);

        fclose(f_read);
    }

    

    return 0;
}
