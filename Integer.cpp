#include <iostream>
#include "Integer.h"

using namespace std;


Integer::Integer() // конструткор
{
	Data = new int;
	*Data = 0;
}
Integer::Integer(int value)// конструтор с параметром 
{
	Data = new int;
	*Data = value;
}
Integer::Integer(const Integer & init) // конструктор копирования
{
	Data = new int;
	*Data = *(init.Data);
}
int Integer::getData() // метод получения значения
{
	return *Data;
}
void Integer::setData(int value) // метод установки значения
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
void Integer::print()// вывод на экран 
{
	cout << *Data << endl;
}
Integer::~Integer()// деструктор
{
	delete Data;
	Data = nullptr;
}

Integer & operator++(Integer &obj , int)
{
	static Integer tmp (obj);
	tmp.setData(obj.getData() + 2);// объект obj копируем в tmp и +2
	obj.setData(tmp.getData());// присваиваем полю дата объекта obj значение поля дата объекта tmp
	return tmp; 

}

Integer & operator--(Integer &obj, int)
{
	static Integer tmp(obj);
	tmp.setData(obj.getData() - 2);// обьект obj копируем в tmp при помощи конструктора копирования и -2
	obj.setData(tmp.getData()); // присваиваем полю дата обьекта obj значение поля дата объекта tmp
	return tmp;
	
}


