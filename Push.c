#include<stdio.h>
#define MAX 5
int main(){
    int stack[MAX];
    int top = -1;

    void push(int a){
        if(top == MAX-1){
            printf("Stack is full");
        }else{
            top++;
            stack[top] = a;
            printf("%d pushed\n",a);
        }
    }

    push(5);

    return 0;
}