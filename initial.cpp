#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "data.h"

#define LENGTH 30

typedef struct Word {
  char eng[LENGTH];
  char chn[LENGTH];
  struct tm *time;
} Word;

void initialize(void) {
  FILE *fp;
  time_t tmp_time=0;
  printf("where do u want to keep the book?\n");
  gets_s(address, LENGTH);
  Word initial_word = {"hello, world", "≥ı ºµ•¥ "};
  initial_word.time = gmtime(&tmp_time);
  fopen_s(&fp, address, "w");
  if (!fp) {
    printf("fail to establish the book,please try other address.\n");
    exit(1);
  }
  fwrite(&initial_word, sizeof(Word), 1, fp);
  fclose(fp);
  printf("establish succeed.");
}