#include<stdio.h>
//#define pi 3.14
#define num 300
//#undef num
//#define area(radius) 
void start();
void finish();
#pragma startup start // -> before main starts
#pragma exit finish	  // -> after main finishes


// Macros -> define,  if/elif, pragma

void start(){
	printf("%s\n","This is start");
}

void finish(){
	printf("This is finish\n");
}

int main(){

	#if num == 100
		start();
	#elif num == 200
		finish();
	#else
		printf("%s\n","Nothing");
	#endif			

	printf("This is main\n");
	printf("Number is: %d\n", num);

	return 0;
}