#pragma once


class Integer
{
	int *Data; // целочисленное значение

public:
	Integer(); // конструктор по умолчанию
	~Integer(); // деструктор
	Integer(int value); //конструктор с парметром 
	explicit Integer(const Integer &init);
	int getData(); // метод получения значение
	void setData(int value = 0); // метод установки значения

	Integer& operator++(); // префиксная форма увеличивает на 1
	Integer& operator--(); // префиксная форма уменьшает на 1

	friend Integer& operator++(Integer &obj ,  int);// постфиксная форма друж.функция увеличивает на 2
	friend Integer& operator--(Integer &obj , int);// постфиксная форма друж.функция уменьшает на 2

	void print();// вывод на экран 

};