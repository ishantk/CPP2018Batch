#include<iostream>
using namespace std;

void printArray(int someArr[5]){ // Reference Copy

	cout<<"someArr is: "<<someArr<<"\n";

	for(int i=0;i<5;i++){
		//cout<<someArr[i]<<"  ";
		someArr[i] = someArr[i]+10;
	}
	cout<<"\n";
}

int main(){

	int arr[5];

	arr[0] = 10;
	arr[1] = 20;
	arr[2] = 30;
	arr[3] = 40;
	arr[4] = 50;

	cout<<"arr is: "<<arr<<"\n";

	printArray(arr);

	for(int i=0;i<5;i++){
		cout<<arr[i]<<"  ";
	}

	// Direct Assignment is an error
	// int anotherArr[5] = arr;



	return 0;
}