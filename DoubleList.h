#pragma once

#include "Node.h"


class DoubleList
{
	Node* Head;
	Node* Tail;
	int number; // колво элемента

public:
	DoubleList() : Head(nullptr), Tail(nullptr), number(0) {};// конструктор по умолчанию
	DoubleList(int Value) : Head(nullptr), Tail(nullptr), number(Value) {}; // конструткор с параметром
	explicit DoubleList(const DoubleList &init); // конструктор копирования 

	// методы установки и получения значений private-членов класса

	~DoubleList();

	int getnumber();
	void setnumber(int Value);
	Node* getHead();
	Node* getTail();


	void print(); // вывод на экран списка
	void create(int Value); // метод создания списка с рандомными значениями. value - длинна генирируемого числа 

	// перегрузки 

	bool operator == (const DoubleList &op2); // результат FALSE если хоть одно не совпадает 
	bool operator != (const DoubleList &op2); // рузУльтат TRUE если хоть один не совпадает  

	// перегрузки дружественными функциями

	friend bool operator > (const DoubleList &op1, const DoubleList &op2); // в каком списке больше TRUE тот и больше 
	friend bool operator < (const DoubleList &op1, const DoubleList &op2); // в каком списке больше FALSE тот и меньше 

	DoubleList* operator()(int number); // возваращает указатель на подсписок
};	
