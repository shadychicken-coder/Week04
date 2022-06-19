// Week04.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

using namespace std;
#include <iostream>
#include <string>
#include <fstream>
int main(int argc, char* argv[])
{
	// The executable name and at least one argument?
	if (argc < 2)
	{
		std::cout << "Error with input agrs.." << std::endl;
		return 1;
	}
	// For debugging purposes only
	for (int i = 0; i < argc; i++)
	{
		std::cout << i << ":" << argv[i] << endl;
	}
	ifstream inFile;
	inFile.open(argv[1]);
	if (!inFile)
	{
		cout << "Error with file name.." << endl;
		return 1;
	}

	else {
		//Welcome Letter
		cout << string(55, '*') << endl;
		cout << string(10, '*') << " Welcome to My Leter Count Program " << string(10, '*') << endl;
		cout << string(55, '*') << endl;

		//initializing variables
		string line;
		int A = 0;
		int E = 0;
		int O = 0;
		int I = 0;
		int U = 0;
		int D = 0;
		int J = 0;
		int F = 0;
		int vowels = 0;
		
		//While (True) loop to run through the entire document
		while (true) {
			//This loop runs through each line
			while (getline(inFile, line)) {
				//This loop runs through each letter
				for (int i = 0; i < line.length(); i++) {
					//Loop to test letters for vowels, where 'i' is the position of the letter
					if (line.at(i) == 'a' or line.at(i) == 'A') {
						A++;
					}
					else if (line.at(i) == 'e' or line.at(i) == 'E') {
						E++;
					}
					else if (line.at(i) == 'i' or line.at(i) == 'I') {
						I++;
					}
					else if (line.at(i) == 'o' or line.at(i) == 'O') {
						O++;
					}
					else if (line.at(i) == 'u' or line.at(i) == 'U') {
						U++;
					}
					else if (line.at(i) == 'D' or line.at(i) == 'd') {
						D++;
					}
					else if (line.at(i) == 'j' or line.at(i) == 'J') {
						J++;
					}
					else if (line.at(i) == 'f' or line.at(i) == 'F') {
						F++;
					}

				}
			}

			cout << "Analyzing File " << "'" << argv[1] << "'" << endl;

			vowels = A + E + O + I + U;
			cout << "The Number of A's:" << string(20, '.') << A << endl;
			cout << "The Number of E's:" << string(20, '.') << E << endl;
			cout << "The Number of I's:" << string(20, '.') << I << endl;
			cout << "The Number of O's:" << string(20, '.') << O << endl;
			cout << "The Number of U's:" << string(20, '.') << U << endl;
			cout << "The Number of D's:" << string(20, '.') << D << endl;
			cout << "The Number of J's:" << string(20, '.') << J << endl;
			cout << "The Number of F's:" << string(20, '.') << F << endl;


			cout << "The Number of Vowels:" << string(17, '.') << vowels << endl;
			inFile.close();
			return 0;
		}
	}
}



