#include <iostream>
#include "Chromosome.h"
#include "GeneSequencer.h"
using namespace std;

class ChromosomePair
{

  public:
	// default constructor

	ChromosomePair();

	// outputs genotype which is each dominant allele in each gene

	void AnalyzeGenotype();

	// configures this chromosome with data from filestream 'ifs'

	void InputFromFile(ifstream &ifs);

	// writes the state data from this chromosome to filestream 'ofs'

	void OutputToFile(ofstream &ofs);

	// adds a new Gene object 'g' to a collection in this object

	void AddGene(Gene g);

	// returns a Gene object that matches a Gene with name 'n'

	Gene FindGene(string n);

	// returns a chromosome that is a recombination of one Allele from each of two genes - random selection

	ChromosomePair operator+(ChromosomePair rhs);

	bool RunUnitTests();

  private:
	vector<Gene> genes;

	string fileName;
};
