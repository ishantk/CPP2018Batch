#include<iostream>
#include<string>
using namespace std;

class Parent{

public:

	void purchaseBike(){
		cout<<"Lets Buy Bajaj Pulsar\n";
	}

};

class Child : public Parent{

public:
	// OVERRIDING
	void purchaseBike(){
		cout<<"Lets Buy Royal Enfield\n";
	}
};

int main(int argc, char const *argv[]){
	
	Child ch;
	ch.purchaseBike();

	return 0;
}