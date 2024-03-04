#include<iostream>
#include<functional>


int main() {
	setlocale(LC_ALL, "ru");

	double a, b;
	std::cout << "Введите два числа: ";
	std::cin >> a >> b;

	std::cout << "Выберите действие('+','-','*','/'):\n";
	char choice;
	std::cin >> choice;
	double result;
	switch (choice) {
	case '+':
		result = [](double a, double b)->double { return a + b; }(a,b);
		std::cout << "Сумма:" << result << std::endl;
		break;
	case '-':
		result = [](double a, double b)->double { return a - b; }(a, b);
		std::cout << "Разность:" << result << std::endl;
		break;
	case '*':
		result = [](double a, double b)->double { return a * b; }(a, b);
		std::cout << "Произведение:" << result << std::endl;
		break;
	case '/':
		result = [](double a, double b)->double { return a / b; }(a, b);
		std::cout << "Делимое:" << result << std::endl;
		break;
	default:
			std::cout << "Некорретный выбор операции.";

	}



	return 0;
}