#include<stdio.h>
int find_freq(int nums[],int num,int l){
	int freq=0,i=0;
	while(i<l){
		if(nums[i]==num){
			freq += 1;
		}
		i++;
	}
	printf("The frequency is %d" ,freq);

}

main(){
	int length,nums[length],num,i;
	
	printf("Enter the length of thr array \n");
	scanf("%d",&length);
	printf("enter the digits\n");
	for(i=0;i<length;i++){
		scanf("%d",&nums[i]);
	}
	printf("Enter the a number to find its frequency in the list\n");
	scanf("%d",&num);
	find_freq(nums,num,length);
}
