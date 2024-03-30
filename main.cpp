

#include <iostream>
#include "ToDoList.h"
int main()
{
	ToDoList list;
	bool leave = 0;
	int choice;
	cout << "Welcome to ToDoList" << endl
		 << "1. Add tasks to ToDoList" << endl
		 << "2. View your current ToDoList" << endl
		 << "3. Mark tasks as done" << endl
		 << "4. End Program" << endl;
	cin >> choice;
	cout << endl << endl;
	if (choice <=0 || choice>=5)
	{
		
		while (choice<1 || choice>4)
		{
			cout << "you did not enter a valid choice" << endl<<endl;
			cout << "Welcome to ToDoList" << endl
				<< "1. Add tasks to ToDoList" << endl
				<< "2. View your current ToDoList" << endl
				<< "3. Mark tasks as done" << endl
				<< "4. End Program" << endl;
			cin >> choice;
			cout << endl << endl;
		}
	}
	while (leave == 0)
	{
		//cout << "her";
		switch (choice)
		{
			//cout << "SDF";
			case 1:	//add tasks
			{
				cout << "enter the task name " << endl;
				string tkname;
				std::getline(std::cin >> std::ws, tkname);
				//cin >> tkname;
				list.addTask(tkname);
				break;
			}
			case 2:	//print current tasks list
			{
				list.printtasks();
				break;
			}
			case 3:	//mark tasks as done
			{
				cout << "enter the task you want to mark as done: ";
				string tkname;
				std::getline(std::cin >> std::ws, tkname);
				list.markedTask(tkname);
				break;
			}
			case 4:
			{
				leave = 1;
				break;
			}
			

		}
		if (leave != 1)
		{
			char ans;
			cout << "do you wish to continue(y/Y or n/N): ";
			cin >> ans;
			cout << endl << endl;
			if (ans == 'y' || ans == 'Y')
			{
				cout << "1. Add tasks to ToDoList" << endl
					<< "2. View your current ToDoList" << endl
					<< "3. Mark tasks as done" << endl
					<< "4. End Program" << endl;
				cin >> choice;
			}
			else
				break;
		}

	}




}
