#include<iostream>
using namespace std;

int main(){

	// a is created in stack
	int a = 10; // ok
	// int a = 10, 20; error, as a is a single value container

	// Multi Value Container :  Array
	// arr is also in stack
	// arr will not show value, it will show address of 1st element in array !!
	// Array is Homogeneous Storage Container i.e. Data must be same type
	int arr[10];

	cout<<"a is: "<<a<<"\n";
	cout<<"arr is: "<<arr<<"\n";

	cout<<"Address of a is: "<<&a<<"\n";
	cout<<"Address of arr is: "<<&arr<<"\n";

	/*
	arr[0] = 10;
	arr[1] = 20;

	arr[9] = 111;
	*/

	// Write Operation in Array
	for(int i=0;i<10;i++){
		// arr[i] = 10*(i+1);
		cin>>arr[i];
	}

	// Read Operation in Array
	for(int i=0;i<10;i++){
		cout<<arr[i]<<"  "<<&arr[i]<<"\n";
	}

	


	return 0;
}