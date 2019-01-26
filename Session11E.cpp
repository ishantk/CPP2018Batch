#include<iostream>
#include<string>
using namespace std;

class Point{
	
	int x, y;

public:

	/*Point(){
		x = 0;
		y = 0;
	}*/

	// Initialization List
	Point():x(0), y(0){

	}

	/*Point(int a, int b){
		x = a;
		y = b;
	}*/

	Point(int a, int b):x(a), y(b){
		
	}

	void showPoint(){
		cout<<"Point is: "<<x<<" : "<<y<<endl;
	}
					// Passing Object as Reference
	Point operator+(Point &p){
		Point obj;
		obj.x = x + p.x;	
		obj.y = y + p.y;
		return obj;
	}

};

/*Point operator+(int a){

}*/


int main(){

	int x = 10;
	int &y = x; // Reference Copy

	Point p1(10, 20);
	Point p2(30, 40);
	Point p3;

	p1.showPoint();
	p2.showPoint();

	//p3 = p1.operator+(p2);
	p3 = p1 + p2; //p1 + p2 -> p1.operator+(p2);
	p3.showPoint();

	//p3 = p1 + 10; // -> p3 = p1.operator+(10);
	//p3 = 10 + p2; // -> p3 = 10.operator+(p2)
	
	return 0;
}