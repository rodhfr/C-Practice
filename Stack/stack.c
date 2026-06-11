#include <stdio.h>
#include <stdlib.h> 
#include <limits.h>

struct Stack {
  int top;
  unsigned capacity;
  int* array;
};


struct Stack* createStack(unsigned capacity) {
  if (!stack) {
    return NULL;
  }
  stack->capacity = capacity;
  stack->top =-1;

  stack->array = (int*)malloc(stack->capacity * sizeof(int));
  if (!stack->array) {
    free(stack);
    return NULL;
  }
  return stack;
}

int isFull(struct Stack* stack){
  return stack->top == stack->capacity -1;
}

int isEmpty(struct Stack* stack){
  return stack->top == -1;
}

void push(struct Stack* stack, int item){
  if(isFull(stack)){
    printf("Stack overflow");
    return;
  }
  stack->array[++stack->top] = item;
  printf("%d pushed to stack \n", item);
}

int pop(struct Stack* stack){
  if (isEmpty(stack){
    printf("Stack Underflow\n");
    return INT_MIN;
  }
  return stack->array[stack->top--];
}

int peek(struct Stack* stack){
  if(isEmpty(stack)){
    printf("Stack is empty\n");
    return INT_MIN;
  }
  return stack->array[stack->top];
}

void freeStack(struct Stack* stack){
  if (stack){
    free(stack->array);
    free(stack);
  }
}

int main(){
  struct Stack* stack = createStack(5);
  if(!stack){
    printf("Failed to create stack.\n");
    return 1;
  }

  push(stack, 10);
  push(stack, 20);
  push(stack, 30);

  printf("\nTop element is %d\n", peek(stack));
  
  printf("%d popped from stack \n", pop(stack));
  printf("After popping, top element is %d\n\n", peek(stack));

  push(stack, 40);
  push(stack, 50);
  push(stack, 60);

  push(stack, 70); //overflow
  
  printf("\nPopping all elements:\n");
  while(!isEmpty(stack)){
    printf("%d popped from stack\n", pop(stack));
  }
  pop(stack); //underflow
  
  freeStack(stack);

  return 0;
}


