#include<iostream>
using namespace std;

int main(){

	int a = 10;
	cout<<"a is: "<<a<<" address of a is: "<<&a<<"\n";

	// Value Copy 
	int b = a; 
	cout<<"b is: "<<b<<" address of b is: "<<&b<<"\n";

	// We modified contents of b
	b = 111;

	cout<<"After Modifications\n";

	cout<<"a is: "<<a<<" address of a is: "<<&a<<"\n";
	cout<<"b is: "<<b<<" address of b is: "<<&b<<"\n";


	int arr1[5];
	for(int i=0;i<5;i++){
		arr1[i] = i+10;
	}
	cout<<"arr1 is: "<<arr1<<" address of arr1 is: "<<&arr1<<"\n";
	for(int i=0;i<5;i++){
		cout<<arr1[i]<<"  "<<&arr1[i]<<"\n";
	}

	int arr2[5];

	// we did see with assignment we are unable to copy
	// we are now performing a deep copy operation
	for(int i=0;i<5;i++){
		arr2[i] = arr1[i];
	}

	cout<<"arr2 is: "<<arr2<<" address of arr2 is: "<<&arr2<<"\n";
	for(int i=0;i<5;i++){
		cout<<arr2[i]<<"  "<<&arr2[i]<<"\n";
	}


	// Assignment:  1. Create an Elevator Program !!
	// 				2. Sort data in array | Asc and Desc
	//				3. Give min and max number in array				

	return 0;
}