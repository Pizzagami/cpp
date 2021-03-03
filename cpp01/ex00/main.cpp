#include "pony.class.hpp"

int     main(void)
{
	std::string pony_stack;
	std::string pony_heap;

	std::cout << "Entrez le noms du premier poney : ";
	while (pony_stack.length() < 1)
		std::getline(std::cin, pony_stack);
	std::cout << "Entrez le noms du deuxieme poney : ";
	while (pony_heap.length() < 1)
		std::getline(std::cin, pony_heap);
	ponyOnTheStack(pony_stack);
	ponyOnTheHeap(pony_heap);
	return 0;
}
