#include <iostream>
#include<iomanip>
using namespace std;
void Nhap(int[], int&);
bool ktNguyenTo(int);
void XayDung(int[], int, int[], int&);

int main()
{
	int a[500];
	int n;
	Nhap(a, n);
	int b[500];
	int k;
	cout << "Mang b: ";
	XayDung(a, n, b, k);
	for (int i = 0; i < k; i++)
		cout << setw(6) << b[i];
	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	cout << "Mang a la: ";
	for (int i = 0; i < n; i++)
		cin >> a[i];
}

bool ktNguyenTo(int n)
{
	int dem = 0;
	for (int i = 1; i <= n; i++)
		if (n % i == 0)
			dem++;
	if (dem == 2)
		return true;
	return false;
}

void XayDung(int a[], int n, int b[], int& k)
{
	k = 0;
	for (int i = 0; i < n; i++)
		if (ktNguyenTo(a[i]))
		{
			b[k] = a[i];
			k++;
		}
}