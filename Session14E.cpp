#include<iostream>
#include<string>
using namespace std;

// Nested and Local Classes
class Outer{

public:

	class Inner{

		public:
			void show(){
				cout<<"This is show of Inner\n";
			}
	};

	Inner i;

	void show(){
		i.show(); // Nesting of Functions
		cout<<"This is show of Outer\n";
	}

};


int main(){
	
	Outer obj;
	obj.show();

	//Outer::Inner iObj;
	//iObj.show();

	return 0;
}