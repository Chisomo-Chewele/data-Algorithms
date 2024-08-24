#include "wrdSelector.h"
#include <string>
#include <iostream>

using namespace std;

void word_selector::wordbreak(int* len, int* index, int* gap, int* choice, string sentence)
{
    *len = sentence.length();
    if (*choice == 1) {
        for (int k = 0; k < *len; k++) {
            cout << sentence[k];
            if (sentence[k] == ' ') {
                break;
            }
        }
    }

    else if (*choice > 1) {
        for (int i = 0; i < *len; i++)
        {
            if (sentence[i] == char(32))
            {
                *gap++;
                *index = i;
                if (*gap == *choice - 1)
                {
                    for (int j = *index + 1; j < *len; j++)
                    {
                        cout << sentence[j];
                        if (sentence[j] == char(32)) {
                            break;
                        }
                    }
                }
            }
        }
    }
}
void word_selector::input(int* choice, string sentnce)
{
    cout << "Enter a sentence\n";
    getline(cin, sentence);
    cout << "Enter the word number you want to select : ";
    cin >> *choice;
}
