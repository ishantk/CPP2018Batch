#include<iostream>
#include<string>
using namespace std;

// Shallow Copy Operation

class Order{

	int* oid;
	string customerName;
	int price;

public:


	void setDataForOrder(int oid, string customerName, int price){
		// Dynamic Memory Allocation
		this->oid = new int(oid);
		this->customerName = customerName;
		this->price = price;
	}

	void showDataForOrder(){
		cout<<"==="<<*oid<<"===\n";
		cout<<"oid contains: "<<oid<<"\n";
		cout<<"Customer:\t"<<customerName<<"\n";
		cout<<"Price:\t"<<price<<"\n";
	}

};

int main(){

	// Copying Object
	// Copy of Object is happening automatically for us !!
	Order o1;
	o1.setDataForOrder(101,"John",3000);
	o1.showDataForOrder();
	

	Order o2 = o1; // Copy Object
	
	// A Copy Constructor is created automatically by compiler
	// Which performs Shallow Copy Operation
	Order o3(o1);  // Copy Object

	o1.showDataForOrder();
	o2.showDataForOrder();
	o3.showDataForOrder();

	cout<<"Address of o1 is: "<<&o1<<"\n";
	cout<<"Address of o2 is: "<<&o2<<"\n";
	cout<<"Address of o3 is: "<<&o3<<"\n";

	
	return 0;
}