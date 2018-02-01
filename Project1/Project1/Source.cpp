#include <iostream>
#include <windows.h>
#include <ctime>
#include <string>
using namespace std;
// Написати функцію для роботи з матрицями з кількістю стовбців 5: заповнення випадковими числа, знаходження макс елемента, знаходження мін елемента, вивід масиву, сортування рядків массиву, знаходження найбільшого в двох массивах; 
void combo(int mass[][5], int lines, string op);
void max_two(int mass_1[][5], int mass_2[][5], int lines, string name_1, string name_2);
void main() {
	const int size = 10;
	int arr[size][5], arr_2[size][5];
	combo(arr, size, "rand");
	cout << endl << "Arr_1" << endl;
	combo(arr, size, "cout");
	cout << endl << "Arr_1" << endl;
	combo(arr, size, "sort");
	cout << endl << "Arr_1" << endl;
	combo(arr, size, "cout");
	system("pause");
}
void max_two(int mass_1[][5], int mass_2[][5], int lines, string name_1, string name_2) {
	int max_l = 0, max_r = 0;
	int max_l1 = 0, max_r1 = 0, max, max_l_, max_r_, maxi;
	string name;
	for (int i = 0; i < lines; i++)
		for (int g = 0; g < 5; g++)
			if (mass_1[max_l][max_r] < mass_1[i][g]) {
				max_l = i;
				max_r = g;
			}
	for (int i = 0; i < lines; i++)
		for (int g = 0; g < 5; g++)
			if (mass_2[max_l1][max_r1] < mass_2[i][g]) {
				max_l1 = i;
				max_r1 = g;
			}
	if (mass_2[max_l1][max_r1] > mass_1[max_l][max_r]) {
		max_l_ = max_l1;
		max_r_ = max_r1;
		name = name_2;
		maxi = mass_2[max_l1][max_r1];
	}
	else {
		max_l_ = max_l;
		max_r_ = max_r;
		name = name_1;
		maxi = mass_1[max_l][max_r];
	}
	cout << "Max in " << name << " = " << maxi << " cordinats ( " << max_r_ << " ; " << max_l_ << " )" << endl;
}
void combo(int mass[][5], int lines, string op) {
	srand(time(0));
	if (op == "rand") {
		for (int i = 0; i < lines; i++)
			for (int g = 0; g < 5; g++) {
				mass[i][g] = rand();
				Sleep(300);
			}
	}
	else if (op == "cout") {
		for (int i = 0; i < lines; i++) {
			for (int g = 0; g < 5; g++)
				cout << '\t' << mass[i][g];
			cout << endl;
		}
	}
	else if (op == "max") {
		int max_l = 0, max_r = 0;
		for (int i = 0; i < lines; i++)
			for (int g = 0; g < 5; g++)
				if (mass[max_l][max_r] < mass[i][g]) {
					max_l = i;
					max_r = g;
				}
		cout << "Max = " << mass[max_l][max_r] << " cordinats ( " << max_r << " ; " << max_l << " )" << endl;
	}
	else if (op == "min") {
		int min_l = 0, min_r = 0;
		for (int i = 0; i < lines; i++)
			for (int g = 0; g < 5; g++)
				if (mass[min_l][min_r] > mass[i][g]) {
					min_l = i;
					min_r = g;
				}
		cout << "Min = " << mass[min_l][min_r] << " cordinats ( " << min_r << " ; " << min_l << " )" << endl;
	}
	else if (op == "sort") {
		for (int i = 0; i < lines; i++)
				for (int s = 0; s < 5 - 1; s++)
					for (int j = 5 - 1; j > s; j--)
						if (mass[i][j] < mass[i][j - 1]) swap(mass[i][j], mass[i][j - 1]);
	}
}