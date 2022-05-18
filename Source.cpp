// Create a structure named - Person to store his name, age and salary //
#include<iostream>
using namespace std;

struct person {
	char name[100];
	int age;
	double salary;
};

int main() {
	person p1;
	cout << "Person details " << endl << "Enter person name: " << endl;
	cin.getline(p1.name, 100);
	cout << "Enter age" << endl;
	cin >> p1.age;
	cout << "Enter salary " << endl;
	cin >> p1.salary;

	cout << endl << "Person details are as follows: " << endl;
	cout << "Person name: " << p1.name << endl;
	cout << "Person age: " << p1.age << endl;
	cout << "Person salary: " << p1.salary << endl;

	return 0;
}