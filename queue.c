#define MAX 5
#include<stdio.h>
int e,ch,f=-1,r=-1;
int queue[MAX];
void enqueue()
{ 
  if (r==MAX-1)
{
  printf("overflow \n");
}
else if(f==-1&r==-1)
{ 
  f=r=0;
  printf("Enter element: ");
  scanf("%d",&e);
  queue[r]= e;
}
 else

{printf("Enter element: ");
  scanf("%d",&e);
 queue[++r]=e;
}}
void dequeue()
{
 if(f==-1 & r==-1)
{
 printf("Underflow\n");
}
 else if(f==r)
{
 printf("The deleted element is %d \n",queue[f]);
 f=r=-1;
}
 else
{ printf("The deleted element is %d \n",queue[f]);
  f++;
 }}
 void display()
 { 
  for (int i=f;i<=r;i++)
 {
   printf("%d ",queue[i]);
 }}
 void peek()
 {printf("%d ",queue[f]);}
 
 int main()
 { 
  printf("Enter queue operation[0.exit,1.insert,2.delete,3.display,4.peek]: ");
  scanf("%d",&ch);
  while(ch!=0)
  {
  switch(ch)
  { case 0:
    break;
    case 1:
    enqueue();
    break;
    case 2:
    dequeue();
    break;
    case 3:
    display();
    break;
    case 4:
    peek();
    break;
    default:
    printf("Enter valid choice");
    break;
    }
    printf("\nEnter queue operation[0.exit,1.insert,2.delete,3.display,4.peek]: ");
    scanf("%d",&ch);}
    return 0;}      
                             
