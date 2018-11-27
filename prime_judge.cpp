#include <stdio.h>

int main(){
	int num;
	printf("write a number.¥n");
	scanf("%d",&num);

	for(int i=2; i<num;i++){
		int a = num % i;
		if(a == 0){
			printf("the number is NOT prime.\n");
			return 0;
		}
	}
	printf("the number is PRIME.\n");
	return 0;
}
