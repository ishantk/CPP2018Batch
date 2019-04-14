// Templates in General

#include<iostream>				

using namespace std;

// You create a template so that it can accommodate any data type
template <typename T>	// this is syntax to create a template. T can be any name of your choice

// without template we need to create 3 methods to compare int floats and characters like below:
/*int getMax(int a, int v.begin(), v.end()){
	if (a>b){
		return a;
	}else{
		return b;
	}
}
Similarly for float and char...
*/

// But with template we create a single method and different data types can be accommodated

T getMax(T a, T b){
	if (a>b){
		return a;
	}else{
		return b;
	}
}

int main(){

	int iMax = getMax(10, 20);
	float fMax = getMax(2.2, 3.3);
	char cMax = getMax('A','Z');

	cout<<"iMax: "<<iMax<<"\n";
	cout<<"fMax: "<<fMax<<"\n";
	cout<<"cMax: "<<cMax<<"\n";

	return 0;

}