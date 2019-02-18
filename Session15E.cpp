#include<iostream>
using namespace std;

int main(){

	int arr[5];

	for(int i=0;i<5;i++){
		arr[i] = 10+i;
	}

	cout<<"arr is: "<<arr<<"\n";
	int* ptr = arr;

	for(int i=0;i<5;i++){
		cout<<*ptr<<"\n";
		ptr++;
	}

	for(int i=0;i<5;i++){
		cout<<*(arr+i)<<"\n";
	}


	return 0;
}