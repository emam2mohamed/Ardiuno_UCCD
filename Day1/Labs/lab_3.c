#include<stdio.h>           /*call standard input output*/
void main(){
	int num1,num2,sum,mul; 
printf ( "please enter the first number \n "  );
scanf(" %d",& num1);      /*get the first number */

printf ( "please enter the second number \n"  );
scanf(" %d",& num2);      /*get the second number */

sum= num1 + num2;       /*summation of num & num2*/
printf ( "a+b= ");
printf("%d \n",sum);     /*print the summation*/

mul= num1 * num2 ;       /*mul of num & num2 */
printf ( "a*b= ");
printf("%d",mul);          /*print the mul*/


}