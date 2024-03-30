#pragma once


#include <iostream>
#include <string>
#include <queue>
using namespace std;

struct TaskNode
{
	string name;
	bool done;
	TaskNode(string t, bool d)
	{
		name = t;
		done = d;
	}
};
class ToDoList
{
	queue<TaskNode> tasks;
	int countTasks;

public:
	ToDoList()
	{
		
	}
	ToDoList(string t)
	{
		countTasks++;
		TaskNode node(t, 0);
		tasks.push(node);
	}
	void printtasks()
	{
		if (tasks.size() != 0)
		{
			cout << "--Tasks left to do--"<<endl;
			queue<TaskNode> temp_tasks;
			int i = 1;
			while (tasks.empty() != 1)
			{
				cout << "Task " <<i<<" : " << tasks.front().name << endl;
				temp_tasks.push(tasks.front());
				tasks.pop();
				i++;
			}
			tasks = temp_tasks;
		}
	}
	void addTask(std::string t)
	{
		countTasks++;
		TaskNode node(t, 0);
		tasks.push(node);

	}
	void markedTask(std::string t)
	{
		if (tasks.empty() == 1)
		{
			cout << "no tasks there to mark as done" << endl;
		}
		else
		{
			queue<TaskNode> temp_task;
			while (tasks.size() != 0)
			{
				
				if (tasks.front().name == t)
				{
					tasks.front().done = 1;
					//temp_task.push(tasks.front());
					tasks.pop();
				}
				else
				{
					temp_task. push(tasks.front());
					tasks.pop();
				}
			}
			tasks = temp_task;
		}
	}


	 


};

