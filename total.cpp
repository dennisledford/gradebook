#include"header.h"
void total(SortedType& studentlist)
{
	student person;
	int length;
	person.ResetList();
	length=studentlist.LengthIs();
	for(int count=1; count<=length; count++)
	{
		person.output_name();
		person.calculate();
		studentlist.Update(person);
		studentlist.GetNextItem();
	}
}