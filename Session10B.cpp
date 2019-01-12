#include<iostream>
#include<string>
using namespace std;

/*
	Geometry Box 
		Encapsulation -> Leads to Data Hiding
			private

		Abstraction
			Show only the useful details and hide consfidential data

		Inheritance
			Product (Parent)
				Children
				Mobile
				Shoe
				Laptop		

*/

// Object to Object

class Product{

public:

	Product(){
		cout<<"Product Object Constructed\n";
	}

	// Attributes: Property of Object
	int pid;
	string name;
	int price;
	string brandName;

	void showProductDetails(){
		cout<<"******************\n";
		cout<<"=="<<pid<<"\t"<<name<<"==\n";
		cout<<"Price:\t"<<price<<"\n";
		cout<<"Brand:\t"<<brandName<<"\n";
		cout<<"******************\n";
	}

	void setProductDetails(int pid, string name, int price, string brandName){
		//this->pid belongs to Object
		// pid belongs to function/method
		this->pid = pid;
		this->name = name;
		this->price = price;
		this->brandName = brandName;
	}
};

class Mobile : public Product{

public:
	// Attributes: Property of Object
	// int pid;
	// string name;
	// int price;
	// string brandName;
	string os;
	int ram;
	int storage;

	Mobile(){
		cout<<"Mobile Object Constructed\n";
	}

	void setMobileDetails(int pid, string name, int price, string brandName, string os, int ram, int storage){
		//this->pid belongs to Object
		// pid belongs to function/method
		// this->pid = pid;
		// this->name = name;
		// this->price = price;
		// this->brandName = brandName;
		setProductDetails(pid, name, price, brandName);
		this->os = os;
		this->ram = ram;
		this->storage = storage;
	}

	void showMobileDetails(){
		// cout<<"=="<<pid<<"\t"<<name<<"==\n";
		// cout<<"Price:\t"<<price<<"\n";
		// cout<<"Brand:\t"<<brandName<<"\n";
		showProductDetails();
		cout<<"OS:\t"<<os<<"\n";
		cout<<"RAM:\t"<<ram<<"\n";
		cout<<"Storage:\t"<<storage<<"\n";
	}
};

class Shoe : public Product{

public:
	// Attributes: Property of Object
	// int pid;
	// string name;
	// int price;
	// string brandName;
	int size;
	string color;


	Shoe(){
		cout<<"Shoe Object Constructed\n";
	}

	void setShoeDetails(int pid, string name, int price, string brandName, int size, string color){
		//this->pid belongs to Object
		// pid belongs to function/method
		// this->pid = pid;
		// this->name = name;
		// this->price = price;
		// this->brandName = brandName;
		setProductDetails(pid, name, price, brandName);
		this->size = size;
		this->color = color;
	}

	void showShoeDetails(){
		// cout<<"=="<<pid<<"\t"<<name<<"==\n";
		// cout<<"Price:\t"<<price<<"\n";
		// cout<<"Brand:\t"<<brandName<<"\n";
		showProductDetails();
		cout<<"Size:\t"<<size<<"\n";
		cout<<"Color:\t"<<color<<"\n";
	}
};				

int main(int argc, char const *argv[]){
	
	// Static Object Construction
	// Where Object is constructed in Stack
	//Mobile m1;

	// Dynamic Object Construction
	Mobile* mptr = new Mobile();

	//m1.setMobileDetails(101, "iPhoneX", 70000, "Apple", "iOS", 4, 128);
	//m1.showMobileDetails();

	mptr->setMobileDetails(101, "iPhoneX", 70000, "Apple", "iOS", 4, 128);
	mptr->showMobileDetails();

	Shoe *sptr = new Shoe();
	sptr->setShoeDetails(201, "AlphaBounce", 5000, "Adidas", 7, "black");
	sptr->showShoeDetails();	
	return 0;
}