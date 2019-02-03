#include<iostream>
#include<string>
using namespace std;

// Basic Copy Operation
class Order{

	int oid;
	string customerName;
	int price;

public:

	Order(){
		oid = 0;
		customerName = "NA";
		price = 0;
	}

	void setDataForOrder(int oid, string customerName, int price){
		this->oid = oid;
		this->customerName = customerName;
		this->price = price;
	}

	void showDataForOrder(){
		cout<<"==="<<oid<<"===\n";
		cout<<"Customer:\t"<<customerName<<"\n";
		cout<<"Price:\t"<<price<<"\n";
	}

};

int main(){

	// Copying Object
	// Copy of Object is happening automatically for us !!
	Order o1;
	o1.setDataForOrder(101,"John",3000);
	
	Order o2 = o1; // Copy Object
	
	Order o3(o1);  // Copy Object

	o1.showDataForOrder();
	o2.showDataForOrder();
	o3.showDataForOrder();

	cout<<"Address of o1 is: "<<&o1<<"\n";
	cout<<"Address of o2 is: "<<&o2<<"\n";
	cout<<"Address of o3 is: "<<&o3<<"\n";

	
	return 0;
}