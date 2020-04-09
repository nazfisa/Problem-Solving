
#include <iostream>
#include <iomanip>
#include <cmath>
#include <math.h>
#include <fstream>

const double pi = 4*atan(1);

double f(double y)
{
	double a = 1 + y*y;
	return a;
}


int main()
{
	double h, y, m, N, k1, k2;
	int i = 0;
	printf("\nPlease enter an integer \n");
	std::cin >> N;
	y = 0;
	h = (pi/4)/N;

	while (i < N)
	{
		k1 = h*f(y);
		k2 = h*f(y + k1/2);
		y = y + k2;
		i++;
		printf("%f\n",y);

	}


}
