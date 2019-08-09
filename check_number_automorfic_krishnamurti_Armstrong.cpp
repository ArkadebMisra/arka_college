#include<stdio.h>
#include<math.h>

int do_fact(int num){
	int i=1,fact=1;
	while(i<=num){
		fact = fact*i;
		i++;
	}
	return fact;
}

check_armstrong(){
	int aNo=0,dig,num;
	printf("Enter a number\n");
	scanf("%d",&num);
	int cNum=num; 
	while(cNum!=0){
		dig = cNum%10;
		aNo += dig*dig*dig;
		cNum = cNum/10 ;
	}
	if(aNo == num){
		printf("it's an Armstrong no\n");
	}
	else{
		printf("It's not armstrong\n");
	}
}

check_krishna(){
	int kNo=0,dig,num;
	printf("Enter a number\n");
	scanf("%d",&num);
	int cNo = num;
	while(cNo!=0){
		dig = cNo%10;
		kNo += do_fact(dig);
		cNo = cNo/10;
	}
	if(kNo == num){
		printf("it's a krishnamurti no\n");
	}
	else{
		printf("It's not krishnamurti no\n");
	}	
}

check_automorfic(){
	int dig,num, root_dig;
	printf("Enter a number\n");
	scanf("%d",&num);
	int root = sqrt(num);
	dig = num%10;
	root_dig = root%10;
	if(dig == root_dig){
		printf("Its an automorfic number\n");
	}
	else{
		printf("its not automorfic number\n");
	}

}

main(){
	int choice,loop=0;
	while(loop != 1){
		printf("choose '1','2','3'to check if a number is-\n");
		printf("1. Armstrong no \n2. Krishnamurty number \n3. Automorfic number\n");
		printf("Enter 4 to exit\n");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				check_armstrong();
				break;
			case 2:
				check_krishna();
				break;
			case 3:
				check_automorfic();
				break;
			case 4:
				loop++;
				break;
		}
	}

}
