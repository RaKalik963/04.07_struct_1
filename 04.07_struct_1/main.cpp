#include <iostream>
#include <Windows.H>
using namespace std;

struct Box
{
	int width;
	int height;
	int x;
	int y;
};
void change_size(Box& rectangle, int newWidth, int newHeight)
{
	rectangle.width = newWidth;
	rectangle.height = newHeight;
}
void move_rect(Box& rectangle, int x, int y)
{
	rectangle.x = x;
	rectangle.y = y;
}
void print_rectangle(Box& rectangle)
{
	int x
}



int main() {
	Box rectangle;
	rectangle.width = 10;
	rectangle.height = 5;
	rectangle.x = 3;
	rectangle.y = 2;

	system("pause");
	return 0;
}