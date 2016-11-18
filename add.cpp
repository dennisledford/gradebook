#include"header.h"
void addstudent(SortedType& studentlist)
{
	student person;
	bool found;
	person.getinfo();
	studentlist.RetrieveItem(person, found);
	if(!found)
	{
		studentlist.InsertItem(person);
	}
	else
		cout<<"Student already entered"<<endl;
}
