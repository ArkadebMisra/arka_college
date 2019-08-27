#include<stdio.h>
int even_or_odd(){
	int num;
	
	printf("enter a number");
	scanf("%d",&num);
	if (num %2 == 0){
		printf("its an even number");
	}
	else{
		printf("its an odd number");
	}
}

void pos_neg(){
	int num;
	printf("Enter a number");
	scanf("%d",&num);
	if (num < 0){
		printf("its negetive");
	}
	else{
		printf("its posetive");
	}
}

int factorial(){
	int num;
	printf("enter a number");
	scanf(%d,&num);
	initial = 0;
	
	while (initial != num){
		
	}
}

main(){
	int i;
	printf("1.Determine even or odd \n2.Determine whether posetive or negative\n");
	printf("Enter your choice");
	scanf("%d",&i);
	
	switch(i){
		case 1: even_or_odd();
				break;
		case 2: pos_neg();
				break;
	}
}
