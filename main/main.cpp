#include <stdio.h>
#include "queue.h"
#include "PointLib.h"
#include "stack.h"

void main() {
	setlocale(LC_ALL, "Russian");
  //printf("\nCreate 2 queues: 1. empty, 2. queue of 10 elements:\n");
  //int arr[10] = { 1, 5, 3, 8, 4, 0, 2, 6, 7, 5 };
  //QueueOnList q1, q2(arr, 10);

  //q1.print();
  //q2.print();

  //printf("\nPush 11 and -7 to queue 1:\n");
  //q1.push(11);
  //q1.push(-7);

  //q1.print();

  //printf("\nPop 3 elements from queue 2:\n");
  //for (int i = 0; i < 4; i++) {
  //  q2.pop();
  //  q2.print();
  //}

  //printf("\nPop all elements from queue 1:\n");
  //for (int i = 0; i < 3; i++) {
  //  q1.pop();
  //  q1.print();


	int arr[10] = {2, 5, -4 };
	Stack stack(arr, 3);
	
	int d = stack.StackGet();
	cout << endl << "--> " << d << endl;//-4

	stack.StackSee();                   //5
	
	d = stack.StackNum();
	cout << endl << "--> " << d << endl;//2

	d = stack.StackGet();
	cout << endl << "--> " << d << endl;//5

	stack.StackSee();                   //2

	d = stack.StackGet();
	cout << endl << "--> " << d << endl;//2

	//stack.StackSee();//error

	//d = stack.StackGet();
	//cout << endl << "--> " << d << endl; //error
	d = 56;
	stack.StackPush(d);
	stack.StackSee();


  }





