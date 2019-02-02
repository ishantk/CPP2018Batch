#include<stdio.h>

int main(){

	for(int i=1;i<=10;i++){
		if(i>5){
			break; // Terminate the Loop
		}

		printf("i is: %d\n", i);
	}

	printf("%s\n", "===========");

	for(int i=1;i<=10;i++){
		if(i<=5){
			continue; // Continue the loop in next iteration by skipping below statements
		}

		printf("i is: %d\n", i);
	}



	return 0;
}