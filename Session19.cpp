#include<iostream>				

using namespace std;


int division(int a, int b){
	if(b==0){
		throw "Divide By Zero Not Possible";
	}
	return a/b;
}

int main(){

	cout<<">> Program Started\n";

	int a = 10;
	int b = 0;
	int c = 0;
	
	try{
		division(a, b);
	}catch(const char* message){
		cout<<"Message is: "<<message<<"\n";
	}catch(int message){
		cout<<"Message is: "<<message<<"\n";
	}

	cout<<">> c is:"<<c<<"\n";
	
	cout<<">> Program Finished\n";

	return 0;
}