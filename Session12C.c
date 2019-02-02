#include<stdio.h>
#include<stdlib.h>

int main(){
	
	//1. Static Memory Allocation
	int x = 10; // A container x will be created in the Stack Area of RAM

	// 2. Dynamic Memory Allocation in C
	/*
		1. malloc()  -> used to get the memory allocation done
		2. calloc()  -> contigous memory Allocation
		3. realloc() -> reallocating memory to allocated resource
		4. free() 	 -> to clear/delete memory
	*/

	// 2. Dynamic Memory Allocation in C++
	/*
		new		-> to get memory allocation
		delete  -> to delete allocated memory
	*/	

	// Static Memory Allocation means what memory how much memory 
	// shall be required that will be decided at compile time	

	// Dynamic Memoery Allocation means memory will be allocated at run time
	
	// if int takes 4 bytes i am requesting 40 bytes of memory
	int* ptr = (int*) malloc(10 * sizeof(int));	
	printf("Pointer Contains: %p\n", ptr);

	for(int i=0; i<10; i++){
		ptr[i] = i*10;
	}

	printf("Data in Memory\n");

	for(int i=0; i<10; i++){
		printf("%d\n",ptr[i]);
	}

	// delete
	free(ptr);

	// Array
	int* cptr = (int*) calloc(10, sizeof(int));	

	// ReAlloc
	ptr = realloc(ptr, 20 * sizeof(int));
	printf("Pointer Now Contains: %p\n", ptr);

	return 0;
}