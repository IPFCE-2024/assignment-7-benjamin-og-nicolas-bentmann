#include "stack.h"
#include <stdlib.h>
#include <assert.h>

void initialize(stack *s) {
  s->head = NULL;
}

void push(int x, stack *s) {
  struct node* p = malloc(sizeof(node));
  p->data = x;
  p->next = s->head;
  s->head = p;
}

int pop(stack *s) {
  assert(s->head != NULL);

  int x = s->head->data;
  struct node* p = s->head;
  s->head = s->head->next;
  free(p);
  return x;
}

bool empty(stack *s) {
  if (s->head == NULL)
  {
    return true;
  }
  
  return false;
}

bool full(stack *s) {
  return false;
}

