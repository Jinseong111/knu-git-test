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
	cout << "�簢���Ǹ�����" << rect.getArea() << " �簢���� ���Ǵ�"<< rect.getArea2()<<endl;
}