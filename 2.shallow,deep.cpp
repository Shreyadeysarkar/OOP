#include<iostream>
#include<string>
using namespace std;
class Student{
	public:
		string name;
		double cgpa;
		Student(string name,double cgpa){
			this->name = name;
			this->cgpa = cgpa;
		}
		void getInfo(){
			cout<<"name:"<< name<< endl;
			cout<<"cgpa:"<< cgpa<< endl;
		}
};
int main(){
	
	Student s1("shreya",7.78);
	s1.getInfo();
	Student s2(s1);
	s2.getInfo();
	
	return 0;
}
