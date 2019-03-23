#include<iostream>				
#include<fstream>
#include<string>

using namespace std;

int main()
{

	
	//fstream out("YourStudents.txt", ios::out | ios::app);
	
	fstream out;
	out.open("YourStudents.txt", ios::out | ios::app);

	out<<"1, Mike, 20\n";
	out<<"2, Leo, 22\n";
	out<<"3, George, 25\n";

	out.close(); // Releasing Memory

	cout<<"Data Written in File\n";
	

	/*
	fstream in("YourStudents.txt", ios::in);
	string line;
	if(in.is_open()){

		// getline function will return false if we have no other line to read in file
		while(getline(in, line)){
			cout<<line<<"\n";
		}

	}else{
		cout<<"Sorry !! No Such File !!";
	}

	in.close();

	*/

	//fstream in("YourStudents.txt", ios::in | ios::out);
	/*
		
		// To Perform IO Operation as text
		ios::out -> to write the data in file
		ios::in  -> to read the data from file
		ios::app -> append the data


		// To perform IO Operation as binary
		ios::binary
		image/audio/video

		ios::ate -> at the end | Write Operation shall start from end of file
		

		ios::trunc -> Truncate the data | Any content that exists in file before it is open are discarded

	*/	

	return 0;
}