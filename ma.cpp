#include<iostream>
using namespace std;
int main()
{
	int N=1, F, a, b, c;
	setlocale(LC_ALL, "Rus");
	for (N; N < 11; N++) 
	{
		cout << "������� F (�� 1)= ";
		cin >> F;
		a = 0;
		b = 1;
		c = 0;
		while (1) 
		{
			if (F == b)
			{
				cout << "���������"<<endl;
				break;
			}
			c = a + b;
			a = b;
			b = c;
			if (F == c)
			{
				cout << "���������"<<endl;
				break;
			}
			if (F < c)
			{
				cout << "���"<<endl;
				break;
			}
		}	
	}
}