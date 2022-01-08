#include <iostream>
using namespace std;


int main(void) {

	string word;
	cout << "Please enter the word that you want to check it if it palindrome or not: ";
	cin >> word;

	char reverseWord[sizeof(word)] = " ";

	for(int i = 0; i < word.length(); i++){
	reverseWord[i] = word[word.length() - 1 - i];
	}

	if (reverseWord == word) {
		cout << "This word is palindrome.";
	}
	else {
		cout << "This word is not palindrome.\n";
	}


	return 0;
}
