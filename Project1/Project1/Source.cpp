#include <iostream>
#include <windows.h>
#include <ctime>
using namespace std;
// Створити функцію з використанням статичної змінної яка повертає середнє арифметичне чисел що були її аргументами
float avg(float num) {
	static float count = 0, sum = 0;
	count++;
	sum += num;
	cout << "Count = " << count << " Sum = " << sum << endl;
	return (sum / count);
}
void main() {
	srand(time(0));
	avg(5);
	avg(6);
	avg(10);
	system("pause");
}