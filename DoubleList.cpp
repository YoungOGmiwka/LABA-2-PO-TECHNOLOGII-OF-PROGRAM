#include <iostream>
#include <cstdlib>
#include <ctime>
#include "DoubleList.h"


using namespace std;

DoubleList::DoubleList(const DoubleList & init)// конструктор копирования
{
	Head = nullptr;
	Tail = nullptr;
	number = 0;

	Node *tmp = init.Head;
	int i;
	int *array = new int[init.number];

	for (int i = 0; i < init.number; ++i)
	{
		array[i] = tmp->getData();
		tmp = tmp->getnext_p();
			
	}
	tmp = nullptr;

	for (int i = 0; i < init.number; ++i)
	{
		Node *ptr1 = new Node;
		ptr1->setnext_p(nullptr);
		ptr1->setData(array[i]);


		if (Head != nullptr)
		{
			ptr1->setprev_p(Tail);
			Tail->setnext_p(ptr1);
			ptr1 = Tail;
		}
		else
		{
			ptr1->setprev_p(nullptr);
			Head = Tail = ptr1;

		}
	}
	delete[] array;
	array = nullptr;

}

DoubleList::~DoubleList() // диструктор		
{
	if (number != 0)
	{
		Node *tmp;
		for (int i = 0; i < number; ++i)
		{
			tmp = Head->getnext_p();
			delete Head;
			Head = tmp;

		}
	}

}

int DoubleList::getnumber()
{
	return number;
}

void DoubleList::setnumber(int Value)
{
	number = Value;

}

Node * DoubleList::getHead()
{
	return Head;
}

Node * DoubleList::getTail()
{
	return Tail;
}

void DoubleList::print() // вывод списка на экран 
{
	Node *ptr1 = Head;
	int i = 0;
	
	while (ptr1 != nullptr)
	{
		if (i == number - 1)
			cout << ptr1->getData();
		else
			cout << ptr1->getData() << ">>" << endl;
		ptr1 = ptr1->getnext_p();
		i++;
	}
	cout << endl;

}

void DoubleList::create(int Value) // метод создания списка с рандомными значениями
{
	long ltime;
	int stime;
	ltime = time(NULL);
	stime = (unsigned int)ltime / 2;

	srand(stime);
	for (int i = 0; i < Value; ++i)
	{
		Node *ptr1 = new Node;
		ptr1->setnext_p(nullptr);
		ptr1->setData(rand() % 100 + 1);

		if (Head != nullptr)
		{
			ptr1->setprev_p(Tail);
			Tail->setnext_p(ptr1);
			Tail = ptr1;
		}
		else
		{

			ptr1->setprev_p(nullptr);
			Head = Tail = ptr1;
		}

	}
	number = number + Value;
}

bool DoubleList::operator==(const DoubleList & op2)
{
	bool flag = true;
	Node *ptr1This = Head;
	Node *ptr1op2 = op2.Head;

	for (int i = 0; i < number; ++i)
	{
		if (ptr1This->getData() != ptr1op2->getData())
		{
			flag = false;
			break;
		}
		ptr1This = ptr1This->getnext_p();
		ptr1op2 = ptr1op2->getnext_p();

	}


	return flag;
}

bool DoubleList::operator!=(const DoubleList & op2)
{
	bool flag = true;
	Node *ptr1This = Head;
	Node *ptr1op2 = op2.Head;

	for (int i = 0; i < number; ++i)
	{
		if (ptr1This->getData() == ptr1op2->getData())
		{
			flag = false;
			break;
		}
		ptr1This = ptr1This->getnext_p();
		ptr1op2 = ptr1op2->getnext_p();

	}

	return flag;
}

bool operator>(const DoubleList & op1, const DoubleList & op2)
{
	bool flag;
	Node *ptr1op1 = op1.Head;
	Node *ptr1op2 = op2.Head;
	int countop1;
	int countop2;

	countop1 = countop2 = 0;
	
	for (int i = 0; i < op1.number; ++i)
	{
		if (ptr1op1->getData() > ptr1op2->getData())

			countop1++;
		else
			countop2++;
		ptr1op1 = ptr1op1->getnext_p();
		ptr1op2 = ptr1op2->getnext_p();
	}

	if (countop1 > countop2)
		flag = true;
	else
		flag = false;

	return flag;
}

bool operator<(const DoubleList &op1, const DoubleList &op2)
{
	bool flag;
	Node *ptr1op1 = op1.Head;
	Node *ptr1op2 = op2.Head;
	int countop1, countop2;
	countop1 = countop2 = 0;

	for (int i = 0; i < op1.number; ++i)
	{
		if (ptr1op1->getData() < ptr1op2->getData())
			countop1++;
		else
			countop2++;
		ptr1op1 = ptr1op1->getnext_p();
		ptr1op2 = ptr1op2->getnext_p();

	}
	if (countop1 > countop2)
		flag = true;
	else
		flag = false;

	return flag;
}

DoubleList* DoubleList::operator() (int number)//подсписок 
{
	DoubleList *ptr1 = new DoubleList;

	Node *tmp = Head;
	int *array = new int[number];


	for (int i = 0; i < number; ++i)
	{
		array[i] = tmp->getData();
		tmp = tmp->getnext_p();
	}

	ptr1->create(number);
	tmp = ptr1->getHead();

	for (int i = 0; i < number; ++i)
	{
		tmp->setData(array[i]);
		tmp = tmp->getnext_p();
	}
	return ptr1;



}