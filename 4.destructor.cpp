
#include<iostream>
#include<string>
using namespace std;
class Student{
	public:
		string name;
		double* cgpaPtr;
		Student(string name,double cgpa){
			this->name = name;
			cgpaPtr = new double;
			*cgpaPtr = cgpa;
		}
		//destructor
		~Student(){
			cout<<"I delete everything\n";
			delete cgpaPtr;//memory delete
		}
		void getInfo(){
			cout<<"name:"<< name<< endl;
			cout<<"cgpa:"<< *cgpaPtr<< endl;
		}
};
int main(){
	
	Student s1("shreya",7.78);
	s1.getInfo();
	Student s2(s1);
	*(s2.cgpaPtr) = 8.9;
	s2.getInfo();
	
	return 0;
}
