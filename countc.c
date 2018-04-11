//countc.c counts number of chars 

int countc(FILE *fp) {
    
    int numc;
    
    while (!feof(fp)) {
        
        if (fscanf(fp, "%c", &c)) {
            numc++;
        }

    return numc;

}
