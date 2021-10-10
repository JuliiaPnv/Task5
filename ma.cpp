#include<iostream>
using namespace std;
int main()
{
	int N=1, F, a, b, c;
	for (N; N < 11; N++) 
	{
		cout << "enter F (from 1)= ";
		cin >> F;
		a = 0;
		b = 1;
		c = 0;
		while (1) 
		{
			if (F == b)
			{
				cout << "Fibonacci"<<endl;
				break;
			}
			c = a + b;
			a = b;
			b = c;
			if (F == c)
			{
				cout << "Fibonacci"<<endl;
				break;
			}
			if (F < c)
			{
				cout << "Alas"<<endl;
				break;
			}
		}	
	}
}