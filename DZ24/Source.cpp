//Персональный шаблон проекта С++
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <algorithm>
using namespace std;

bool Palindrom(string str) {
	for (int i = 0; i < str.size(); i++)
		str[i] = toupper(str[i]);
	if (str[0] == str[5] && str[1] == str[4] && str[2] == str[3])
		return 1;
	else
		return 0;
}
int PunctMarks(string str) {
	int sum = 0, index = 0;
	for (int i = 0; i < str.size(); i++)
		if (str[i] == ' ' || str[i] == '.' || str[i] == ',' || str[i] == '!' || str[i] == '?')
			sum += 1;
	return sum;
}
int main() {
	setlocale(LC_ALL, "Russian");

	/*Задача 1
Дана строка str. Пользователь вводит символ sym.
Программа создаёт новую строку, которая состоит из
символа sym. Длина новой строки равна количеству
совпадений введённого символа в изначальной строке str.*/

	cout << "Вот фраза: ";
	string str = "BOB flow DUDU B1!!!";
	cout << str << endl;
	cout << "Введите символ: ";
	char sym;
	cin >> sym;
	string newStr;
	string res;
	for (int i = 0; i < str.size(); i++)
		if (str[i] == sym)
			res += str[i];
	cout << endl << res << "\n\n";

	/*Задача 2
Создайте функцию, которая принимает слово и
возвращает true, если оно является палиндромом. В
противном случае возвращается false. Функция должна
быть нерегистрозависимой.*/

	string str2 = "GORROG";
	cout << "Слово " << str2 << endl;
	cout << Palindrom(str2) << "\n\n";

	/*Задача 3
Создайте функцию, которая принимает стоку.
Функция считает все пробелы, точки, запятые,
восклицательные и вопросительные знаки, которые есть в
переданной строке и возвращает их общее количество.*/

	cout << "Строка следующая:\n";
	string str3 = "Эй братка, ты как? Надеюсь у тебя по жизни все будет круто!";
	cout << str3 << endl;
	cout << PunctMarks(str3);

	return 0;
}