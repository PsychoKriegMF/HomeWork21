#include <iostream>

void p_swap(int* num1, int* num2) {
	int tmp = *num1;
	*num1 = *num2;
	*num2 = tmp;
}


int main() {
	setlocale(LC_ALL, "ru");
	std::cout << "Свап через указатели.\n";
	int x, y;
	std::cout << "Введите 2 числа -> ";
	std::cin >> x >> y;
	int* px = &x;
	int* py = &y;
	std::cout << "x = " << x << ",y = " << y << std::endl;
	p_swap(px,py);
	std::cout << "Махнули местами значения =)\n";
	std::cout << "Теперь х = " << x << ", y = " << y << std::endl;


	return 0;
}