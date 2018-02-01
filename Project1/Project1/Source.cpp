#include <iostream>
#include <windows.h>
#include <ctime>
using namespace std;
// Знайти максимальне число в функції
float avg(float num) {
	static float max = -10000000;
	if (max < num) max = num;
	return max;
}
void main() {
	srand(time(0));
	cout << avg(10) << endl;
	cout << avg(5) << endl;
	cout << avg(2) << endl;
	system("pause");
}