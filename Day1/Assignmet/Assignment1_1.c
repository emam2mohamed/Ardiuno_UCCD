#include<stdio.h> /* call standard input output library*/
void main (){       /* my main function */
	
	int NofRows,space,star; 
	printf("please enter the number of rows");
	scanf(" %d",&NofRows);
	
	for(int row=1; row<=NofRows; row++){
		
		for(space=1;space<=(NofRows-row);space++)
			printf(" ");
		
		for(star=1; star<=((2*row)-1);star++)
			printf("*");
		
		printf("\n");
	}
	
	
}