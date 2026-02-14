
#include "./code/HuffmanTree.h"
#include <iostream>

int main() {
	std::vector<char> symbols = { 'A', 'B', 'C', 'D', 'E' };
	std::vector<int> lengths = { 2,   2,   3,   3,   4 };
	HuffmanTree<unsigned, char, int> tree(symbols, lengths);
	std::cout << tree.Decode(0) << tree.Decode(1) << tree.Decode(4) << tree.Decode(5);
	return 0;
}
