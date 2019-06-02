#pragma once


class Integer
{
	int *Data; // ������������� ��������

public:
	Integer(); // ����������� �� ���������
	~Integer(); // ����������
	Integer(int value); //����������� � ��������� 
	explicit Integer(const Integer &init);
	int getData(); // ����� ��������� ��������
	void setData(int value = 0); // ����� ��������� ��������

	Integer& operator++(); // ���������� ����� ����������� �� 1
	Integer& operator--(); // ���������� ����� ��������� �� 1

	friend Integer& operator++(Integer &obj ,  int);// ����������� ����� ����.������� ����������� �� 2
	friend Integer& operator--(Integer &obj , int);// ����������� ����� ����.������� ��������� �� 2

	void print();// ����� �� ����� 

};