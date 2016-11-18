#include"header.h"
void changegrade(SortedType& studentlist)
{
	student person;
	person.getnameuser();
	studentlist.RetrieveItem(person);
	person.change();
	studentlist.Update(person);
}
