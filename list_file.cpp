#include "header.h"
void list_file(SortedType& studentlist, ofstream GradeOut)
{
	student person;
	int length;
	GradeOut.open("Grades.dat");
	studentlist.ResestList();
	length=studentlist.LengthIs();
	for(int count=1; count<=length; count++)
	{
		studentlist.GetNextItem(person);
		person.write_file(GradeOut);
	}
	GradeOut.close();
}
