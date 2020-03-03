// ConsoleApplication6.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include "Parallelepiped.h"
#include "Body.h"
#include "Ball.h"
#include "Cone.h"
#include <vector>
#include "Series.h"
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");	
	int e;
	int owo, uwu, popo;
	std::vector<Body *> bodies;
	auto it = bodies.begin();
	Body *b;
	do {
		system("pause");
		system("cls");
		cout << "=> Введите номер выбора: " << endl;
		cout << "[1]. Найти объем и площадь прямоугольного параллелепипеда.  " << endl;
		cout << "[2]. Найти объем и площадь шара." << endl;
		cout << "[3]. Найти объем и площадь конуса." << endl;
		cout << "[4]. Вывести все раннее расчитанные данные о фигурах." << endl;
		cout << "[5]. Выход из программы." << endl;
		cin >> e;		
		switch (e)
		{
		case 1:
		{
			cout << "Введите поочерёдно длины ребёр для параллелепипеда" << endl;
			cin >> owo;
			cin >> uwu;
			cin >> popo;
			b = new Parallelepiped(owo, uwu, popo);
			b->Print(cout) << ", S = " << b->SurfaceArea() << ", V = " << b->Volume() << endl;
			bodies.push_back(b);
		}; break;		
		case 2:
		{
			cout << "Введите радиус шара для нахождения площади и объёма" << endl;
			cin >> owo;
			b = new Ball(owo);
			b->Print(cout) << ", S = " << b->SurfaceArea() << ", V = " << b->Volume() << endl;
			bodies.push_back(b);
		}; break;
		case 3: 
		{
			cout << "Введите поочерёдно радиус окружности, длину ребра и высоту конуса" << endl;
			cin >> owo;
			cin >> uwu;
			cin >> popo;
			b = new Cone(owo, uwu, popo);
			b->Print(cout) << ", S = " << b->SurfaceArea() << ", V = " << b->Volume() << endl;
			bodies.push_back(b);
		}break;
		case 4: {
			it = bodies.begin();
			while (it != bodies.end())
			{
				(*it)->Print(std::cout) << ", S = " << (*it)->SurfaceArea() << ", V = " << (*it)->Volume() << std::endl;
				it++;
			}
			break;
		default:
			it = bodies.begin();
			while (it != bodies.end())
			{
				delete *it;
				it++;
			}
			bodies.clear();
			break;
		}; break;
		case 5: {
			return 0;

		}; break;
		}
	}
		while (e != 7);
	
//	Series series(100);
//
//	series.Add(new Ball(3));
//	series.Add(new Parallelepiped(1,2,2));
//	series.Add(new Cone(2,3,3));
//
//
////	for (int i=0; i < series.Size(); ++i)
//		std::cout << series[i]->SurfaceArea() << std::endl;

	return 0;
}