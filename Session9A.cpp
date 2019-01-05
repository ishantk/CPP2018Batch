#include<iostream>
using namespace std;

class Counter{

	int count;
	static int sCount;

public:

	Counter(){
		count = 1;
		sCount = 1;
	}

	Counter(int c){
		count = c;
		sCount = c;
	}

	void incrementCount(){
		count++;
		sCount++;
	}

	void showCount(){
		cout<<"count is: "<<count<<" and sCount is: "<<sCount<<"\n";
	}

	~Counter(){
		count = 0;
		cout<<"==Object Destroyed==\n";
	}

};

// Declare varibale outside if they are static
int Counter::sCount;

int main(int argc, char const *argv[]){
	
	Counter *c1 = new Counter();
	Counter* c2 = new Counter(2);
	Counter *c3 = c1; // Reference Copy

	c1->incrementCount();
	c2->incrementCount();
	c3->incrementCount();

	c2->incrementCount();

	c1->showCount();	// count is: 3 and sCount is: 6 
	c2->showCount();    // count is: 4 and sCount is: 6
	c3->showCount();    // count is: 3 and sCount is: 6

	delete c1;
	delete c2;
	// delete c3; -> error at run time !!

	return 0;
}