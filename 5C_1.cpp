// Name: Chetan Gawale
// PRN: 25070123507

#include <iostream>

using namespace std;

int main() {
    char character;

    cout << "Enter a character: ";
    cin >> character;

    char char_array[10] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};

    for(int i = 0; i < sizeof(char_array)/sizeof(char); i++) {
        if (character == char_array[i]) {
            cout << "The given character " << character << " is a vowel" << endl;
            return 0;
        }
    }

    cout << "The given character " << character << " is a consonant" << endl;

    return 0;
}

/* Output

Enter a character: a
The given character a is a vowel

Enter a character: r
The given character r is a consonant

*/
