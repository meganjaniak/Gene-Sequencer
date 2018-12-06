/*	Project:    GENE Sequencer
	Name:       Megan Janiak
    Partner:    n/a
    Class:      CSC 1810 - section 1
*/

#include <iostream>
#include <vector>
#include "allele.h"
#include "gene.h"
#include "Chromosome.h"
#include <fstream>

using namespace std;

int main(int argc, char *argv[])
{
	string newName;
	string newTrait;
	string variant1;
	string variant2;
	string alleleType1;
	string alleleType2;
	string sequence1;
	string sequence2;
	Allele AlleleA(sequence1, variant1, alleleType1);
	Allele AlleleB(sequence2, variant2, alleleType2);
	//Gene Gene1;
	Chromosome Chromosome1;

	int choice = 1;
	int answer = 1;
	cout << "	MENU" << endl;
	cout << "	1 - Create chromosome" << endl;
	cout << "	2 - Analyze chromosome" << endl;
	cout << "	3 - Ouput chromosome to file" << endl;
	cout << "	4 - Input chromosome to file" << endl;
	cout << "	5 - Combine Chromosomes" << endl;
	cout << "	6 - Exit" << endl;

	cout << "Enter Menu Choice:" << endl;
	cin >> choice;

	while (choice < 6)
	{

		if (choice == 1)
		{
			while (answer == 1)
			{

				cout << "What is the name of the new gene? (e.g. TZ458) " << endl;
				cin >> newName;
				//Gene1.setName(newName);

				cout << "What is the gene trait? " << endl;
				cin >> newTrait;
				//Gene1.setTrait(newTrait);

				cout << "What is the allele 1 variant ? " << endl;
				cin >> variant1;

				cout << "What is allele 1 type? " << endl;
				cin >> alleleType1;

				cout << "What is allele 1 nucleotide sequence? " << endl;
				cin >> sequence1;

				cout << "What is the allele 2 variant ? " << endl;
				cin >> variant2;

				cout << "What is allele 2 type? " << endl;
				cin >> alleleType2;

				cout << "What is allele 2 nucleotide sequence? " << endl;
				cin >> sequence2;

				Allele AlleleA(sequence1, variant1, alleleType1);
				Allele AlleleB(sequence2, variant2, alleleType2);
				Gene Gene2(AlleleA, AlleleB);
				Gene2.setName(newName);
				Gene2.setTrait(newTrait);
				Chromosome1.AddGene(Gene2);
				cout << "Would you like to add a new gene? (1 for yes/0 for no) " << endl;
				cin >> answer;
			}
			cout << "Enter next menu choice." << endl;
			cin >> choice;
		}

		else if (choice == 2)
		{
			Chromosome1.AnalyzeGenotype();
			cout << "Enter next menu choice." << endl;
			cin >> choice;
		}
		else if (choice == 3)
		{
			string fileName;
			cout << "What is the name of the file you would like to write to?" << endl;
			cin >> fileName;
			Chromosome1.OutputToFile(fileName);

			cout << "Enter next menu choice." << endl;
			cin >> choice;
		}
		else if (choice == 4)
		{
			string filename;
			cout << "What file would you like to import from?" << endl;
			cin >> filename;
			Chromosome1.InputFromFile(filename);

			cout << "Enter next menu choice." << endl;
			cin >> choice;
		}
		else if (choice == 5)
		{
			cout << "Enter next menu choice." << endl;
			cin >> choice;
		}
	}
	// This causes the program to pause at its completion.
	{
		cin.clear();
		cin.ignore(1000, '\n');
		char c;
		cout << "Thank you, bye. Hit enter to exit:";
		cin.get(c);
	}
	return 0;
}