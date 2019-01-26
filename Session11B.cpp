#include<iostream>
#include<string>
using namespace std;

//class CB;

class CA{

	int a, b;

	//friend class CB;

public:

	CA(){
		a = 0;
		b = 0;
	}

	CA(int a, int b){
		this->a = a;
		this->b = b;
	}


	/*void hello(CB obj){
		cout<<"Data from hello: "<<obj.a<<" | "<<obj.b<<endl;
	}*/

};

class CB{

	int x;

public:

	CB(){
		x = 11;
	}

	void show(CA obj){
		cout<<"Data from show: "<<obj.a<<" | "<<obj.b<<endl;
	}

	void fun(CA obj){
		cout<<"Data from fun: "<<obj.a<<" | "<<obj.b<<endl;
	}

	friend class CA;

};

int main(){

	CA ca(10, 20);

	CB cb;
	cb.show(ca);
	cb.fun(ca);

	ca.hello(cb);
	
	return 0;
}