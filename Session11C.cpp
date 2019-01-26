#include<iostream>
#include<string>
using namespace std;

inline void show(){
	cout<<"This is show"<<endl;
}

int main(){
	
	cout<<"Main Started"<<endl;
	show();
	cout<<"Main Finished"<<endl;
	return 0;
}

/*
	inline function -> call of the function is repaced ny defination
	
	Session11.cpp
	
	Preprocessing 

	Session11.I -> Intermediate Code

	Compiler

	Session11.obj

	Packing

	Session11.exe
*/