#pragma once
#include "stdio.h"
#include "stdlib.h"
#include "assert.h"
#include "stdbool.h"

typedef int QDataType;
typedef struct QueueNode//定义队列的节点
{
	struct QueueNode* next;
	QDataType data;
}QueueNode;

typedef struct Queue//定义队列
{
	QueueNode* head;
	QueueNode* tail;
}Queue;

void QueueInit(Queue* pq);

void QueueDestroy(Queue* pq);
void QueuePush(Queue* pq, QDataType x);
void QueuePop(Queue* pq, QDataType x);
QDataType QueueFront(Queue* pq);
QDataType QueueBack(Queue* pq);
int QueueSize(Queue* pq);
bool QueueEmpty(Queue* pq);



