#include<iostream>
#include<string>
using namespace std;

// Textual Representation of an Object !!
class Product {

//private:
	// Attributes: Property of Object
	int pid;
	string name;
	string brandName;
	int price;
	string color;

public:

	// Methods: Property of Object
	
	// Setter Method : which is writing data in object
	void setProductDetails(int p, string n, string b, int pr, string c){

		if(pr >0){
			pid = p;
			name = n;
			brandName = b;
			price = pr;
			color = c;
		}else{
			cout<<"We cannot take a product with no price"<<"\n";
		}
	}

	// Display Method : which is going to show details in object
	void showProductDetails(){
		cout<<"==="<<pid<<" "<<name<<"===\n";
		cout<<"Name\t"<<name<<"\n";
		cout<<"Brand\t"<<brandName<<"\n";
		cout<<"Price\t"<<price<<"\n";
		cout<<"Color\t"<<color<<"\n";
	}

};

int main(int argc, char const *argv[]){
	
	// p1 is an Object which will contain attributes as mentioned in class
	Product p1;
	//p1.name = "iPhoneX";  //error
	// p1 object is executng its method, setProductDetails
	string nm = "";
	cout<<"Enter Product Name: \n";
	cin>>nm;

	p1.setProductDetails(101, nm, "Apple", 80000, "Black");
	p1.showProductDetails();
	return 0;
}