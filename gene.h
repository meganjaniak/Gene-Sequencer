#include <iostream>
#include <fstream>
#include "allele.h"
#pragma once

class Gene
{
  private:
	string geneName;
	string traitType;
	Allele AlleleA;
	Allele AlleleB;

  public:
	Gene();
	Gene(Allele a, Allele b);

	string getName();
	string getTrait();
	void setName(string newGeneName);
	void setTrait(string newTrait);
	Allele getAlleleA();
	Allele getAlleleB();

	void WriteToFile(string myFileString);
	Allele GetExpressedTrait();
	bool RunUnitTests();
};