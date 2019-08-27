#include<stdio.h>

void f1(){
	static int j;
	printf("%d",j++);
};

main(){
	int i;
	for (i=0,i<=3,i++){
		f1();
	};
};
