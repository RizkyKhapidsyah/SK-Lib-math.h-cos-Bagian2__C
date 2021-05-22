// C code to illustrate
// the use of cos function

#include <stdio.h>
#include <math.h>
#include <conio.h>

/*	Source by GeeksForGeeks
	Modified for Learn by Rizky Khapidsyah
	I.D.E: VS19
*/

#define PI 3.14159265

int main() {
	double x, ret, val;

	x = 63.0;
	val = PI / 180.0;
	ret = cos(x * val);

	printf("The cosine of %lf is %lf degrees\n", x, ret);

	x = 98.0;
	val = PI / 180.0;
	ret = cos(x * val);

	printf("The cosine of %lf is %lf degrees\n", x, ret);

	_getch();
	return(0);
}
