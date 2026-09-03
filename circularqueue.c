#include<stdio.h>
#define N 5
int queue[N];
int front=-1;
int rear=-1;

void enqueue(int x){
 if((rear+1)%N==front){
  printf("Queue overflow\n");
 }
 else if(front==-1 && rear==-1){
  front=rear=0;
  queue[rear]=x;
 }
 else{
  rear=(rear+1)%N;
  queue[rear]=x;
 }
}

void dequeue(){
 if(front==-1 && rear==-1){
  printf("Queue underflow\n");
 }
 else if(front==rear){
  printf("Dequeued element=%d\n",queue[front]);
  front=rear=-1;
 }
 else{
  printf("Dequeued element=%d\n",queue[front]);
  front=(front+1)%N;
 }
}

void peek(){
 if(front==-1 && rear==-1){
  printf("Queue is empty\n");
 }
 else{
  printf("Front element=%d\n",queue[front]);
 }
}

void display(){
 int i;
 if(front==-1 && rear==-1){
  printf("Queue is empty\n");
 }
 else{
  printf("Queue elements are:\n");
  i=front;
  while(1){
   printf("%d",queue[i]);
   if(i==rear){
    break;
   }
   i=(i+1)%N;
  }
  printf("\n");
 }
}

int main(){
 int a;
 do{
  printf("1.Enqueue 2.Dequeue 3.Peek 4.Display 5.Exit\n");
  printf("Enter a number from 1 to 5:");
  scanf("%d",&a);
  switch(a){
   case 1:
    int x;
    printf("Enter element:");
    scanf("%d",&x);
    enqueue(x);
    break;
   case 2:
    dequeue();
    break;
   case 3:
    peek();
    break;
   case 4:
    display();
    break;
   case 5:
    printf("Exited\n");
    break;
    
   default:
    printf("Invalid choice\n");
   }
 } while(a!=5);
 return 0;
}
