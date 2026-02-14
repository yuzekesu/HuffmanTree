// HuffmanTree.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "HuffmanTree.h"
#include <iostream>

int main() {
	std::vector<char> symbols = { 'A', 'B', 'C', 'D', 'E' };
	std::vector<int> lengths = { 2,   2,   3,   3,   4 };
	HuffmanTree<unsigned, char, int> tree(symbols, lengths);
	std::cout << tree.Decode(0) << tree.Decode(1) << tree.Decode(4) << tree.Decode(345);
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
