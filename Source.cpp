#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
void Create(int* a, const int size, const int Low, const int High)
{
	for (int i = 0; i < size; i++)
		a[i] = Low + rand() % (High - Low + 1);
}
void Print(int* a, const int size)
{
	for (int i = 0; i < size; i++)
		cout << setw(4) << a[i];
	cout << endl;
}
int Num(int* a, const int size)
{
	int t = 0;
	for (int i=0; i< size; i++)
		if (a[i]%2==0 && !(i%8==0))
			t++;
	cout << t;
	return t;
}
int Sum(int* a, const int size)
{
	int S = 0;
	for (int i = 0; i < size; i++)
		if (a[i]%2==0 && !(i%8==0))
			S += a[i];
	return S;
}
void Null(int* a, const int size)
{
	for (int i = 0; i < size; i++)
		if (a[i] % 2 == 0 && !(i % 8 == 0))
			a[i] = 0;
}

int main()
{
	srand((unsigned)time(NULL)); 
	const int n = 25;
	int a[n];
	int Low = 5;
	int High = 90;
	Create(a, n, Low, High);
	Print(a, n);
	cout << "t= " << Num(a, n) << endl;
	Sum(a, n);
	cout << "sum=" << Sum(a,n) << endl;
	Null(a,n);
	Print(a, n);
	return 0;
}