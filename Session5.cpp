#include<iostream>
using namespace std;
int main(){

	// Array of Arrays
	// 3 1-D Arrays with each Array having 3 elements
	int arr[3][3];
	cout<<"arr is "<<arr<<"\n";

	cout<<"arr[0] is "<<arr[0]<<"\n";
	cout<<"arr[1] is "<<arr[1]<<"\n";
	cout<<"arr[2] is "<<arr[2]<<"\n";

	arr[0][0] = 10;
	arr[0][1] = 20;
	arr[0][2] = 30;

	arr[1][0] = 40;
	arr[1][1] = 50;
	arr[1][2] = 60;

	arr[2][0] = 70;
	arr[2][1] = 80;
	arr[2][2] = 90;

	cout<<"arr[0][0] is "<<arr[0][0]<<"\n";
	cout<<"Address of arr[0][0] is "<<&arr[0][0]<<"\n";

	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<"\n";
	}


	return 0;
}