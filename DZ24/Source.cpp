//������������ ������ ������� �++
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

	/*������ 1
���� ������ str. ������������ ������ ������ sym.
��������� ������ ����� ������, ������� ������� ��
������� sym. ����� ����� ������ ����� ����������
���������� ��������� ������� � ����������� ������ str.*/

	cout << "��� �����: ";
	string str = "BOB flow DUDU B1!!!";
	cout << str << endl;
	cout << "������� ������: ";
	char sym;
	cin >> sym;
	string newStr;
	string res;
	for (int i = 0; i < str.size(); i++)
		if (str[i] == sym)
			res += str[i];
	cout << endl << res << "\n\n";

	/*������ 2
�������� �������, ������� ��������� ����� �
���������� true, ���� ��� �������� �����������. �
��������� ������ ������������ false. ������� ������
���� �������������������.*/

	string str2 = "GORROG";
	cout << "����� " << str2 << endl;
	cout << Palindrom(str2) << "\n\n";

	/*������ 3
�������� �������, ������� ��������� �����.
������� ������� ��� �������, �����, �������,
��������������� � �������������� �����, ������� ���� �
���������� ������ � ���������� �� ����� ����������.*/

	cout << "������ ���������:\n";
	string str3 = "�� ������, �� ���? ������� � ���� �� ����� ��� ����� �����!";
	cout << str3 << endl;
	cout << PunctMarks(str3);

	return 0;
}