 #include <stdio.h>

 int main(void)
 {
      FILE *fp; int i;
      char ss[80] = "Aku bahagia bersamamu";
      fp=fopen("test.txt","w");
      if(fp==NULL){
           printf("File test.txt can’t be created\n");   exit(1);
      }
      for(i=0; i<strlen(ss); i++)
      fputc(ss[i], fp); //menulis string ke dalam file test.txt

      fclose(fp);
      return 0;
 }






