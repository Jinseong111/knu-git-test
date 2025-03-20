#include <iostream>
using namespace std;

class Circle {
public:
	int radius;
	double getArea();
	double getArea2();
	double getArea3();

	int innerRadius;
	int outerRadius;

};



double Circle::getArea() {

	return 3.14 * radius * radius;
	
	
}
double Circle::getArea2() {

	
	return 3.14 * outerRadius * outerRadius;

}
double Circle::getArea3() {


	return 3.14 * innerRadius * innerRadius;

}

int main() {
	Circle donut;
	donut.radius = 1;
	double area = donut.getArea();
	cout << "donut면적은" << area << endl;



	Circle pizza;
	pizza.radius = 30;
	area = pizza.getArea();
	cout << "pizza 면적은" << area << endl;

	Circle donut2;
	donut2.innerRadius = 1;
	donut2.outerRadius = 2;
	area = donut2.getArea2();
	double area2 = donut2.getArea2();
	double area3 = donut2.getArea3();

	cout << "donut2의 면적은" << area2-area3 << endl;


}