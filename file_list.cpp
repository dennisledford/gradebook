#include"header.h"
void file_list(SortedType& studentlist, ifstream GradeIn)
{
	student person;
	GradeIn.open("Grades.dat")
		studentlist.MakeEmpty();
	person.read_file(GradeIn);
	while (GradeIn)
	{
		studentlist.InsertItem(person);
        person.read_file(GradeIn);
    }
	GradeIn.close();
}
