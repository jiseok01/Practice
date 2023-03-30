#include <iostream>
using namespace std;
class Student {
	public:
		int number = 0;
		string name;
		double grade = 0;
};
int main(){
	Student s;
	s.number = 1853330, s.name = "°íÈå", s.grade = 3.7;
	Student *p;
	p = &s;
	cout<< s.number<< s.name << s.grade<< endl;
	
	cout<< (*p).number << (*p).name << (*p).grade << endl;
	
	cout<< p->number << p->name << p->grade << endl;
}