#include "permutator.h"
#include <string>
#include <fstream>
#include <algorithm>
#include <iostream>

using namespace std;

fstream doc1;
fstream doc2;
fstream doc3;
string text1;
string text2;
string text3;

void permutator::Display()
{
	cout << "******************************************" << endl;
	cout << "Welcome " << endl;
	cout << "Enter two words" << endl;
	cout << "******************************************" << endl;
}
void permutator::Input_seed()
{


	doc1.open("doc1.txt");
	if (!doc1)
	{
		cout << "not available\n";
	}
	else
	{
		getline(cin, text1);
		doc1 << text1;
	}

	doc2.open("doc2.txt");
	if (!doc2)
	{
		cout << "not available\n";
	}
	else
	{
		getline(cin, text2);
		doc2 << text2;
	}
}
void permutator::Word_permutator()
{
	text3 = text1 + text2;
	sort(text3.begin(), text3.end());

	doc3.open("doc3.txt");
	if (doc3.is_open())
	{
		do
		{
			doc3 << text3 << endl;
		} while (next_permutation(text3.begin(), text3.end()));
	}

}