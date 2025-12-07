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
            printf("\n%d",stack[top]);
            top--;
        }
    }
    printf("Enter 5 numbers\n");
    int j,in;
    for(j = 0; j < MAX; j++){
        printf("Enter a number: ");
        scanf("%d",&in);
        push(in);
    }
    for(j = top; j >= 0; j--){
        pop();
        printf("\n");
    }


    return 0;
}