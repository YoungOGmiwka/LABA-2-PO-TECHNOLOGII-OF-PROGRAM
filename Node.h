#pragma once

class Node
{
	int Data;
	Node *prev_p;
	Node *next_p;

public:
	Node() :Data(0), prev_p(nullptr), next_p(nullptr) {};//����������� �� ��������� 
	int getData(); // �������� �������� 
	void setData(int Value);// ������������� ���� ���� ������� ��������� value
	Node* getprev_p();
	void setprev_p(Node *ptr); 
	Node* getnext_p();
	void setnext_p(Node *ptr);

	

};