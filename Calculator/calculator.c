#include <stdio.h>
void add(int *a, int *b);
void subtract(int *a, int *b);
void multiply(int *a, int *b);
void divide(int *a, int *b);

main(){
	int x,y, choice;
	printf("ENTER TWO INTEGERS:\n");
	scanf("%d%d",&x,&y);
	do{
		printf("\n \t CALCULATOR MENU\n");
		printf("\t-----------------\n");
		printf("1. Addition\n");
		printf("2. Subtraction\n");
		printf("3. Multiplication\n");				
		printf("4. Division\n");							
		printf("0. To Exit\n");
		printf("ENTER YOUR CHOICE:\n");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				add(&x,&y);
				break;
			case 2:
				subtract(&x,&y);
				break;
			case 3:
				multiply(&x,&y);
				break;
			case 4:
				divide(&x,&y);
				break;
			case 0:
			    printf("Exiting Calculator ...\n");
				break;
			default:
				printf("Invalid input");
		}
	}while (choice!=0);
}
void add(int *a, int *b){
	printf("SUM=%d\n",*a+*b);
}
void subtract(int *a, int *b){
	printf("DIFFERENCE=%d\n",*a-*b);
}
void multiply(int *a, int *b){
	printf("PRODUCT=%d\n",(*a)*(*b));
}
void divide(int *a, int *b){
	if(*b!=0)
     	printf("QUOTIENT=%d\n",(float)(*a)/(*b));
	else
	    printf("DIVISION BY 0 IS NOT DEFINED");
}












