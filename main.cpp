#include<iostream>
#include<string>
#include"Sequence.h"
using namespace std;

int main()
{
	Sequence p("dna.txt");
	int a=p.length();
	cout << a << endl;
	int b=p.numberOf('T');
	cout << b << endl;
	string c=p.longestConsecutive();
	cout << c << endl;
	string d=p.longestRepeated();
	cout << d << endl;
	return 0;
}
