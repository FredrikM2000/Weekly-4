#include <iostream>
#include <string>
#include <stdio.h>
#include <conio.h>
#include <ctime>
#include <cstdlib>

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
	int n = 1;
	
	bool win = false;

	do {
		
		arr[n] = 'O';
		std::cout << " |";
		for (int u = 1; u < sizeof(arr); u++) {
			//std::cout << "|";
			
			//std::cout << "|";
			if (u % 10 == 0) {
				std::cout << "\n";
			}
			std::cout << arr[u];
			std::cout << "|";
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

		if (n <= 0) {
			n = 0;
		}
		if (n >= 100) {
			n = 100;
		}

		if (arr[n] == '/') {
			n -= 10;
		}
		if (n <= 0) {
			n = 0;
		}
		if (n >= 100) {
			n = 100;
		}
		if (arr[n] == '\\') {
			n += 10;
		}
		if (arr[n] == 'G') {
			win = true;
		}
		if (n <= 0) {
			n = 0;
		}
		if (n >= 100) {
			n = 100;
		}
	

		system("cls");
	} while (win == false);
	exit(0);
}

struct people {
	std::string name = "0";
	int phNumber = 0;
} p1, p2, p3, p4, p5, p6, p7, p8, p9, p10;
void printout() {
	std::cout << p1.name << "|" << p1.phNumber << "\n";
	std::cout << p2.name << "|" << p2.phNumber << "\n";
	std::cout << p3.name << "|" << p3.phNumber << "\n";
	std::cout << p4.name << "|" << p4.phNumber << "\n";
	std::cout << p5.name << "|" << p5.phNumber << "\n";
	std::cout << p6.name << "|" << p6.phNumber << "\n";
	std::cout << p7.name << "|" << p7.phNumber << "\n";
	std::cout << p8.name << "|" << p8.phNumber << "\n";
	std::cout << p9.name << "|" << p9.phNumber << "\n";
	std::cout << p10.name << "|" << p10.phNumber << "\n";
}

void task3() {
	char answer;
	std::string pname;
	int pPhNumber;
	

	//I know this part gets really messy, but I could not figure out how to loop this

	std::cout << "Add new person/ print information/ exit program(a/p/e) : ";
	std::cin >> answer;

	if (answer == 'a') {
		std::cout << "Name : ";
		std::getline(std::cin, pname);
		std::cin >> pname;
		std::cout << "Phone number : ";
		std::cin >> pPhNumber;

		p1 = { pname, pPhNumber };
	} 
	//p1
	else if (answer == 'p') {
		printout();
	}
	else if (answer == 'e') {
		exit(0);
	}
		
	std::cout << "Add new person/ print information/ exit program(a/p/e) : ";
	std::cin >> answer;

	if (answer == 'a') {
		std::cout << "Name : ";
		std::getline(std::cin, pname);
		std::cin >> pname;
		std::cout << "Phone number : ";
		std::cin >> pPhNumber;

		p2 = { pname, pPhNumber };
	}
	//p2
	else if (answer == 'p') {
		printout();
	}
	else if (answer == 'e') {
		exit(0);
	}
	
	std::cout << "Add new person/ print information/ exit program(a/p/e) : ";
	std::cin >> answer;

	if (answer == 'a') {
		std::cout << "Name : ";
		std::getline(std::cin, pname);
		std::cin >> pname;
		std::cout << "Phone number : ";
		std::cin >> pPhNumber;

		p3 = { pname, pPhNumber };
	}
	//p3
	else if (answer == 'p') {
		printout();
	}
	else if (answer == 'e') {
		exit(0);
	}
	
	std::cout << "Add new person/ print information/ exit program(a/p/e) : ";
	std::cin >> answer;

	if (answer == 'a') {
		std::cout << "Name : ";
		std::getline(std::cin, pname);
		std::cin >> pname;
		std::cout << "Phone number : ";
		std::cin >> pPhNumber;

		p4 = { pname, pPhNumber };
	}
	//p4
	else if (answer == 'p') {
		printout();
	}
	else if (answer == 'e') {
		exit(0);
	}

	std::cout << "Add new person/ print information/ exit program(a/p/e) : ";
	std::cin >> answer;

	if (answer == 'a') {
		std::cout << "Name : ";
		std::getline(std::cin, pname);
		std::cin >> pname;
		std::cout << "Phone number : ";
		std::cin >> pPhNumber;

		p5 = { pname, pPhNumber };
	}
	//p5
	else if (answer == 'p') {
		printout();
	}
	else if (answer == 'e') {
		exit(0);
	}

	std::cout << "Add new person/ print information/ exit program(a/p/e) : ";
	std::cin >> answer;

	if (answer == 'a') {
		std::cout << "Name : ";
		std::getline(std::cin, pname);
		std::cin >> pname;
		std::cout << "Phone number : ";
		std::cin >> pPhNumber;

		p6 = { pname, pPhNumber };
	}
	//p6
	else if (answer == 'p') {
		printout();
	}
	else if (answer == 'e') {
		exit(0);
	}
	std::cout << "Add new person/ print information/ exit program(a/p/e) : ";
	std::cin >> answer;

	if (answer == 'a') {
		std::cout << "Name : ";
		std::getline(std::cin, pname);
		std::cin >> pname;
		std::cout << "Phone number : ";
		std::cin >> pPhNumber;

		p7 = { pname, pPhNumber };
	}
	//p7
	else if (answer == 'p') {
		printout();
	}
	else if (answer == 'e') {
		exit(0);
	}
	std::cout << "Add new person/ print information/ exit program(a/p/e) : ";
	std::cin >> answer;

	if (answer == 'a') {
		std::cout << "Name : ";
		std::getline(std::cin, pname);
		std::cin >> pname;
		std::cout << "Phone number : ";
		std::cin >> pPhNumber;

		p8 = { pname, pPhNumber };
	}
	//p8
	else if (answer == 'p') {
		printout();
	}
	else if (answer == 'e') {
		exit(0);
	}
	std::cout << "Add new person/ print information/ exit program(a/p/e) : ";
	std::cin >> answer;

	if (answer == 'a') {
		std::cout << "Name : ";
		std::getline(std::cin, pname);
		std::cin >> pname;
		std::cout << "Phone number : ";
		std::cin >> pPhNumber;

		p9 = { pname, pPhNumber };
	}
	//p9
	else if (answer == 'p') {
		printout();
	}
	else if (answer == 'e') {
		exit(0);
	}
	std::cout << "Add new person/ print information/ exit program(a/p/e) : ";
	std::cin >> answer;

	if (answer == 'a') {
		std::cout << "Name : ";
		std::getline(std::cin, pname);
		std::cin >> pname;
		std::cout << "Phone number : ";
		std::cin >> pPhNumber;

		p10 = { pname, pPhNumber };
	}
	//p10
	else if (answer == 'p') {
		printout();
	}
	else if (answer == 'e') {
		exit(0);
	}
}

