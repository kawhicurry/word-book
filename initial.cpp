#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define LENGTH 50

typedef struct Word {
  int number;
  char eng[LENGTH];
  char chn[LENGTH];
  struct tm *time;
} Word;
char address[LENGTH] = {0};

void initialize(void) {
  FILE *fp;
  time_t rawtime = 0;
  struct tm temp;
  printf("where do u want to keep the book?\n");
  gets_s(address, LENGTH);
  rawtime = time(NULL);
  localtime_s(&temp, &rawtime);
  Word initial_word = {0, "hello, world", "≥ı ºµ•¥ ", &temp};
  fopen_s(&fp, address, "w");
  if (!fp) {
    printf("fail to establish the book,please try other address.\n");
    exit(1);
  }
  fwrite(&initial_word, sizeof(Word), 1, fp);
  fclose(fp);
  printf("establish succeed.");
}