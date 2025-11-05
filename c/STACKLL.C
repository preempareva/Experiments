#include<stdio.h>
#include<stdlib.h>

typedef struct Node 
{
    int data;
    struct Node *next;
}Node;

Node * CreateNode(int info){
    Node * node = (Node *)malloc(sizeof(Node));
    node->data=info;
    node->next=NULL;
    return node;
} 

Node * node, *start=NULL , *q , *temp;

void push(int info){

    node = CreateNode(info);
    
    if(start==NULL){
        start=node;
    }
    else{
        node->next=start;
        start=node;
    }
}

void pop(){
    if(start==NULL){
        printf("list is empty");
    }
    else{
        temp=start;
        start=temp->next;
        free(temp);
    }
}

void display(){
    if(start==NULL){
        printf("list is empty");
    }
    else{
        q=start;
        printf("stack is..\n");
        while(q!=NULL){
            printf("%d\n",q->data);
            q=q->next;
        }
    }
}

void peek(){
    if(start==NULL){
        printf("list is empty");
    }
    else{
        printf("top element is %d",start->data);
    }
}



int main()
{
    int ch,n;
    do{
    printf("\nEnter operation to be performed : \n");
    printf("1. Push element\n");
    printf("2. Pop element\n");
    printf("3. Top element\n");
    printf("4. Display element\n");
    printf("5.Exit...!\n");
    scanf("%d",&ch);

    switch(ch)
    {
        case 1:
        printf("Enter data: ");
        scanf("%d",&n);
        push(n);
        break;

        case 2:
        pop();
        break;

        case 3:
        peek();
        break;

        case 4:
        display();
        break;

        case 5:
        exit(0);
        break;
        
        default:
        printf("Enter valid choice !!\n");
        break;
    }
    } while (ch!=5);
return 0;
}
