#include<iostream>
using namespace std;
int main(){

	int a = 10;
	int* p1 = &a;

	cout<<"a is:"<<a<<"\n";
	cout<<"Address of a is:"<<&a<<"\n";
	cout<<"p1 is:"<<p1<<"\n";
	cout<<"Address of p1 is:"<<&p1<<"\n";
	cout<<"Value at p1 is:"<<*p1<<"\n";

	/*
	p1++; // Updating Pointer Content
	cout<<"p1 now is:"<<p1<<"\n";
	cout<<"Value at p1 now is:"<<*p1<<"\n";
	*/

	/*
	*p1++;
	cout<<"p1 now is:"<<p1<<"\n";
	cout<<"Value at p1 now is:"<<*p1<<"\n";
	*/

	(*p1)++;
	cout<<"p1 now is:"<<p1<<"\n";
	cout<<"Value at p1 now is:"<<*p1<<"\n";
	cout<<"a now is:"<<a<<"\n";

	return 0;
}
