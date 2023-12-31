#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void XayDung(int[], int[], int, int&);

int main()
{
	int a[100];
	int b[500];
	int n, k;
	Nhap(a, n);
	XayDung(a, b, n, k);
	for (int i = 0; i < k; i++)
		cout << setw(4) << b[i];
	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(time(NULL));
	cout << "Nhap mang: ";
	for (int i = 0; i < n; i++)
		cin >> a[i];
}
void XayDung(int a[], int b[], int n, int& k)
{
	k = 0;
	b[k++] = a[0];
	for (int i = 1; i < n; i++)
	{
		if (a[i] % 2 == 0 && b[k - 1] % 2 == 0)
			b[k++] = 1;
		else if (a[i] % 2 != 0 && b[k - 1] % 2 != 0)
			b[k++] = 0;
		b[k++] = a[i];
	}
}