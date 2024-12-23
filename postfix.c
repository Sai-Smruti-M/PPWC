#include <stdio.h>
#include <stdlib.h>

int stack[100];
int top = -1;

void push(int data) {
    top = top + 1;
    stack[top] = data;
}

int pop() {
    int value;
    value = stack[top];
    top = top - 1;
    return value;
}

void display() {
    int i;
    if (top == -1) {
        printf("empty stack\n");
        return;
    }
    for (i = top; i >= 0; i--) {
        printf("%d\n", stack[i]);
        printf("\n");
    }
}

int main() {
    int a, b;
    char arr[100];

    printf("Enter the expression: ");
    fgets(arr, 100, stdin);
    
    for (int i = 0; arr[i] != '\0'; i++) 
    {
        if (arr[i] == ' ') 
        {
        
            continue;
        } else if (arr[i] == '+') 
        {
            a = pop();
            b = pop();
            push(a + b);
        } 
        else if (arr[i] == '-') 
        {
            a = pop();
            b = pop();
            push(b - a);
        } 
        else if (arr[i] == '*') 
        {
            a = pop();
            b = pop();
            push(a * b);
        }
         else if (arr[i] == '/') 
         {
            a = pop();
            b = pop();
            push(b / a); 
        } 
        else if (arr[i] >= '0' && arr[i] <= '9') 
        {
          
            push(arr[i] - '0');
        }
    }

    int res = pop();
    printf("result: %d\n", res);

    return 0;
}

