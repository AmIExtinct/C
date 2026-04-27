#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void FileShit(const char *ass);
void AfterFileShit(const char *noProfanity);

int main(int argc, char** argv) {
   printf("Hola Goobers\n");
   
   if (argc < 2) {
      char fileName[1024];

      printf("> ");
      scanf("%1023[^\n]", fileName);
      FileShit(fileName);
      AfterFileShit(fileName);
      
      return 0;
   }

   FileShit(argv[1]);
   AfterFileShit(argv[1]);
    return 0;
}

void FileShit(const char *ass){
   FILE *yourAss = fopen(ass, "r+");
   if (yourAss == NULL) {
      printf("are you dum?\n");
      return;
   }

   char data[8092];
   unsigned int lines = 0;
   unsigned int bytes;

   while ( (bytes = fread(data, 1, sizeof(data), yourAss)) != 0 ) {

      for (int i = 0; i<bytes; i++) {
         if (data[i] == '\n') {
            lines++;
         }
         nanosleep(&(struct timespec){0, 50*1000}, NULL);
       } 
   }
   fclose(yourAss);

   char *newAss;
   asprintf(&newAss, "%s%s", ass, ".old");
   rename(ass, newAss);
   printf("\n[OK] Slayed %d lines from %s\n", lines, newAss);
   free(newAss);
}


void AfterFileShit(const char *noProfanity){
   FILE *naughty = fopen(noProfanity, "w+");
   if (naughty == NULL){
      printf("Just Give Up, I can't Do It\n");
      return;
   }
   char *date;
   time_t wut;
   time(&wut);

   fprintf(naughty, "# Slayed On %s", ctime(&wut));
   fclose(naughty);
}
