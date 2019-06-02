#pragma once

#include "Node.h"


class DoubleList
{
	Node* Head;
	Node* Tail;
	int number; // ����� ��������

public:
	DoubleList() : Head(nullptr), Tail(nullptr), number(0) {};// ����������� �� ���������
	DoubleList(int Value) : Head(nullptr), Tail(nullptr), number(Value) {}; // ����������� � ����������
	explicit DoubleList(const DoubleList &init); // ����������� ����������� 

	// ������ ��������� � ��������� �������� private-������ ������

	~DoubleList();

	int getnumber();
	void setnumber(int Value);
	Node* getHead();
	Node* getTail();


	void print(); // ����� �� ����� ������
	void create(int Value); // ����� �������� ������ � ���������� ����������. value - ������ ������������� ����� 

	// ���������� 

	bool operator == (const DoubleList &op2); // ��������� FALSE ���� ���� ���� �� ��������� 
	bool operator != (const DoubleList &op2); // ��������� TRUE ���� ���� ���� �� ���������  

	// ���������� �������������� ���������

	friend bool operator > (const DoubleList &op1, const DoubleList &op2); // � ����� ������ ������ TRUE ��� � ������ 
	friend bool operator < (const DoubleList &op1, const DoubleList &op2); // � ����� ������ ������ FALSE ��� � ������ 

	DoubleList* operator()(int number); // ����������� ��������� �� ���������
};	
