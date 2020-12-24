#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


void print_menu(void) {
  int choice;
  printf("what do you want to do?\n");
  printf("-----1.check words------\n");
  printf("-----2.print words------\n");
  printf("-----3.add words--------\n");
  printf("-----4.delete words-----\n");
  printf("-----5.sort words-------\n");
  printf("-----6.options----------\n");
  printf("-----7.quit-------------\n");
  scanf_s("%d",&choice);
  switch (choice) {  }//用switch调用不同处理函数
}

