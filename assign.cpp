#include"header.h"
void recordassign(SortedType& studentlist)
{
	student person;
	int length;
	person.ResetList();
	length=studentlist.LengthIs();
	for(int count=1; count<=length; count++)
	{
		person.output_name();
		person.change();
		studentlist.Update(person);
		studentlist.GetNextItem();
	}
}