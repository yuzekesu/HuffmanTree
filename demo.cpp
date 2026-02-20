
#include "./code/HuffmanTree.h"
#include <iostream>

int main() {
	std::vector<char> symbols = { 'A', 'B', 'C', 'D', 'E' };
	std::vector<int> lengths = { 2,   2,   3,   3,   4 }; // huffman: 00, 01, 100, 101, 1100
	HuffmanTree<unsigned, char, int> tree(symbols, lengths);
	if (tree.Decode(99, 0) == std::nullopt) {
		std::cout << *tree.Decode(0, 2) << *tree.Decode(1, 2) << *tree.Decode(4, 3) << *tree.Decode(5, 3) << *tree.Decode(12, 4);
	}
	return 0;
}
