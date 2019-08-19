#include<stdio.h>

main(){
	int nums[10],i=0,even[10],num_odd=0,num_even=0,odd[10],j=0,k,l;
	printf("enter 10 numbers");
	while(i<=9){
		scanf("%d",&nums[i]);
		i++;
	}
	for(j=0;j<=9;j++){
		if(nums[j]%2==0){
		
		//	for(k=0;k<=num_even;k++){
				even[num_even]=nums[j];
				num_even++;
					
		//	}
		//	printf("even %d \n",even[k]);
		}
		else{
		
			//for(l=0;l<=num_odd;l++){
				odd[num_odd]=nums[j];
				num_odd++;
		//		printf("odd %d \n",odd[l]);	
		//}
			
		}
	}
	printf("Even numbers\n");
	for(j=0;j<num_even;j++){
		printf("%d \n",even[j]);
	}
	printf("odd numbers\n");
	for(j=0;j<num_odd;j++){
		printf("%d \n",odd[j]);
	}
}
