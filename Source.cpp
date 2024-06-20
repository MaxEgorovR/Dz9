#include "LinkedList.h"

int main() {
	int choise, elem;
	LinkedList<int>* ll = new LinkedList<int>();
	while (true) {
		std::cout << "1 - Add element\n2 - Remove element\n3 - Search elem\n4 - Print list\nElse - Exit\n";
		std::cin >> choise;
		if (choise == 1) {
			std::cout << "Enter the elem:";
			std::cin >> elem;
			ll->add(elem);
		}
		else if (choise == 2) {
			std::cout << "Enter the elem:";
			std::cin >> elem;
			ll->remove(elem);
		}
		else if (choise == 3) {
			std::cout << "Enter the elem:";
			std::cin >> elem;
			ll->find(elem);
		}
		else if (choise == 4) {
			ll->printList();
		}
		else {
			break;
		}
	}
}