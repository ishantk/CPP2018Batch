#include<iostream>
using namespace std;

int main(){

	// Nested Loops
	for(int i=1;i<=3;i++){

		cout<<i<<"\n";
		
		for(int j=1;j<=i;j++){
			cout<<j<<" ";
		}
		
		cout<<"\n";
	}

	return 0;
}

/*
	Assignment : explore break and continue in loops

	1
	1 1
	1 2 1
	1 3 3 1
	1 4 4 4 1
	1 5 5 5 5 1
	
*/