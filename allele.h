#include <iostream>
#pragma once

using namespace std;
class Allele
{
  private:
	string nucleotideSequencer;
	string variantName;
	string variantType;

  public:
	Allele();
	Allele(string seq, string name, string type);

	void WriteAlleleToFile(ofstream &);

	string getName();
	string getType();
	string getSequence();
	void setName(string newName);
	void setType(string newType);
	void setSequence(string newSequence);
	bool RunUnitTests();
};