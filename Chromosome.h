#include "gene.h"
#include "allele.h"
#include <iostream>
#include <vector>
using namespace std;

class Chromosome
{
  private:
	vector<Gene> genes;

  public:
	Chromosome() {}

	void AnalyzeGenotype();
	void InputFromFile(string myInput);
	void OutputToFile(string myFileString);
	void AddGene(Gene g);
	Gene FindGene(string name);
	Chromosome operator+(Chromosome);
	bool RunUnitTests();
};
