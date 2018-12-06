#include "Chromosome.h"
#include "gene.h"
#include "allele.h"
#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

void Chromosome::AddGene(Gene g)
{
	genes.push_back(g);
}

void Chromosome::OutputToFile(string myFileString)
{
	ofstream file;
	file.open(myFileString);
	if (file.good())
	{

		for (unsigned int i = 0; i < genes.size(); i++)
		{
			file << genes.at(i).getName();
			file << ", ";
			file << genes.at(i).getTrait();
			file << ", ";
			file << genes.at(i).getAlleleA().getName();
			file << ", ";
			file << genes.at(i).getAlleleA().getType();
			file << ", ";
			file << genes.at(i).getAlleleA().getSequence();
			file << ", ";
			file << genes.at(i).getAlleleB().getName();
			file << ", ";
			file << genes.at(i).getAlleleB().getType();
			file << ", ";
			file << genes.at(i).getAlleleB().getSequence();
		}
	}
	file.close();
}
void Chromosome::AnalyzeGenotype()
{
	// loop through collection of genes
	for (unsigned int i = 0; i < genes.size(); i++)
	{
		cout << "Name: " << genes.at(i).getName() << endl;
		cout << "Genetic Trait:	" << genes.at(i).getTrait() << endl;
		cout << "Expressed Allele: " << genes.at(i).GetExpressedTrait().getName() << "-Dominant" << endl;
		cout << "Nucleotide Sequence: " << genes.at(i).GetExpressedTrait().getSequence() << endl;
	}
}

void Chromosome::InputFromFile(string myInput)
{
	ifstream file;
	string geneData, name, trait, variationA, typeA, sequenceA, variationB, typeB, sequenceB;

	while (file.good())
	{

		getline(file, geneData);

		ifstream isA(geneData);

		getline(isA, name, ',');
		getline(isA, trait, ',');
		getline(isA, variationA, ',');
		getline(isA, typeA, ',');
		getline(isA, sequenceA, ',');
		Allele alleleA(variationA, typeA, sequenceA);

		getline(isA, variationB, ',');
		getline(isA, typeB, ',');
		getline(isA, sequenceB, ',');
		Allele alleleB(variationB, typeB, sequenceB);

		Gene newGene(alleleA, alleleB);
		newGene.setName(name);
		newGene.setTrait(trait);

		genes.push_back(newGene);
	}
}

/*Chromosome Chromosome::operator+(Chromosome rhs)
{

}*/