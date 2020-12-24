#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

static int draw_line(int n);

void print_menu(void) {
  int choice;
  printf("what do you want to do?\n");
  scanf_s("%d");
  switch (choice) { case 1: }
}

static int draw_line(int n) {
  int i = 0;
  for (i = 0; i < 10; i++) {
    if (i == 4) {
      printf("%d", n);
    }
  }
}