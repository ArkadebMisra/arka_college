
//Fibonacci Series

#include <stdio.h>
int main(){
	int n,i,t1=0,t2=1,nextTerm;
    printf("Enter the range of the series ");
    scanf("%d", &n);
    if(n>=0){
    	printf("Fibonacci Series: ");
    	while(t1 <= n)
    	{
        	printf("%d, ", t1);
       		nextTerm = t1 + t2;
        	t1 = t2;
        	t2 = nextTerm;
    	}
	}
    else{
    	printf("Invalid number");
}
}
