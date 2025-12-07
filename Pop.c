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
    void display(){
        int i;
        if (top == -1){
            printf("Stack is empty");
        }else{
            for(i = top; i >= 0; i--){
                printf("\n%d ",stack[i]);
            }
        }
    }
    void pop(){
        if(top == -1){
            printf("Stack is empty");
        }else{
            printf("\n%d popped\n",stack[top]);
            top--;
        }
    }

    // push(5);
    // push(4);
    // push(3);
    // push(2);
    // push(1);
    // push(0); //to check stack is full or not
    // display();
    // // pop();
    // // display();

    return 0;
}