#include "stack.h"
#include <stdio.h>

int main(void){

    printf("Starting\n");

    int x1 = 6;
    int x2 = 15;

    stack sptr;

    initialize(&sptr);

    if (empty(&sptr))
    {
        printf("stack is empty\n");
    }

    push(x1, &sptr);
    push(x2, &sptr);

    printf("x1 = %d\n", x1);
    printf("x2 = %d\n", x2);
    
    if (!empty(&sptr))
    {
        printf("stack is not empty\n");
    }
    
    printf("y1 = %d\n", pop(&sptr));
    printf("y2 = %d\n", pop(&sptr));

    return 0;
}