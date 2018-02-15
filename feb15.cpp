#include <iostream>
using namespace std;






int main() {
	char input = 'a';
int room = 1;
	while (input != 'q') {
		switch (room) {
		case 1:
			cout << "your in room one you can move s";
			cin >> input;
			if (input == 's')
				room = 2;
			break;
		case 2:
			cout << "youre in room two move n or west";
			cin >> input;

			if (input == 'n')
				room = 1;
			else if (input == 'e')
				room = 3;
			break;

		case 3:
			cout << " haha you fell into a ditch dummy";
			cout << " you are now back in room 3 ";
			cin >> input;
			if (input == 'w')
				room == 2;
			else if (input == 's')
				room = 4;
			break;
			cout << "be careful if you choose wrong you lose" << input << "youve lost";
			







		} //end switch



	} //end while loop







	
} //end main 