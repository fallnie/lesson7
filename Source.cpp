#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	/*int a;
	cin >> a;
	switch (a) {
	case 1:cout << "понедельник"; break;
	case 2:cout << "вторник"; break;
	case 3:cout << "среда"; break;
	case 4:cout << "четверг"; break;
	case 5:cout << "пятница"; break;
	case 6:cout << "суббота"; break;
	case 7:cout << "воскресенье"; break;
	default:cout <<"нет такого дня недели"; break;
	}
	return 0;*/
	/*Case2.Дано целое число K.Вывести строку - описание оценки, соответствующей числу K(1 — «плохо», 2 — «неудовлетворительно», 3 — «удовлетворительно», 4 — «хорошо», 5 — «отлично»).Если K не лежит в диапазоне 1–5,
		то вывести строку «ошибка».*/
	/*int a;
	cin >> a;
	switch (a) {
	case 1:cout << "плохо"; break;
	case 2:cout << "неудовлетворительно"; break;
	case 3:cout << "удовлетворительно"; break;
	case 4:cout << "хорошо"; break;
	case 5:cout << "отлично"; break;
	default:cout << "ошибка"; break;
	}
	return 0;
	Case3.Дан номер месяца — целое число в диапазоне 1–12(1 — январь, 2 — февраль и т.д.).Вывести название соответствующего времени года(«зима»,
		«весна», «лето», «осень»).*/
	/*int a;
	cin >> a;
	switch (a) {
	case 1:
	case 2:
	case 12:cout << "зима"; break;
	case 3:
	case 4:
	case 5:cout << "весна"; break;
	case 6:
	case 7:
	case 8:cout << "лето"; break;
	case 9:
	case 10:
	case 11:cout << "осень"; break;
	default:cout << "ошибка"; break;
	}
	return 0;*/
	/*Case4◦
		.Дан номер месяца — целое число в диапазоне 1–12(1 — январь, 2 —
			февраль и т.д.).Определить количество дней в этом месяце для невисокосного года.*/
	/*int a;
	cin >> a;
	switch (a) {
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:cout << "в месяце 31 день"; break;
	case 4:
	case 6:
	case 9:
	case 11:cout << "в месяце 30 дней"; break;
	case 2:cout << "в месяце 28 дней"; break;
	default:cout << "ошибка";break;
	}
	return 0;
	Case5.Арифметические действия над числами пронумерованы следующим
		образом : 1 — сложение, 2 — вычитание, 3 — умножение, 4 — деление.Дан
		номер действия N(целое число в диапазоне 1–4) и вещественные числа A
		и B(В не равно 0).Выполнить над числами указанное действие и вывести
		результат.*/

	
	/*double a,b;
	cin >> a;
	cin >> b;
	int c;
	cin >> c;
	switch (c) {
	case 1: cout << a + b; break;
	case 2:cout << a - b; break;
	case 3:cout << a * b; break;
	case 4:cout << a / b; break;
	default:cout << "ошибка"; break;
	}
	return 0;*/
	/*Case6.Единицы длины пронумерованы следующим образом : 1 — дециметр,
		2 — километр, 3 — метр, 4 — миллиметр, 5 — сантиметр.Дан номер
		единицы длины(целое число в диапазоне 1–5) и длина отрезка в этих
		единицах(вещественное число).Найти длину отрезка в метрах.*/
	/*int a;
	cin >> a;
	double b;
	cin >> b;
	switch (a) {
	case 1: cout << b/10; break;
	case 2:cout << b*1000; break;
	case 3:cout << b; break;
	case 4:cout << b/1000; break;
	case 5:cout << b/100; break;
	default:cout << "ошибка"; break;
	}*/
	/*return 0;*/
//Case7.Единицы массы пронумерованы следующим образом : 1 — килограмм,
//2 — миллиграмм, 3 — грамм, 4 — тонна, 5 — центнер.Дан номер единицы массы(целое число в диапазоне 1–5) и масса тела в этих единицах
//(вещественное число).Найти массу тела в килограммах.
//int a;
//cin >> a;
//double b;
//cin >> b;
//switch (a) {
//case 1: cout << b; break;
//case 2:cout << b /1000000; break;
//case 3:cout << b/1000; break;
//case 4:cout << b * 1000; break;
//case 5:cout << b * 100; break;
//default:cout << "ошибка"; break;
//}
//return 0;

//int a;
//cin >> a;
//if (a == 0) {
//	cout << "верно" << endl;
//}
//else {
//	cout << "неверно" << endl;
//}
//int a;
//cin >> a;
//if (a > 0) {
//	cout << "верно" << endl;
//}
//else if (a<0) {
//	cout << "неверно" << endl;
//}
//else if (a == 0) {
//	cout << 0 << endl;
//}
//int a;
//cin >> a;
//if (a < 0) {
//	cout << "верно" << endl;
//}
//else if (a  0) {
//	cout << "неверно" << endl;
//}
//else if (a == 0) {
//	cout << 0 << endl;
//}

//int a;
//cin >> a;
//if (a >= 0) {
//	cout << "верно" << endl;
//}
//else {
//	cout << "неверно" << endl;
//}

//int a;
//cin >> a;
//if (a <= 0) {
//	cout << "верно" << endl;
//}
//else {
//	cout << "неверно" << endl;
//}

//int a;
//cin >> a;
//if (a != 0) {
//	cout << "верно" << endl;
//}
//else {
//	cout << "неверно" << endl;
//}

//double a;
//cin >> a;
//if (a == 0 || a == 2) {
//	a = a + 7;
//}
//else {
//	a = a/10;
//}
//cout << a << endl;

//int a;
//cin >> a;
//if (a > 0 && a < 5) {
//	cout << "верно" << endl;
//}
//else {
//	cout << "неверно" << endl;
//}

//int a,b;
//cin >> a;
//cin >> b;
//if (a <= 1 && b >= 3) {
//	cout << a + b << endl;
//}
//else {
//	cout << a - b << endl;
//}


//int a, b;
//cin >> a;
//cin >> b;
//if (a > 2 &&  a<11 || b>6 && b<14) {
//	cout <<"верно"  << endl;
//}
//else {
//	cout << "неверно" << endl;
//}

//int a;
//cin >> a;
//switch (a) {
//case 1: cout << "зима"; break;
//case 2:cout <<"весна" ; break;
//case 3:cout <<"лето"; break;
//case 4:cout << "осень"; break;
//default:cout << "ошибка"; break;
//}
//return 0;



}