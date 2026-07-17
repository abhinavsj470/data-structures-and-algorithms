#include<stdio.h>							//ABHINAV SAJEEV
									//CSE-C,S3
struct polynomial{							//Roll No : 5					
 int coeff;
 int expo;
};

int main(){
 struct polynomial p1[20],p2[20],sum[40];
 int n1,n2,i,j,k;
 
 printf("Enter number of terms in first polynomial:");
 scanf("%d",&n1);
 
 for(i=0;i<n1;i++){
  printf("Enter coefficient and exponent of term %d:",i+1);
  scanf("%d%d",&p1[i].coeff,&p1[i].expo);
 }
 
 
 printf("Enter number of terms in second polynomial:");
 scanf("%d",&n2);

 for(j=0;j<n2;j++){
    printf("Enter coefficient and exponent of term %d:",j+1);
    scanf("%d%d",&p2[j].coeff,&p2[j].expo);
 }
 
 i=0;
 j=0;
 k=0;
 
 while(i<n1 && j<n2){
  if(p1[i].expo==p2[j].expo){
        sum[k].coeff=p1[i].coeff+p2[j].coeff;
        sum[k].expo=p1[i].expo;
        i++;
        j++;
        k++;
   }

    else if(p1[i].expo>p2[j].expo){
        sum[k].coeff=p1[i].coeff;
        sum[k].expo=p1[i].expo;
        i++;
        k++;
    }

    else{
        sum[k].coeff=p2[j].coeff;
        sum[k].expo=p2[j].expo;
        j++;
        k++;
    }
 }

 for(i=0;i<k;i++){
  printf("%dx^%d",sum[i].coeff,sum[i].expo); 
  if(i!=k-1){ 
    printf("+"); 
  } 
 }
 printf("\n");
 return 0;
}
