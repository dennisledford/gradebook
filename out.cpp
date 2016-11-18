#include"header.h"
void output(SortedType& studentlist)
{
	student person;
	int length;
	GradeOut.open("Grades.out");
	person.ResetList();
	length=studentlist.LengthIs();
	for(int count=1; count<=length; count++)
	{
		person.output_info(GradeOut);
		studentlist.GetNextItem(person);
	}
	GradeOut.close();
}