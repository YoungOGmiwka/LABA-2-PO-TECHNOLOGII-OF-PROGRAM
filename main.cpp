#include <iostream>
#include "DoubleList.h"
#include "Integer.h"



using namespace std;


int main(int argc, const char *argv[])
{
	system("chcp 1251");
	unsigned menu_choise;
	Integer numeral;
	Integer numeral2;
	DoubleList List;
	DoubleList *buffer;
	

	do
	{
		system("cls");
		cout << "�������, ��� ����� �������: " << endl;
		cout << "1) ������� ����� ������� � ������� �� �����" << endl;
		cout << "2) ������� ����� �����" << endl;
		cout << "3) ��������� �������� ����������� ����������" << endl;
		cout << "4) ��������� �������� ������������ ����������" << endl;
		cout << "5) ��������� �������� ����������� ����������" << endl;
		cout << "6) ��������� �������� ������������ ����������" << endl;
		cout << "7) ������� ���������� �������� ������" << endl;
		cout << "8) ��������� �������� >" << endl;
		cout << "9) ��������� �������� <" << endl;
		cout << "10) ��������� �������� !=" << endl;
		cout << "11) ��������� �������� ==" << endl;
		cout << "12) ������� ���������" << endl;
		cout << "13) ����� �� ���������" << endl;
		cin >> menu_choise;

		switch (menu_choise)
		{
		case 1:
		{

			system("cls");
			cout << "�������� ����� ������� ������ ������ ����� �������: " << endl;
			cout << "1) Integer" << endl;
			cout << "2) DoubleList" << endl;
			int which_one_clas;
			cin >> which_one_clas;

			switch (which_one_clas) {

			case 1:
			{



				system("cls");
				Integer copy(numeral);
				cout << "�������� �����: " << endl;
				numeral.print();
				cout << "����� �����: " << endl;
				copy.print();
				cout << endl;
				system("pause");
				break;
			}


			case 2:
			{
				system("cls");
				DoubleList copy(List);
				cout << "�������� ������: " << endl;
				List.print();
				cout << "����� ������: " << endl;
				copy.print();
				cout << endl;
				system("pause");
				break;
			}
			
			default:
				break;
			}
			break;
		}
		

		

		case 2:
		{
			system("cls");
			cout << "������� �������� ������ �����: " << endl;
			int a;
			cin >> a;
			numeral.setData(a);
			cout << "������ ������ Integer ������" << endl;
			system("pause");
			break;
		}
		case 3:
		{
			system("cls");
			if (numeral.getData() == 0)
			{
				cout << "����� ����� �� ����������" << endl;
				continue;
			}
			cout << "�������� ����� �� �������� ��� ���: " << endl;
			numeral.print();
			numeral2 = ++numeral;
			cout << endl;
			cout << "�������� ����� ����� ��������: " << endl;
			numeral2.print();
			system("pause");
			break;

		}
		case 4:
		{
			system("cls");
			if (numeral.getData() == 0)
			{
				cout << "����� ����� �� ����������" << endl;
				continue;
			}
			cout << "�������� ����� �� �������� ��� ���: " << endl;
			numeral.print();
			numeral2 = numeral++;
			cout << endl;
			cout << "�������� ����� ����� ��������: " << endl;
			numeral2.print();
			system("pause");
			break;
		}
		case 5:
		{
			system("cls");
			if (numeral.getData() == 0)
			{
				cout << "�������� ����� �� ����������" << endl;
				continue;
			}
			cout << "�������� ����� �� �������� ��� ���: " << endl;
			numeral.print();
			cout << endl;
			--numeral;
			cout << "�������� ����� ����� ��������: " << endl;
			numeral.print();
			system("pause");
			break;
		}
		case 6:
		{
			system("cls");
			if (numeral.getData() == 0)
			{
				cout << "�������� ����� �� ����������" << endl;
				continue;
			}
			cout << "�������� ����� �� ������� ��� ���: " << endl;
			numeral.print();
			cout << endl;
			numeral--;
			cout << "�������� ����� ����� ��������: " << endl;
			numeral.print();
			system("pause");
			break;
		}
		case 7:
		{
			system("cls");
			cout << "������� ����������� ������: " << endl;
			int Value;
			cin >> Value;
			List.create(Value);
			cout << "������ ������!" << endl;
			system("pause");
			break;
		}
		case 8:
		{
			system("cls");
			cout << "��� �������� ��������� �������� ����� ������" << endl;
			cout << "��������� ����� ��� : ������ ������ > ������ ������" << endl;
			int buf = List.getnumber();
			buffer = new DoubleList;

			if (buf == 0)
			{
				cout << "������ ������" << endl;
				continue;
			}
			buffer->create(buf);
			cout << "������ ������" << endl;
			List.print();
			cout << "������ ������" << endl;
			buffer->print();

			if (List > *buffer)

				cout << "������ ������ ������, ��� ������. ��������� �������!" << endl;
			else
				cout << "������ ������ ������, ��� �������. ��������� �����!" << endl;
			delete buffer;
			buffer = nullptr;
			system("pause");
			break;
		}
		case 9:
		{
			system("cls");
			cout << "��� �������� ��������� �������� ����� ������" << endl;
			cout << "��������� ����� ��� : ������ ������ < ������ ������" << endl;
			int buf = List.getnumber();
			buffer = new DoubleList;

			if (buf == 0)
			{
				cout << "������ ������" << endl;
				continue;
			}
			buffer->create(buf);
			cout << "������ ������" << endl;
			List.print();
			cout << "������ ������" << endl;
			buffer->print();

			if (List < *buffer)

				cout << "������ ������ ������, ��� ������. ��������� �������!" << endl;
			else
				cout << "������ ������ ������, ��� �������. ��������� �����!" << endl;
			delete buffer;
			buffer = nullptr;
			system("pause");
			break;
		}
		case 10:
		{
			system("cls");
			cout << "��� �������� ��������� �������� ����� ������" << endl;
			cout << "��������� ����� ��� : ������ ������ != ������ ������" << endl;
			int buf = List.getnumber();
			buffer = new DoubleList;

			if (buf == 0)
			{
				cout << "������ ������" << endl;
				continue;
			}
			buffer->create(buf);
			cout << "������ ������" << endl;
			List.print();
			cout << "������ ������" << endl;
			buffer->print();

			if (List != *buffer)

				cout << "������ �� �����. ��������� �������!" << endl;
			else
				cout << "������ �����. ��������� �����!" << endl;
			delete buffer;
			buffer = nullptr;
			system("pause");
			break;
		}
		case 11:
		{
			system("cls");
			cout << "��� �������� ��������� �������� ����� ������" << endl;
			cout << "��������� ����� ��� : ������ ������ = ������ ������" << endl;
			int buf = List.getnumber();
			buffer = new DoubleList;

			if (buf == 0)
			{
				cout << "������ ������" << endl;
				continue;
			}
			buffer->create(buf);
			cout << "������ ������" << endl;
			List.print();
			cout << "������ ������" << endl;
			buffer->print();

			if (List == *buffer)

				cout << "������ �����. ��������� �������!" << endl;
			else
				cout << "������ �� �����. ��������� �����!" << endl;
			delete buffer;
			buffer = nullptr;
			system("pause");
			break;
		}
		case 12:
		{
			system("cls");
			cout << "����� ������ ��������� �� ������ �����: " << endl;
			int len;
			cin >> len;

			buffer = List(len);
			cout << "�������� ������: " << endl;
			List.print();
			cout << endl;
			cout << "������ ���� ��������� �����: " << len << endl;
			buffer->print();
			cout << endl;
			system("pause");
			break;
		}
		case 13:
		{
			system("cls");
			menu_choise = 13;
			break;
		}
		default:
			break;
		}
	}while (menu_choise != 13);

		
	return 0;


	
}

			




		










		
		



			





			

		

	

















