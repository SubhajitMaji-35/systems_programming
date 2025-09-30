#include <stdio.h>

// TODO: Define the struct named complex appropriately

struct complex {
	double real;
	double imag;
};

// Avoids the need to type `struct complex` each time
typedef struct complex mycomplex;


mycomplex add(const mycomplex c1, const mycomplex c2){
	// TODO: Complete the code
	
	mycomplex sum;
	sum.real = c1.real + c2.real;
	sum.imag = c1.imag + c2.imag;
	return sum;
}

mycomplex subtract(const mycomplex c1, const mycomplex c2){
	// TODO: Complete the code
	
	mycomplex diff;
	diff.real = c1.real - c2.real;
	diff.imag = c1.imag - c2.imag;
	return diff;
}

mycomplex multiply(const mycomplex c1, const mycomplex c2){
	// TODO: Complete the code
	
	mycomplex mult;
	mult.real = c1.real * c2.real - c1.imag * c2.imag;
	mult.imag = c1.real * c2.imag + c1.imag * c2.real;
	return mult;
}

mycomplex divide(const mycomplex c1, const mycomplex c2){
	// TODO: Complete the code
	
	mycomplex div;
	mycomplex temp, numerator;
	temp.real = c2.real;
	temp.imag = -c2.imag;
	
	numerator = multiply(c1,temp);
	double denominator = c2.real * c2.real + c2.imag * c2.imag;

	div.real = numerator.real/denominator;
	div.imag = numerator.imag/denominator;
	return div;
}

void print_complex(const mycomplex c){
	// TODO: Complete the code
	
	printf("%.4lf+%.4lfj\n", c.real, c.imag);
}

int main()
{
	mycomplex x, y, result;

	scanf("%lf %lf %lf %lf", &x.real, &x.imag, &y.real, &y.imag);

	result = add(x,y);
	printf("Sum: ");
	print_complex(result);

	result = subtract(x,y);
	printf("Difference: ");
	print_complex(result);

	result = multiply(x,y);
	printf("Product: ");
	print_complex(result);

	result = divide(x,y);
	printf("Division: ");
	print_complex(result);

	// END	
	//Do not add/modify anything below this line
	//Print the answer
	return 0;
}

