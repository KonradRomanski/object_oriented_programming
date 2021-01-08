#include "Stack.hpp"
#include "StackFullException.hpp"
#include "StackEmptyException.hpp"

Stack::Stack()
{
	dfs.clear();
	top = 0;
	maxStackSize = 10;
}

Stack::Stack(int max)
{
	dfs.clear();
	top = 0;
	maxStackSize = max;
}

void Stack::push(int newItem)
{
	if (dfs.size() < maxStackSize)
		dfs.push_back(newItem);
	else
		throw new StackFullException("Stack overloaded!", newItem, maxStackSize);
}

int Stack::pop()
{
	if (dfs.size() != 0)
	{
		int last = dfs[dfs.size() - 1];
		dfs.pop_back();
		return last;
	}
	else
		throw new StackEmptyException("Stack is empty!");
}