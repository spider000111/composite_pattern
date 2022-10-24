// composite_pattern.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "ITodoList.h"
#include "Project.h"
#include "Todo.h"

int main()
{
    Todo first_todo("first todo");
    Todo second_todo("second todo");
    Todo third_todo("third todo");
    Todo fourth_todo("fourth todo");

    std::vector<ITodoList*> todo_list = {&first_todo,&second_todo,&third_todo};

    Project first_project("first project name", todo_list);

    std::vector<ITodoList*> todo_list2 = { &fourth_todo, &first_project};

    Project second_project("second project name", todo_list2);

    
    std::cout << second_project.getHTML() << std::endl;
    
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
