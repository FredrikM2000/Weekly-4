#include <iostream>
#include <string>
#include <stdio.h>
#include <conio.h>

char converter(char i) {
	return toupper(i);
}

void task1() {
	std::string message;
	std::cout << "Enter a message : ";
	std::getline(std::cin, message);

	for (int i = 0; i < message.size(); i++) {
		message.at(i) = converter(message.at(i));
	}
	std::cout << message;
}

void task2() {

	char arr[100]{};
	arr[20] = '/';
	arr[89] = '\\';
	arr[66] = 'G';
	int n = 0;
	
	bool win = false;

	do {
		arr[n] = 'O';
		for (int u = 0; u < sizeof(arr); u++) {
			std::cout << "|" << arr[u];
			if (u % 10 == 0 && u > 1) {
				std::cout << "\n";
			}
		}

		std::cout << "\nEnter a letter : ";
		char m = _getch();

		arr[n] = ' ';
		switch (m) {
		case('w'):
			n -= 10;
			break;
		case('s'):
			n += 10;
			break;
		case('a'):
			n -= 1;
			break;
		case('d'):
			n += 1;
			break;
		default:
			std::cout << "Not valid";
		}
		if (arr[n] == '/') {
			n -= 10;
		}
		if (arr[n] == '\\') {
			n += 10;
		}
		if (arr[n] == 'G') {
			win = true;
		}

		system("cls");
	} while (win == false);
	exit(0);
}
void task3() {

}
void DiceTask() {

}



int main() {
	//task1();
	task2();
}
