#pragma once
#include "ITodoList.h"
#include <vector>
class Project : public ITodoList
{
	const std::string title;
	const std::vector<ITodoList *> my_todo_list_pointer;

public:
	Project(std::string me_title, std::vector<ITodoList*> myTodoListPointer):
		title(me_title),my_todo_list_pointer(myTodoListPointer) {}

	std::string getHTML() {
		std::string html = title;
		html += "\n";
		for (auto element : my_todo_list_pointer) {
			html += element->getHTML();
			html += "\n";
		}

		return html;
	}
};

