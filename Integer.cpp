#include <iostream>
#include "Integer.h"

using namespace std;


Integer::Integer() // �����������
{
	Data = new int;
	*Data = 0;
}
Integer::Integer(int value)// ���������� � ���������� 
{
	Data = new int;
	*Data = value;
}
Integer::Integer(const Integer & init) // ����������� �����������
{
	Data = new int;
	*Data = *(init.Data);
}
int Integer::getData() // ����� ��������� ��������
{
	return *Data;
}
void Integer::setData(int value) // ����� ��������� ��������
{

	*Data = value;
}
Integer & Integer::operator++()
{
	*(this->Data) += 1;
	return *this;

}
Integer & Integer::operator--()
{
	*(this->Data) -= 1;
	return *this;
}
void Integer::print()// ����� �� ����� 
{
	cout << *Data << endl;
}
Integer::~Integer()// ����������
{
	delete Data;
	Data = nullptr;
}

Integer & operator++(Integer &obj , int)
{
	static Integer tmp (obj);
	tmp.setData(obj.getData() + 2);// ������ obj �������� � tmp � +2
	obj.setData(tmp.getData());// ����������� ���� ���� ������� obj �������� ���� ���� ������� tmp
	return tmp; 

}

Integer & operator--(Integer &obj, int)
{
	static Integer tmp(obj);
	tmp.setData(obj.getData() - 2);// ������ obj �������� � tmp ��� ������ ������������ ����������� � -2
	obj.setData(tmp.getData()); // ����������� ���� ���� ������� obj �������� ���� ���� ������� tmp
	return tmp;
	
}


