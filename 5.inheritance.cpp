#include<iostream>
#include<string>
using namespace std;
class Person{
	public:
		string name;
		int age;
	//	Person(string name,int age){
	//		this->name = name;
	//		this->age = age;
	//	}
	Person(){
	cout<<"parent constructor\n"	;
	}
};
class Student: public Person{
	public:
		int rollno;
		Student(){
		
		cout<<"child constrctor\n";
	}
		void getInfo(){
			cout<<"name:"<<name<<endl;
			cout<<"age:"<<age<<endl;
			cout<<"roll no:"<<rollno<<endl;
		
		}
};
int main(){
	Student s1;
	s1.name = "shreya";
	s1.age = 21;
	s1.rollno = 28;
	s1.getInfo();
	return 0;
}

