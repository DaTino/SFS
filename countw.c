//countw.c

#include <stdio.h>
#include <ctype.h>

int countw(FILE *fp) {

    int numw=0;
    int c;
    enum {INITIAL, WORD, SPACE};
    int state = INITIAL;

    c = fgetc(fp);
    while (c != EOF) {
        switch(state) {
            case INITIAL: numw = 0;
                          if (isalpha(c) || c=='\'') {
                              numw++;
                              state = WORD;
                          }
                          else state = SPACE;
                          break;
            case WORD:    if (!isalpha(c) && c!='\'')
                                state = SPACE;
                          break;
            case SPACE:   if (isalpha(c) || c=='\'') {
                                numw++;
                                state = WORD;
                          }
        }

    c = fgetc(fp);
    }

    rewind(fp);

    return numw;

}
