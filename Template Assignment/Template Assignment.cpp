// Jonah Meoak
// CIS 1202 M01
// May 3 2026
// 

#include <iostream>

using namespace std;

template <typename T>
T half(T value);

template <>
int half<int>(int value);

int main()
{
	int i = 5;
	int i2 = -7;
	int i3 = 10;
	double d = 9.0;
	double d2 = -7.0;
	float f = 9.0f;

	cout << "int i: " << half(i) << endl;
	cout << "int i2: " << half(i2) << endl;
	cout << "int i3: " << half(i3) << endl;
	cout << "double d: " << half(d) << endl;
	cout << "double d2: " << half(d2) << endl;
	cout << "float f: " << half(f) << endl;
}

template <typename T>
T half(T value)
{
	return value / 2.0;
}

template <>
int half<int>(int value)
{
	return (value + 1) / 2;
}