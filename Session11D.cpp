#include<iostream>
#include<string>
using namespace std;

void hello(){
	cout<<"This is hello"<<endl;
}

void show(){
	hello(); // Nesting of Functions
	cout<<"This is show"<<endl;
}

int main(){

	cout<<"Main Started"<<endl;
	show();
	cout<<"Main Finished"<<endl;
	return 0;
}
