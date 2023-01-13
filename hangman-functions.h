#include<iostream>
#include<vector>
#include "hangman_functions.h"

using namespace std;
int main() 
{
	greet();

	string codeword = "codingcleverly";
	string answer = "_____________";
	int misses = 0;
	vector<char> incorrect;
	bool guess = false;
	char letter;


	while (answer != codeword && misses < 7) {
		display_misses(misses);
	}

	return 0;
}
