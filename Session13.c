#include<stdio.h>

struct Student{

	int roll;
	//char name[50];
	char* name;
	int std;

}s2;

union Employee{
	int eid;
	char *name;
	int salary;
}emp;

enum DAYS{Sunday, Monday, Tuesday};

int main(){
	
	/*
	struct Student s1={101,"John",5};
	printf("%d belongs to %s\n",s1.roll,s1.name);

	s2.roll = 201;
	s2.name = "Jennie";
	s2.std = 7;

	printf("%d belongs to %s\n",s2.roll,s2.name);
	*/

	//union Employee e1 = {101, "John", 50000};
	//printf("%d belongs to %s and earns %d\n", e1.eid, e1.name, e1.salary);

	//printf("%d\n",sizeof(emp));
	// emp.name = "John";
	emp.eid = 101;
	//printf("%s\n", emp.name);

	printf("%d\n", emp.eid);

	return 0;
}