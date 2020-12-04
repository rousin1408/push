#include <stdio.h>
int main(void) 
{
    FILE *fp; 
    char ss[80];
    fp=fopen("fgets.c","r");
    if(fp==NULL){
        printf("File fgets.c can’t be opened\n");   exit(1);
    }
    while(fgets(ss, 80, fp)) printf("%s",ss); 
    fclose(fp);
    return 0;
}