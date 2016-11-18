#include "header.h"
void main()
{
	ifstream GradeIn;
	ofstream GradeOut;
	CommandType command;
	SortedType studentlist;

	read_file(studentlist, GradeIn);
	GetCommand(command);
	while (command != QUIT)
	{
		switch(command)
        {
		case new_semester           :newsemester(studentlist);
			                        break;
		case add_student            :addstudent(studentlist);
			                        break;
        case record_assignnent     :recordassign(studentlist);
			                        break;
		case record_test            :recordtest(studentlist);
			                        break;
        case record_final           :recordfinal(studentlist);
			                        break;
		case change_grade           :changegrade(studentlist);
			                        break;
        case calculate_final        :total(studentlist);
			                        break;
		case output_data            :output(studentlist);
			                        break;
		}
		GetCommand(command);
	}
	write_file(studentlist, GradeOut);
}