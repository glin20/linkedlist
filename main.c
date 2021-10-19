#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "linkedlist.h"


int main(){
  srand(time(NULL));
  int r = rand() % 100 + 1;
  int test2 = r;
  struct virus *i = mutate_virus(r, "Oonga Boonga");
  r = rand() % 100 + 1;
  struct virus *j = insert_front(i, r, "Boonga Oonga");
  r = rand() % 100 + 1;
  int test = r;
  struct virus *k = insert_front(j, r, "Soonga Oonga");
  printf("\nBefore Remove:\n");
  print_list(k);
  printf("\nAfter Remove (Removed First Node):\n");
  k = remove_node(k, test);
  print_list(k);
  printf("\nAfter Remove (Removed Second Node):\n");
  k = remove_node(k, test2);
  print_list(k);
  printf("\nFree:\n");
  k = free_list(k);
  print_list(k);
  return 0;
}
