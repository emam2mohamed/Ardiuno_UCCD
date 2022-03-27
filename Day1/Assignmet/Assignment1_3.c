#include<stdio.h>  /*call standard input output*/
 
 void main(){     /*main function*/
	 int a , b ,sum,sub,anding,oring,Xoring; /*declration for a and b */
	 
	 printf("please enter a : ");
	 scanf(" %d",&a); /* get number a */
	 
	 printf("please enter b : ");
	 scanf(" %d",& b); /* get number b */
	 
	 sum = a+b ; 
	 sub= a-b; 
	 anding= a&b ; 
	 oring= a | b ; 
	 Xoring= a ^ b ; 
	 
	 printf("a+b : ");
	 printf("%d",sum);
	 
	  printf(" \n a&b : ");
	 printf("%d",anding);
	 
	  printf(" \n a | b  : ");
	 printf("%d",oring);
	 
	  printf(" \n a ^ b : ");
	 printf("%d",Xoring);
	 
	 
 }