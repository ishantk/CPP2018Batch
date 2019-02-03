#include<iostream>
#include<string>
using namespace std;

void fun(){

	int x = 10;

	// Local Class : Limited Scope i.e. only within function
	class CA{
		public:
			void show(){
				cout<<"This is show of CA\n";
			}	
	};

	CA ca;
	ca.show();

}

int main(){

	fun();
	
	return 0;
}