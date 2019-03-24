#include<iostream>				
#include<fstream>

using namespace std;


// Random Access of Data in Files
int main(){
	
	fstream stream;
	stream.open("MyStudents.txt", ios::in | ios::out | ios::app);

	// GetPointer
	// PutPointer
	// Read Positions of Pointers -> tellg and tellp functions

	stream.seekg(5, ios::beg);

	int tgPos = stream.tellg();
	int tpPos = stream.tellp();

	cout<<"GetPointer pos is:"<<tgPos<<"\n";
	cout<<"PutPointer pos is:"<<tpPos<<"\n";

	char data[5];
	stream.read(data, 4);

	cout<<"data is:"<<data<<"\n";


	stream.seekg(0, ios::end);
	int size = stream.tellg();
	cout<<"Size is: "<<size<<"\n";


	stream.seekg(0, ios::beg);
	char buffer[size+1];
	stream.read(buffer, size);
	buffer[size+1] = 0; // null character at the end is termination of string

	cout<<"buffer is:"<<buffer<<"\n";
	return 0;
}