



#include<iostream>
#include"ItemType.h"
#include<string>
#include<iomanip>
#include<fstream>
#include"Sorted.h"
using namespace std;
class student
{
private:              //private data memembers
	int ID;
	string last_name;
	string first_name;
	float prog_grade[6];
	float test_grade[4];
	float exam_grade;
	float final;
public:              //public memember functions
	void read_file;
	//moves info from file to list
	void write_file;
	//moves info from list to file
	void getinfo;
	//gets name and info from user
	void getnameuser;
	//gets name from user
	void output_name;
	//displays name
	void output_info;
	//displays info;
	void change;
	//change grade for indicated student
	void calculate;
	//calculates final grade
};
void student::read_file(ifstream& file)
{
	last_name.GetStringFile(true, NOT_NEW, file);
	first_name.GetStringFile(true, NOT_NEW, file);
	for(int i=0;i<6;i++)
		prog_grade[i].GetStringFile(true, NOT_NEW, file);
	for(int i=0;i<4;i++)
		test_grade[i].GetStringFile(true, NOT_NEW, file);
	file>>ID>>exam_grade>>final;
}
void student::write_file(ofstream file) const
{
	last_name.PrintToFile(false, file);
	first_name.PrintToFile(false, file);
	for(int i=0;i<6;i++)
		prog_grade[i].PrintToFile(false, file);
	for(int i=0;i<4;i++)
		test_grade[i].PrintToFile(false, file);
	file>>endl>>ID>>endl>>exam_grade>>endl>>final>>endl;
}
void student::getnameuser()
{
	cout<<"Enter Last name; press return."<<endl;
	last_name.GetString(true, NOT_NEW);
	cout<<"Enter first name; press enter."<<endl;
	first_name.GetString(true, NOT_NEW);
}
void student::getinfo()
{
	cout<<"Enter Last name; press return."<<endl;
	last_name.GetString(true, NOT_NEW);
	cout<<"Enter first name; press enter."<<endl;
	first_name.GetString(true, NOT_NEW);
	cout<<"Enter student ID; press enter."<<endl;
	cin>>ID;

}
void student::output_name() const
{
	first_name.PrintToScreen(false);
	cout<<" ";
	last_name.PrintToScreen(false);
	cout<<endl;
}
void student::output_info() const
{
	first_name.PrintToScreen(false);
	cout<<" ";
	last_name.PrintToScreen(false);
	cout<<endl;
	cout<<endl<<"Student ID"<<ID<<endl;
	cout<<"Assignment Grades";
	for(int i=0; i<6;i++)
		cout<<prog_grade[i]<<endl;
	cout<<"Test Grades";
	for(int i=0; i<4;i++)
		cout<<test_grade[i];<<endl;
	cout<<"Exam Grade"<<exam_grade<<endl;
	cout<<"Final Grade"<<final<<endl;
}
void student::calculate()
{
	float n= 0.0, k=0.0;
	float assign_total, test_total, exam_total, final;
	for(int i=0; i<6;i++)
		n= n + prog_grade[i];
	assign_total=n/assign_num;
	assign_total= assign_total*assign_weight;
	for(i=0; i<4; i++)
		k= k + test_grade[i];
	test_total=k/test_num;
	test_total= test_total*test_weight;
	exam_total= exam_grade*final_weight;
	final=exam_total+test_total+assign_total;
}
void student::change()
{
	int ID, grade_choice;
	float new_grade;
	cout<<"Please enter Student number"<<endl;
	cin>>ID;
	cout<<"Please enter New Grade"<<endl;
	cin>>new_grade;
	cout<<"Please enter number of which type of grade you want to change"<<endl;
	cout<<"1.) Assignment"<<endl;
	cout<<"2.) Test"<<endl;
	cout<<"3.) Final"<<endl;
	cin>>grade_choice;
	if(grade_choice==1)
	{
		cout<<"Enter which number of assignment you would like to change"<<endl;
		cin>>grade_num;
		prog_grade[grade_num+1]=new_grade;
		cout<<"Grade Changed"<<endl<<"Thank You"<<endl;
	}
	if(grade_choice==2)
	{
		cout<<"Enter which number of test you would like to change"<<endl;
		cin>>grade_num;
		test_grade[grade_num+1]=new_grade;
		cout<<"Grade Changed"<<endl<<"Thank You"<<endl;
	}
	if(grade_choice==3)
	{
		exam_grade=new_grade;
		cout<<"Grade Changed"<<endl<<"Thank You"<<endl;
	}
	
}

