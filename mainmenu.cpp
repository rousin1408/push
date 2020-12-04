#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
int pilih;
char nama[255];
int harga;
int jumlah;

const char* detectOS() {
  #ifdef _WIN32
  return "Windows 32-bit";
  #elif _WIN64
  return "Windows 64-bit";
  #elif __APPLE__ || __MACH__
  return "Mac OSX";
  #elif __linux__
  return "Linux";
  #elif __FreeBSD__
  return "FreeBSD";
  #elif __unix || __unix__
  return "Unix";
  #else
  return "Other";
  #endif
}
int main() {
  
    printf("System: %s\n", detectOS());
    time_t rawtime;
    struct tm* timeinfo;
    time(&rawtime);
    timeinfo = localtime(&rawtime);
    printf("%s\n", asctime(timeinfo));
    printf("1. Add Dish\n");
    printf("2. Remove Dish\n");
    printf("3. Add Customer\n");
    printf("4. Search Customer\n");
    printf("5. View Warteg\n");
    printf("6. Order\n");
    printf("7. Payment\n");
    printf("8. Exit Warteg\n");
    printf(">> ");
    scanf("%d",&pilih);
    if(pilih==1){
      printf("Insert the name of the dish [Lowercase letters]:");
      scanf("%s",nama);
      puts("");
      printf("Insert the name of the dish [Lowercase letters]:");
      scanf("%s",nama);
      puts("");
      printf("Insert the price of the dish [1000..50000]:");
      scanf("%d",&harga);
      puts("");
      printf("Insert the quantity of the dish [1..999]:");
      scanf("%d",&jumlah);
      puts("");
      printf("The dish has been added!\n");
      printf("Press enter to continue...\n");
    }
return 0;
}
