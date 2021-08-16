#include<stdio.h>

void loop1(int num){
 int ans=1;
 for(int i=num;i>=1;i--)
 {
     ans*=i;
 }
 printf("Answer by iterativ method is:- %d",ans);
}

int recu(int n){
    if(n == 1)
    return 1;
    else{
      return(n*recu(n-1));     
    }  
    }
void main()
 {
     int a,b,num;

     printf("enter number:- ");
     scanf("%d",&num);
     printf("enter 1 or 2 for finding no in \n 1.iterativ methood \n 2.recursive method \n");
     scanf("%d",&a);

     if (a==1)
     {
         loop1(num);
     }
     else if(a==2){
        b=recu(num);
        printf("Answer by recursive method is:- %d",b);
     }
     else{
         printf("invalid input");
     }
}