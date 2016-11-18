#include"header.h"
void newsemester(SortedType& studentlist)
{
	int=assign_num;
	int=test_num;
	float=assign_weight;
	float=test_weight;
	float=final_weight;
	cout<<"How many Assignments are you going to have this semester?"<<endl;
	cin>>assign_num;
    cout<<"How many Tests are you going to have this semester?"<<endl;
	cin>>test_num;
	cout<<"Please enter weight of total Assignments in decimal form"<<endl;
	cin>>assign_weight;
	cout<<"Please enter weight of total tests in decimal form"<<endl;
	cin>>test_weight;
	cout<<"Please enter weight of Final in decimal form"<<endl;
	cin>>final_weight;
	studentlist.MakeEmpty();
}
