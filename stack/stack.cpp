#include "stack.h"

Stack::Stack() {}

Stack::Stack(DataType* arr, int size) : list(arr, size) { }

void Stack::StackPush(const DataType& val)
{
	list.InsertToTail(val);
}

DataType& Stack::StackGet()
{
	return(list.Deletelast());
}

void Stack::StackSee() 
{
	list.seeLast();
}

void Stack::StackClean()
{
	list.Clean();
}

bool Stack::StackEmpty()
{
	return list.isEmpty(); 
}

int Stack::StackNum()
{
	return list.GetSize();
}