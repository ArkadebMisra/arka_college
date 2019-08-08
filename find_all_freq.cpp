#include<stdio.h>

find_freq(int len,int nums[]){
	int freq=0,num,i=0;
	printf("enter a number to find it's frequency in the list");
	scanf("%d",&num);
	while(i<len){
		if(nums[i]==num){
			freq++;
		}
		i++;
	}
	printf("the frequency of number '%d' in the list is %d",num,freq);
}

main(){
	int i=0,l=0,choice,len,nums[len];
	
	printf("Enter the length of the list");
	scanf("%d",&len);
	printf("enter numbers");
	while(i<len){
		scanf("%d",&nums[i]);
		i++;	
	}
	while(l !=1){
		printf("input '1' to find frequency of an integer from the list or input '2' to exit");
		scanf("%d",&choice);
		switch(choice){
			case 1 :
				find_freq(len,nums);
			case 2 :
				l++;
		}		
	}

}
