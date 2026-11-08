#include <iostream>
#include <string>
#include <bitset>
#include <vector>

int main() {
	std::string original = "Hello";
	char key = 'K';
	std::vector<char> keys_arr;
	int it{};

	std::cout << "original word bits:\n" << std::endl;

	for (char c : original) {
		std::cout << std::bitset<8>(c) << std::endl;
		keys_arr.push_back(c);
	}

	std::cout << "\nkey: " << '\"' << key << '\"' << ": " << std::bitset<8>(key) << std::endl;

	std::cout << "\nencrypted word bits:\n" << std::endl;

	it = (it > 0) ? 0 : it;

	for (char& enc : original) {
		enc = key ^ enc;
		std::cout << std::bitset<8>(keys_arr[it]) << " >> ";
		std::cout << std::bitset<8>(enc) << std::endl;
		it++;
	}

	return 0;
}
