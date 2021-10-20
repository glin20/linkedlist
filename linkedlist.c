#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct virus{
  int i;
  char name[200];
  struct virus *next;
};

void printfunction(struct virus *j){
  printf("The mutated %s virus will infect %d percent of the population\n", j -> name, j -> i);
}

struct virus *mutate_virus(int percent, char *name){
  struct virus *p = malloc(sizeof(struct virus));
  strncpy(p -> name, name, strlen(name));
  p -> i = percent;
  p -> next = NULL;
  return p;
}

void print_list(struct virus *node){
  while (node){
    printfunction(node);
    node = node -> next;
  }
}

struct virus *insert_front(struct virus *current, int new_int, char *new_name){
  struct virus *new_virus = malloc(sizeof(struct virus));
  strncpy(new_virus -> name, new_name, strlen(new_name));
  new_virus -> i = new_int;
  new_virus -> next = current;
  return new_virus;
}

struct virus *free_list(struct virus *free_virus){
  struct virus *first = free_virus;
  struct virus *temp;
  while (free_virus) {
    temp = free_virus;
    free(temp);
    free_virus = free_virus -> next;
  }
  return NULL;
}

struct virus *remove_node(struct virus *front, int data){
  struct virus *first = front;
  struct virus *temp;
  int tmp = 1;
  while (front){
    if (front -> i == data && tmp != 1){
      temp -> next = front -> next;
      free(front);
    }
    if (front -> i == data && tmp == 1){
      temp = front -> next;
      first = temp;
      free(front);
    }
    temp = front;
    front = front -> next;
    tmp++;
  }
  return first;
}
