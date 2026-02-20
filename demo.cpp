
#include "./code/HuffmanTree.h"
#include <iostream>

int main() {
	std::vector<char> symbols = { 'A', 'B', 'C', 'D', 'E' };
	std::vector<int> lengths = { 2,   2,   3,   3,   4 }; // 0000, 0010, 0001, 0101, 0011
	HuffmanTree<unsigned, char, int> tree(symbols, lengths);
	if (tree.Decode(99, 0) == std::nullopt) {
		std::cout << *tree.Decode(0, 2) << *tree.Decode(2, 2) << *tree.Decode(1, 3) << *tree.Decode(5, 3);
	}
	return 0;
}
