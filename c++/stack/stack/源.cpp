#include "stack.h"
#include<iostream>
Stack::Stack()
{
	top = 0;
}

bool Stack::isempty() const
{
	return top == 0;
}

bool Stack::isfull() const
{
	return top == MAX;
}

bool Stack::push(const Item & item)
{
	if (top < MAX)
	{
		items[top++] = item;
		return true;
	}
	else
		return false;
}

bool Stack::pop(Item &item)
{
	if (top > 0)
	{
		item = items[--top];
		return true;
	}
	else
		return false;
}

bool Stack::Cul()
{
	std::cout << top << "\n";
	std::cout << items[0];
	std::cout << items[1];
	return 0;
}
