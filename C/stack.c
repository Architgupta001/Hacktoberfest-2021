#include <stdio.h>
#include <stdlib.h>

typedef struct Stack {

	int top;
	int maxSize;
	int *array;
} Stack;

Stack createStack(int size) {

	Stack s = {-1, size, (int*)malloc(size * sizeof(int))};
	return s;
}

void destroyStack(Stack *s) {
	free(s -> array);
}

int isEmpty(Stack *s) {
	return !(s -> top > -1);
}

int isFull(Stack *s) {
	return !(s -> top < s -> maxSize - 1);
}

void push(Stack *s, int ele) {

	if(!isFull(s))
		s -> array[++(s -> top)] = ele;
	else
		printf("Overflow!\n");
}

int pop(Stack *s) {

	if(!isEmpty(s)) {

		int ele = s -> array[(s -> top)--];
		return ele;
	}
	printf("Underflow!\n");
}

void display(Stack *s) {

	if(isEmpty(s)) {

		printf("Stack is Empty!\n");
		return;
	}
	printf("top -> ");
	for(int i = s -> top; i >= 0; --i)
		printf("%d ", s -> array[i]);
	printf("\n");
}

int main() {

	Stack s1 = createStack(3);

	push(&s1, 10); push(&s1, 30); push(&s1, 20);
	display(&s1);

	printf("Popped: %d\n", pop(&s1)); printf("Popped: %d\n", pop(&s1));
	printf("Popped: %d\n", pop(&s1)); printf("Popped: %d\n", pop(&s1));
	display(&s1);

	destroyStack(&s1);
}
