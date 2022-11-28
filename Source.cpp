#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;

// ôóíêö³ÿ ââåäåííÿ äàíèõ ç êëàâ³àòóðè, ïàðàìåòðè ïåðåäàþòüñÿ çà ïîñèëàííÿì
bool input(double& n, double& a,  double& b, double& h, double &x)
{
	
	std::ifstream inFile("data.txt");
	inFile >> n >> a >> b >> h;
	x = a;
    if (n <= 0)
    {
        cout << "Wrong data" << endl;
        return false;
    }
    return true;
}

// Ôóíêö³ÿ, âèçíà÷åíà â çàâäàíí³
double print(double n, double x)
{

	double i = 0;
	double j, p, y;
	y = 1;
	if (x < 0)

	{
		if (n < 4) { cout << "ERROR" << endl; }
		
			y = 1;

			for (double j = 2; j <= (n - 2); j++)
			{
				y *= (j + x);

			}
	}
	if (x >= 0)
	{
		y = 0;
		 for (int i=0; i<=n; i++)
		{
			j = 0;
			p = 1;
			do
			{
				p *= x + i + (j * j);
				j++;
			} while (j < (n - 1));
			y += p;
			i++;
		}
	}
	return y;
}


// Âèâåäåííÿ çíà÷åíü àðãóìåíò³â ³ ôóíêö³¿ íà ³íòåðâàë³ ç âèçíà÷åíèì êðîêîì
void printInALoop(double n, double a, double h, double b, double x)
{
	cout << "Want to write result to a file (1-yes 0-no)";
	int s;
	cin >> s;
	ofstream fout("oipz3.txt", ios::app);
	fout << "Result: " << endl;
    for (x = a; x <= b; x += h)
    {
        cout <<"x: "<< x << " y is " << print(n, x) << endl;
		if (s == 1)
		{

			fout << "x= " << x << ", y= " << print(n, x) << ", n= " << n << endl;
		}
		else if (s == 0)
		{
			cout << "end" << endl;
		}
    }
	fout.close();
}

int main()
{

    double n, b, h, a, x;
	cout << "Please write data in file" << endl;
	cout << "First number is n, second - first gap, third - second gap, fourth - step" << endl;
	

    if (input(n, a, b, h, x))
    {
        printInALoop(n, a, h, b, x);
        return 0;
    }
	else 
	{ 
		return -1; 
	}

}
