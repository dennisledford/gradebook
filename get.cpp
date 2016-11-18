#include"header.h"
void GetCommand(CommandType& command)
{
	char letter;
	cout<<"Operations are listed below.";
	cout<<"Enter the appropriate uppercase letter and press return"<<endl;
	cout<<"S: Set up for new semester."<<Endl;
	cout<<"A: Add new student."<<endl;
	cout<<"P: Record programming assignment for all students."<<endl;
	cout<<"T: Record test grade for all students."<<endl;
	cout<<"F: Record final exam grade for all students."<<endl;
	cout<<"C: Change grade for specific student."<<endl;
	cout<<"G: Calculate total grade for all students."<<endl;
	cout<<"O: Output Grade."<<endl;
	cout<<"Q; Quit."<<endl;
	cin>>letter;
	letter=toupper(letter);
	bool ok= false;
	while(!ok)
	{
		ok=true;
		switch(letter)
		{
		case 'S': command = new_semester;
			break;
		case 'A' : command = add_student;
			break;
		case 'P': command = record_assign;
			break;
		case 'T' : command = recorc_test;
			break;
		case 'F': command = record_final;
			break;
		case 'C' : command = change_grade;
			break;
		case 'G': command = calculate_final;
			break;
		case 'O' : command = output_data;
			break;
		case 'Q': command = quit;
			break;
		default : cout<<"Letter entered is not one of the specified choices"<<endl;
			break;
		}
	}
}

	
			
