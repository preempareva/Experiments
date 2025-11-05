#include<stdio.h>
#include<stdlib.h>
void push();
void pop();
void peek();
void display();
int top=-1;
int max;
int data;
int stack[100];

int main()
{
    int ch,choice=0;
    printf("enter size of stack less than 100:\n");
    scanf("%d",&max);
    do{
    printf("Enter operation to be performed : \n");
    printf("1. Push element\n");
    printf("2. Pop element\n");
    printf("3. Top element\n");
    printf("4. Display element\n");
    scanf("%d",&ch);

    switch(ch)
    {
        case 1:
        push();
        display();
        break;

        case 2:
        pop();
        display();
        break;

        case 3:
        peek();
        display();
        break;

        case 4:
        display();
        break;
        
        default:
        printf("Enter valid choice !!\n");
        break;
    }
    printf("\nDo you want to continue 1/0\n");
    scanf("%d",&choice);
    } while (choice!=0);
    return 0;
}


void push(){
    if (top==(max-1))
    {
        printf("Overflow\n");
    }
    else{
        printf("Enter Element to be pushed : \n");
        scanf("%d",&data);
        stack[++top]=data;
    }
}

void pop(){
    if(top==-1)
    {
        printf("Underflow\n");
    }
    else
    {
        printf("Element popped is %d \n",stack[top--]);
    }
}

void peek(){
    if(top==-1){
        printf("underflow\n");
    }
    else{
        printf("Element at top is %d \n",stack[top]);
    }
}


void display(){
    int i;
    if(top==-1){
        printf("Underflow\n");
    }
    else{
        printf("element in stack are :\n");
        for(i=top;i>=0;i--){
        printf("%d \n",stack[i]);
        }
    }
}