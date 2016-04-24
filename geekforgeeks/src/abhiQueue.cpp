///*
// * abhiQueue.cpp
// *
// *  Created on: Apr 23, 2016
// *      Author: Abhishek
// */
//
//
////rounded array queue with max size
//#include "abhiQueue.h"
//#include <iostream>
//
//template <typename T>
//abhiQueue<T>::abhiQueue()
//{
//	rear = 0;
//	front = 0;
//}
//
//template <typename T>
//bool abhiQueue<T>::enQueue(T &elem)
//{
//	if ((rear - front) == MAX_SIZE)
//		return false;
//	array[rear % MAX_SIZE] = elem;
//	rear ++;
//	return true;
//}
//
//template <typename T>
//bool abhiQueue<T>::deQueue(T &elem)
//{
//	if (rear == front)
//		return false;
//
//	elem = array[front % MAX_SIZE];
//	front ++;
//	return true;
//}
//
//template <typename T>
//bool abhiQueue<T>::isEmpty()
//{
//	return ( rear == front ? true : false);
//}
//
//
//
