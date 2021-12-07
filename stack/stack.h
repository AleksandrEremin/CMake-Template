#include "queue.h"
#include "list.h"
#include <iostream>
using namespace std;

class Stack
{
private:
	List list;

public:
	Stack();
	Stack(DataType* arr, int size);
	~Stack() {};

	void StackPush(const DataType& val);
	DataType& StackGet();
	void StackSee();
	void  StackClean();
	bool  StackEmpty();
	int  StackNum();
};




