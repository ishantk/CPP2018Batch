#include<iostream>
using namespace std;

class CA{

};

void fun(int *ptr){
	cout<<"ptr is:"<<ptr<<"\n";
	(*ptr)++;
}

void hello(CA* cPtr){

}

int main(){

	int a = 10;
	cout<<"Address of a is: "<<&a<<"\n";
	fun(&a); // Passing data for Pointer
	cout<<"a is: "<<a<<"\n";

	CA cObj;
	hello(&cObj); // Passing data for Pointer to an Object

	//CA *ptr = new CA();

	return 0;
}