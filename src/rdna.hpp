#include <iostream>
#include <string>
#include <random>
using namespace std;

string randDNA(int seed,string bases,int n)
{
	int index = -1; //Variable to store the index of randomly chosen letters. Takes -1 to avoid choosing an index in memory.
	int min = 0;	//starting index.
	int max = bases.size() - 1; //Max input of letters inputted by user - 1 to get correct index.
	string letters = ""; //Variable to hold the indices of the chosen letters, additively.
	
	//condition if users enters an empty string.
	if (bases == "")
	{
		return "";
	}
	
	mt19937 eng1 (seed); //user inputs the seed.
	uniform_int_distribution <> uni(min,max); //uniform distribution of int type.
	
	for (int i = 0; i < n; i++) //Loop going until limit set by the user for the amount of random sequences to generate.
	{
		index = uni(eng1);//made a change here
		letters += bases[index];
	}
	
	return letters;
}

