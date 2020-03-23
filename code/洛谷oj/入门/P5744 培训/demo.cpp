#include <iostream>
#include <string>
using namespace std;
struct E {
	string name;
	int age;
	int grade;
	
	void nextYear(){
		age++;
		if(grade * 120 / 100 <= 600)	grade = grade * 120 / 100;
		else grade = 600;
	}
	
	void show(){
		cout << name << " " << age << " " << grade << endl;
	}
}A;

int main(){
	int n;
	cin >> n;
	while(n--){
		cin >> A.name >> A.age >> A.grade;
		A.nextYear();
		A.show();
	}
	return 0;
}
