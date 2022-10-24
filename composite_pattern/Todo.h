#pragma once
#include <string>
#include "ITodoList.h"
class Todo : public ITodoList
{
	const std::string text;
public:

	Todo(std::string tx) : text(tx) {}

	std::string getHTML() {
		return text;
	}
	
};

