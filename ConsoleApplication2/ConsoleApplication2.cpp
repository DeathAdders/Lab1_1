#include <math.h>

#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
	float x1, x2, x3, y1, y2, y3;
	cout << "1 coordinate" << endl;
	cin >> x1;
	cin >> y1;
	cout << "2 coordinate" << endl;
	cin >> x2;
	cin >> y2;
	cout << "3 coordinate" << endl;
	cin >> x3;
	cin >> y3;
	float ax = x1 - x2, ay = y1 - y2, bx = x2 - x3, by = y2 - y3, cx = x3 - x1, cy = y3 - y1;
	float a = sqrt(ax * ax + ay * ay);
	float b = sqrt(bx * bx + by * by);
	float c = sqrt(cx * cx + cy * cy);
	float P, p;
	P = a + b + c;
	p = P / 2;
	cout << " P = " << P << endl;
	system("PAUSE");
	return 0;
}