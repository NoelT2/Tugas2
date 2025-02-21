#include <stdio.h>
#include <stdlib.h>

struct tnode {
    int x;
    struct tnode *next;
} *top;

void push(int value) {
    struct tnode *node = (struct tnode*) malloc(sizeof(struct tnode));
    node->x = value;
    node->next = top;
    top = node;
}

void pop() {
    if (top == NULL) {
        printf("Stack is empty\n");
    } else {
        struct tnode *temp = top;
        top = top->next;
        free(temp);
    }
}

void printStack() {
    if (top == NULL) {
        printf("Stack is empty\n");
        return;
    }
    struct tnode *curr = top;
    while (curr != NULL) {
        printf("%d ", curr->x);
        curr = curr->next;
    }
    printf("\n");
}

int main() {
    int i,t,w;
    printf("Stack using Linked List\n");
    push(76);
    push(45);
    push(39);
    printStack();
    pop();
    printStack();
    pop();
    printStack();
    pop();
    printStack();
    pop();
    return 0;
}