#include <iostream>
#include <cmath>
using namespace std;
double h(const double x, const double y, const double z); // ��������
int main()
{
	double a, b;

	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	double c = (h(a, b, 1) + h(1, a, b) / 1 + h((a * a) + (b * b), 1, 0));

	cout << "c = " << c << endl;
	return 0;
}
double h(const double x, const double y, const double z) // ����������
{
	return (x + y + z) / ((x * x) + (y * y) + (z * z));
}
