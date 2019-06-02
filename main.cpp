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
		cout << "Выбрете, что нужно сделать: " << endl;
		cout << "1) Создать копию объекта и вывести на экран" << endl;
		cout << "2) Создать целое число" << endl;
		cout << "3) Проверить оператор префиксного инкремента" << endl;
		cout << "4) Проверить оператор постфиксного инкремента" << endl;
		cout << "5) Проверить оператор префиксного декримента" << endl;
		cout << "6) Проверить оператор постфиксного декримента" << endl;
		cout << "7) Создать двусвязный линейный список" << endl;
		cout << "8) Проверить оператор >" << endl;
		cout << "9) Проверить оператор <" << endl;
		cout << "10) Проверить оператор !=" << endl;
		cout << "11) Проверить оператор ==" << endl;
		cout << "12) Вернуть подсписок" << endl;
		cout << "13) Выход из программы" << endl;
		cin >> menu_choise;

		switch (menu_choise)
		{
		case 1:
		{

			system("cls");
			cout << "Выберете копию объекта какого класса нужно сделать: " << endl;
			cout << "1) Integer" << endl;
			cout << "2) DoubleList" << endl;
			int which_one_clas;
			cin >> which_one_clas;

			switch (which_one_clas) {

			case 1:
			{



				system("cls");
				Integer copy(numeral);
				cout << "Исходное число: " << endl;
				numeral.print();
				cout << "Копия числа: " << endl;
				copy.print();
				cout << endl;
				system("pause");
				break;
			}


			case 2:
			{
				system("cls");
				DoubleList copy(List);
				cout << "Исходный список: " << endl;
				List.print();
				cout << "Копия списка: " << endl;
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
			cout << "Введите значение целого числа: " << endl;
			int a;
			cin >> a;
			numeral.setData(a);
			cout << "Объект класса Integer создан" << endl;
			system("pause");
			break;
		}
		case 3:
		{
			system("cls");
			if (numeral.getData() == 0)
			{
				cout << "Целое число не существует" << endl;
				continue;
			}
			cout << "Значение числа до операции над ним: " << endl;
			numeral.print();
			numeral2 = ++numeral;
			cout << endl;
			cout << "Значение числа после операции: " << endl;
			numeral2.print();
			system("pause");
			break;

		}
		case 4:
		{
			system("cls");
			if (numeral.getData() == 0)
			{
				cout << "Целое число не существует" << endl;
				continue;
			}
			cout << "Значение число до операции над ним: " << endl;
			numeral.print();
			numeral2 = numeral++;
			cout << endl;
			cout << "Значение числа после операции: " << endl;
			numeral2.print();
			system("pause");
			break;
		}
		case 5:
		{
			system("cls");
			if (numeral.getData() == 0)
			{
				cout << "Значение числа не существует" << endl;
				continue;
			}
			cout << "Значение числа до операции над ним: " << endl;
			numeral.print();
			cout << endl;
			--numeral;
			cout << "Значение числа после операции: " << endl;
			numeral.print();
			system("pause");
			break;
		}
		case 6:
		{
			system("cls");
			if (numeral.getData() == 0)
			{
				cout << "Значение числа не существует" << endl;
				continue;
			}
			cout << "Значение числа до оперции над ним: " << endl;
			numeral.print();
			cout << endl;
			numeral--;
			cout << "Значение числа после операции: " << endl;
			numeral.print();
			system("pause");
			break;
		}
		case 7:
		{
			system("cls");
			cout << "Введите размерность списка: " << endl;
			int Value;
			cin >> Value;
			List.create(Value);
			cout << "Список создан!" << endl;
			system("pause");
			break;
		}
		case 8:
		{
			system("cls");
			cout << "Для проверки оператора создадим новый список" << endl;
			cout << "Выражение имеет вид : Первый список > Второй список" << endl;
			int buf = List.getnumber();
			buffer = new DoubleList;

			if (buf == 0)
			{
				cout << "Пустой список" << endl;
				continue;
			}
			buffer->create(buf);
			cout << "Первый список" << endl;
			List.print();
			cout << "Второй список" << endl;
			buffer->print();

			if (List > *buffer)

				cout << "Первый список больше, чем второй. Выражение истинно!" << endl;
			else
				cout << "Первый список меньше, чем второрй. Выражение ложно!" << endl;
			delete buffer;
			buffer = nullptr;
			system("pause");
			break;
		}
		case 9:
		{
			system("cls");
			cout << "Для проверки оператора создадим новый список" << endl;
			cout << "Выражение имеет вид : Первый список < Второй список" << endl;
			int buf = List.getnumber();
			buffer = new DoubleList;

			if (buf == 0)
			{
				cout << "Пустой список" << endl;
				continue;
			}
			buffer->create(buf);
			cout << "Первый список" << endl;
			List.print();
			cout << "Второй список" << endl;
			buffer->print();

			if (List < *buffer)

				cout << "Первый список меньше, чем второй. Выражение истинно!" << endl;
			else
				cout << "Первый список больше, чем второрй. Выражение ложно!" << endl;
			delete buffer;
			buffer = nullptr;
			system("pause");
			break;
		}
		case 10:
		{
			system("cls");
			cout << "Для проверки оператора создадим новый список" << endl;
			cout << "Выражение имеет вид : Первый список != Второй список" << endl;
			int buf = List.getnumber();
			buffer = new DoubleList;

			if (buf == 0)
			{
				cout << "Пустой список" << endl;
				continue;
			}
			buffer->create(buf);
			cout << "Первый список" << endl;
			List.print();
			cout << "Второй список" << endl;
			buffer->print();

			if (List != *buffer)

				cout << "Списки не равны. Выражение истинно!" << endl;
			else
				cout << "Списка равны. Выражение ложно!" << endl;
			delete buffer;
			buffer = nullptr;
			system("pause");
			break;
		}
		case 11:
		{
			system("cls");
			cout << "Для проверки оператора создадим новый список" << endl;
			cout << "Выражение имеет вид : Первый список = Второй список" << endl;
			int buf = List.getnumber();
			buffer = new DoubleList;

			if (buf == 0)
			{
				cout << "Пустой список" << endl;
				continue;
			}
			buffer->create(buf);
			cout << "Первый список" << endl;
			List.print();
			cout << "Второй список" << endl;
			buffer->print();

			if (List == *buffer)

				cout << "Списки равны. Выражение истинно!" << endl;
			else
				cout << "Списки не равны. Выражение ложно!" << endl;
			delete buffer;
			buffer = nullptr;
			system("pause");
			break;
		}
		case 12:
		{
			system("cls");
			cout << "Какой длинны подсписок вы хотите взять: " << endl;
			int len;
			cin >> len;

			buffer = List(len);
			cout << "Исходный список: " << endl;
			List.print();
			cout << endl;
			cout << "Взятый вами подсписок длины: " << len << endl;
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

			




		










		
		



			





			

		

	

















