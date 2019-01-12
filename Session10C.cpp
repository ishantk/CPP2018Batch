/*
	Genealization:
		Product is Parent
			Mobile and Laptop are Children

		IS-A Relationship	
	
	==Single Level==
	A
	|
	B

	class A{
	
	};

	class B : public A{
	
	};

	==Multi Level==

	A
	|
	B
	|
	C

	class A{
	
	};

	class B : public A{
	
	};

	class C : public B{
	
	};

	==Multple==

	A 	B
	  |
	  C

	class A{
	
	};

	class B{
	
	};

	class C : public A, public B{
	
	};

	==Heirarchy==

	A    
	|
  B   C	

   class A{
	
   };

   class B : public A{
	
   };

   class C : public A{
	
   };

   ==Hybrid==
   A
   |
   B
   |
   C
   |
D	  E 
   |
   F
   |
   G

*/

// private , protected,  public

#include<iostream>
#include<string>
using namespace std;

class CA{

	int a;
	void pvtShow(){
		cout<<"This is private show of CA\n";
	}

protected:

	int b;
	void protShow(){
		cout<<"This is protected show of CA\n";
	}

public:

	int c;
	void pubShow(){
		cout<<"This is public show of CA\n";
	}

};

// Everything will be inherited as such other than private
// Only protected and public will be inherited
// protected will not be accessible outside
class CB : public CA{

public:

	void fun(){
		
		// error
		/*a = 100;	
		cout<<"a is: "<<a<<"\n";
		pvtShow();*/

		b = 100;
		cout<<"b is: "<<b<<"\n";
		protShow();
	}

};

// Everything will be inherited and get converted to protected 
// other than private

// public will also become protected
class CC : protected CA{

};

// Everything will be inherited and get converted to private 
// other than private

// protected and public will become private
class CD : private CA{

};

class X{

};

class Y{

};

class Z : public X, private Y{

};


int main(int argc, char const *argv[]){

	CB cb;

	// Error: Because private is not inherited
	/*cb.a = 100;
	cout<<"cb.a is: "<<cb.a<<"\n";
	cb.pvtShow();*/

	// Error: Because protected is inherited, but not accessible oustide
	/*cb.b = 100;
	cout<<"cb.b is: "<<cb.b<<"\n";
	cb.protShow();*/

	cb.fun();

	cb.c = 100;
	cout<<"cb.c is: "<<cb.c<<"\n";
	cb.pubShow();

	return 0;
}

/*
====================================
		MODE: public	

Parent	private	 protected	public
Child			 protected	public
====================================

====================================
		MODE: protected	

Parent	private	 protected	public
Child			 protected	protected
====================================

====================================
		MODE: private	

Parent	private	 protected	public
Child			 private	private
====================================

*/

