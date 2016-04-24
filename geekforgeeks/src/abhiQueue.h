/*
 * abhiQueue.h
 *
 *  Created on: Apr 23, 2016
 *      Author: Abhishek
 */

#ifndef ABHIQUEUE_H_
#define ABHIQUEUE_H_
#define MAX_SIZE 50
template <typename T>
class abhiQueue
{
	int rear;
	int front;
	T array [MAX_SIZE];

public:
	abhiQueue()
	{
		rear = 0;
		front = 0;
	}

	bool enQueue(T &elem)
	{
		if ((rear - front) >= MAX_SIZE)
			return false;
		array[rear % MAX_SIZE] = elem;
		rear ++;
		return true;
	}

	bool deQueue(T &elem)
	{
		if (rear == front)
			return false;

		elem = array[front % MAX_SIZE];
		front ++;
		return true;
	}

	bool isEmpty()
	{
		return ( rear == front ? true : false);
	}

	int size()
	{
	   return (rear - front);
	}


};


#endif /* ABHIQUEUE_H_ */
