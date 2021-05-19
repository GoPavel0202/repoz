#include <iostream>




int main(int argc, const char** argv) {//
//3.1
extern const int a;
extern const int b;
extern const double c;
extern const int d;
double i =  a * (b + (c / d));
std::cout << i << std::endl;
//3.2
int x = 25;
const int s = 21;
int f = x - s;
std::cout << f << std::endl;

int i5 = (x > s) ? (f * 2) : 0;
std::cout << i5<< std::endl;
//3.3

//3.4
short field[3][3][3] = {};
	field[0][0][0] = 1;
	field[1][0][0] = 2;
	field[2][0][0] = 3;
	field[1][1][1] = 200;
	short* e = &field[1][1][1];
	
	std::cout <<  field[0][0][0] << " ";
	std::cout <<  field[1][0][0] << " ";
	std::cout <<  field[2][0][0] << " ";
	std::cout << field[1][1][1] << std::endl;
	std::cout << * (field +1 +1 +1 ) << std::endl;
	printf("%p\n", e);
    printf("%d\n", *e);
	return 0;
}