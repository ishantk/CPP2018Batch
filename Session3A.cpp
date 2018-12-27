#include<iostream>
using namespace std;

int main(){

	int num = 0;
	int i = 111;

	cout<<"Enter a Number:";
	cin>>num;

	/*cout<<num<<" "<<i<<"'s are "<<(num*i)<<"\n";
	i++;
	cout<<num<<" "<<i<<"'s are "<<(num*i)<<"\n";
	i++;
	cout<<num<<" "<<i<<"'s are "<<(num*i)<<"\n";
	i++;
	cout<<num<<" "<<i<<"'s are "<<(num*i)<<"\n";
	i++;
	cout<<num<<" "<<i<<"'s are "<<(num*i)<<"\n";*/

	// in while loop, we check condition in beginning !!
	while(i<=10){
		cout<<num<<" "<<i<<"'s are "<<(num*i)<<"\n";
		i++;
	}

	cout<<"Enter Number Again:";
	cin>>num;

	i = 111;

	do{
		cout<<num<<" "<<i<<"'s are "<<(num*i)<<"\n";
		i++;
	}while(i<=10); // in do while loop, we check condition in end !!

	cout<<"Enter Number Again:";
	cin>>num;
	for(i=1;i<=10;i++){
		cout<<num<<" "<<i<<"'s are "<<(num*i)<<"\n";
	}

	return 0;
}