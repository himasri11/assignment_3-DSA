#include <stdio.h>
#define MAX 5
int stack[MAX], top = -1;

int isFull() { return top == MAX-1; }
int isEmpty() { return top == -1; }

void push(int val) {
    if (isFull()) { printf("Overflow\n"); return; }
    stack[++top] = val;
}

void pop() {
    if (isEmpty()) { printf("Underflow\n"); return; }
    printf("%d popped\n", stack[top--]);
}

void peek() {
    if (isEmpty()) printf("Empty\n");
    else printf("Top: %d\n", stack[top]);
}

void display() {
    if (isEmpty()) { printf("Empty\n"); return; }
    for (int i=top; i>=0; i--) printf("%d ", stack[i]);
    printf("\n");
}

int main() {
    int ch, val;
    do {
        printf("1.Push 2.Pop 3.Peek 4.Display 5.Exit\n");
        scanf("%d",&ch);
        switch(ch) {
            case 1: scanf("%d",&val); push(val); break;
            case 2: pop(); break;
            case 3: peek(); break;
            case 4: display(); break;
        }
    } while(ch!=5);
    return 0;
}
