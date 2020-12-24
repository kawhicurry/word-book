#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define LENGTH 30

typedef struct Word {
  char eng[LENGTH];
  char chn[LENGTH];
  struct tm *time;
} Word;
