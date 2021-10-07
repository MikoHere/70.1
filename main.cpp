#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

class calki{
	public:
		double loop();
		double f (double x);
		double g (double x);
};
double calki::f(double x)
{
	return ((x*x*x*x)/500) - ((x*x)/200) - 3.0/250;
}
double calki::g(double x)
{
	return (-(x*x*x)/30) + x/20 + 1.0/6;
}

double calki::loop()
{
	double sum  = 0;
	double sum2 = 0;
	double x = 2;
	double szer = 0.000001;
	while (x<10)
	{
		sum += szer*f(x);
		sum2 += szer*g(x);
		x += szer;
	}
	return sum - sum2;
	
}

int main(int argc, char** argv) {
	
	calki c;
	cout<<c.loop();
	return 0;
}
