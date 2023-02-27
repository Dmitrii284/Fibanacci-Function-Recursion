#include <iostream>
//Факториал 
long long factorial(int num) {
	if (num < 0)// Это условие выхода из рекурсии
		return 0;
	if (num == 0)
		return 1;
	return factorial(num - 1) * num;
}

// Функция Фибоначчи
int fibonacci(int num) {
	if (num == 0)
		return 0;
	if (num == 1)
		return 1;
	return fibonacci(num - 1) + fibonacci(num - 2);
}

int main() {
	setlocale(LC_ALL, "Rus");
	int n;

	//Факториал
	/*std::cout << "Введите число -> ";
	std::cin >> n;
	std::cout << n << "! = " << factorial(n) << "\n\n";*/

	// Фибоначчи
	std::cout << "Введите номер числа Фибоначчи - > ";
	std::cin >> n;
	std::cout << "Число фибоначчи № " << n << ": "<< fibonacci(n)<<	std::endl;




	return 0;
}