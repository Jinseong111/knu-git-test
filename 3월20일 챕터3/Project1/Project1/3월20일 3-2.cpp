#include <iostream> 
using namespace std;
class Rectangle { 
public:
	int width;
	int height;
	int thickness;
	int getArea(); 
	int getArea2();
};
int Rectangle::getArea() { 
	return width * height;
}
int Rectangle::getArea2() {
	return width * height*thickness;
}
int main() {
	Rectangle rect;
	rect.width = 3;
	rect.height = 5;
	rect.thickness = 3;
	cout << "사각형의면적은" << rect.getArea() << " 사각형의 부피는"<< rect.getArea2()<<endl;
}