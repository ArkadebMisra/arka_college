#include<stdio.h>
sum(int *arr,int l){
	int s=0,i=0;
	while(i<l){
		s=s+*(arr+i);
		i++;
	}
	printf("sum = %d",s);
}
main(){
	int l,i;
	printf("enter the length of the array");
	scanf("%d",&l);
	int arr[l];
	printf("enter the eliments of the array");
	for(i=0;i<l;i++){
		scanf("%d",&arr[i]);
	}
	sum(arr,l);
}
