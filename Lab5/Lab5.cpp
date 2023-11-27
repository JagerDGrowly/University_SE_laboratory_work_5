#include <iostream>
#include <fstream>
#include <math.h>

using namespace std;

void checkValidInput()
{
	if (cin.fail())
	{
		throw "Incorrect input";
	}
}

void checkValidParamN(int n)
{
	if (n < 2)
	{
		throw "Input correct data";
	}
}

double functionY(double a, double n)
{
	double b = a;
	double h = 1.0;

	if (a <= b || h > 0 || n >= 2)
	{
		for (double x = a; x <= b; x += h)
		{
			if (x <= 0)
			{
				double y = 1;

				for (int i = 0; i <= n - 1; i++)
				{
					y = y * (i * i + x);
				}

				cout << "x = " << x << " y = " << y << endl;

				return y;
			}
			else
			{
				double y = 0;

				for (int i = 0; i <= n - 1; i++)
				{
					for (int j = 0; j <= n - 1; j++)
					{
						y = y + (x / (i + j));
					}
				}
				cout << "x = " << x << " y = " << y << endl;

				return y;
			}
		}
	}
	else
	{
		cout << "Wrong data!" << endl;
	}
}

int main()
{
	try
	{
		char ans;
		ofstream fout;

		cout << "0_o Whrite down the answers? Yes: y, No: n: "; 
		cin >> ans;

		if (ans == 'y')
		{
			fout.open("answers.txt");
			if (!fout.is_open())
			{
				cout << "Error: " << endl;
				return 1;
			}
		}

		double a, b, h, n;

		cout << "~ Write x: "; 
		cin >> a; 

		cout << "~ Write end number of arguments to be calculated: "; 
		cin >> b; 

		cout << "~ Write step: "; 
		cin >> h; 

		cout << "~ Write n: "; 
		cin >> n;

		if (fout.is_open())
		{
			fout << "UwU -> input: a = " << a << "; b = " << b << "; h = " << h << "; n = " << n << endl; 
		}

		if (a <= b || h > 0 || n >= 2)
		{
			for (double x = a; x <= b; x += h) 
			{
				if (x <= 0)
				{
					double y = 1;

					for (int i = 0; i <= n - 1; i++)
					{
						y = y * (i * i + x);
					}

					cout << "$: x = " << x << " y = " << y << endl; 

					if (fout.is_open())
					{
						fout << "UwU -> results: x = " << x << " y = " << y << endl;
					}

				}
				else
				{
					double y = 0;

					for (int i = 0; i <= n - 1; i++)
					{
						for (int j = 0; j <= n - 1; j++)
						{
							y = y + (x / (i + j));
						}
					}
					cout << "$: x = " << x << " y = " << y << endl; 

					if (fout.is_open())
					{
						fout << "UwU -> results: x = " << x << " y = " << y << endl; 
					}
				}
			}
		}
		else
		{
			cout << "Wrong data :(" << endl; 
		}

		return 0;
	}

	catch (const char* ex)
	{
		cout << "\n";
		cout << ex << endl;
		cerr << "Error" << endl;
		return -1;
	}
}