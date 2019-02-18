#include<iostream>
using namespace std;
int main(){

	int a = 10;
	int* ptr = &a;

	cout<<"a is:"<<a<<"\n";
	cout<<"Address of a is:"<<&a<<"\n";
	cout<<"ptr is:"<<ptr<<"\n";
	cout<<"Address of ptr is:"<<&ptr<<"\n";
	cout<<"Value at ptr is:"<<*ptr<<"\n";

	/*
	ptr++; // Updating Pointer Content
	cout<<"ptr now is:"<<ptr<<"\n";
	cout<<"Value at ptr now is:"<<*ptr<<"\n";
	*/

	/*
	*ptr++;
	cout<<"ptr now is:"<<ptr<<"\n";
	cout<<"Value at ptr now is:"<<*ptr<<"\n";
	*/

	(*ptr)++;
	cout<<"ptr now is:"<<ptr<<"\n";
	cout<<"Value at ptr now is:"<<*ptr<<"\n";
	cout<<"a now is:"<<a<<"\n";

	return 0;
}