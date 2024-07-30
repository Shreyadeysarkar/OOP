#include<iostream>
#include<string>
using namespace std;
class Teacher{
	private:
		double salary;// data hiding
		double salar;
	public:
		//non parameterized
		Teacher(){
			cout<<"hi !!,I am comstructor"<<endl;
			 //function call constructor
			 dept = "Computer science";
		}
		// parameterized
		Teacher(string a,string b,string c,double sal){
		 this->nam = a; //left e jeta object er name, right e jata -> function er para meter
			dep = b;
			subjec = c;
			salar = sal;
			 
		}
		string name;
		string dept;
		string subject;
		string nam;
		string dep;
		string subjec;
	
		//setter
		void setSalary(double s){
			salary = s;
		}
		//getter 
		double getSalary(){
			return salary;
		}
		void getInfo(){
			cout<<"name"<<nam<<endl;
			cout<<"subject"<<subjec<<endl;
		}
};
int main(){
	Teacher t1; //constructor call
	t1.name = "shreya";
	t1.subject ="c++";

	t1.setSalary(250000);
	cout<<t1.name<<endl;
	cout<<t1.subject<<endl;
	cout<<t1.dept<<endl; //constructor //automtically call
	cout<<t1.getSalary()<<endl;

	Teacher t2("diya","agri","horti",24000);
	t2.getInfo();
	Teacher t3(t2);// default copy constructor
	t3.getInfo();
	return 0;
}