int dices[5];

void rollDice() {
	std::srand(static_cast<unsigned int>(std::time(nullptr)));
	for (int d = 0; d <= 4; d++) {
		dices[d] = rand() % 6 + 1;
	}
	
}

void DiceTask() {
	char diceAnswer = ' ';
	bool endprocess = false;
	int keep;
	bool keepdice1 = false;
	bool keepdice2 = false;
	bool keepdice3 = false;
	bool keepdice4 = false;
	bool keepdice5 = false;
	int keepdice[5];
	int scounter = 0;
	bool pair = false;

	do {
		rollDice();
		if (keepdice1 == true) {
			dices[0] = keepdice[0];
		}
		if (keepdice2 == true) {
			dices[1] = keepdice[1];
		}
		if (keepdice3 == true) {
			dices[2] = keepdice[2];
		}
		if (keepdice4 == true) {
			dices[3] = keepdice[3];
		}
		if (keepdice5 == true) {
			dices[4] = keepdice[4];
		}

		std::cout << "Your current dices : ";
		std::cout << "|";
		for (int r = 0; r <= 4; r++) {
			std::cout << dices[r] << "|";
		}

		std::cout << "\nWould you like to halt process(h)/Roll again(r)/Keep dices(k)\n";
		std::cin >> diceAnswer;

		if (diceAnswer == 'h') {

			scounter = 0;
			for (int s = 0; s <= 4; s++) {
				if (dices[s] == 6) {
					scounter += 1;
				}
			}

			for (int x = 0; x <= 4; x++) {
				for (int z = x + 1; z <= 4; z++) {
					if (dices[x] == dices[z]) {
						pair = true;
					}
				}
			}


			//calculate
			endprocess = true;
		}
		else if (diceAnswer == 'r') {
			endprocess = false;
			std::cout << "You roll again";
		}
		else if (diceAnswer == 'k') {

			for (int l = 0; l <= 4; l++) {
				std::cout << "(" << (l + 1) << ")" << dices[l] << "\n";
			}

			std::cout << "What dice would you like to keep? : ";
			std::cin >> keep;

			keepdice[keep - 1] = dices[keep - 1];
			switch (keep){
			case (1):
				keepdice1 = true;
				break;
			case (2):
				keepdice2 = true;
				break;
			case (3):
				keepdice3 = true;
				break;
			case (4):
				keepdice4 = true;
				break;
			case (5):
				keepdice5 = true;
				break;
			default:
				std::cout << "Not valid";
			}
			std::cout << "You roll again\n";
		}


	} while (endprocess == false);

	//show result
	std::cout << "You had " << scounter << " sixes\n";
	if (pair == true) {
		std::wcout << "Nice";
	}
	//for loop
	//if 6 counter ++
	//if 5counter == 2 5counter = 0 pair = true
}



int main() {
	//task1();
	//task2();
	//task3();
	DiceTask();
}
