#include<iostream>
using namespace std;

// Command Line Arguments
// argc is argument count
// argv is argument value -> Array
int main(int argc, char const *argv[]){
//int main(){

	cout<<"argc is: "<<argc<<"\n";
	
	/*
	cout<<"argv[0] is: "<<argv[0]<<"\n";
	cout<<"argv[1] is: "<<argv[1]<<"\n";
	cout<<"argv[2] is: "<<argv[2]<<"\n";*/

	for(int i=0;i<argc;i++){
		cout<<"argv["<<i<<"] is: "<<argv[i]<<"\n";
	}

	return 0;
}