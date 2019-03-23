#include<iostream>				
#include<fstream>
#include<string>

using namespace std;

int main()
{
	string line;
	ifstream in("MyStudents.txt");
	if(in.is_open()){

		// getline function will return false if we have no other line to read in file
		while(getline(in, line)){
			cout<<line<<"\n";
		}

	}else{
		cout<<"Sorry !! No Such File !!";
	}

	in.close();

	return 0;
}