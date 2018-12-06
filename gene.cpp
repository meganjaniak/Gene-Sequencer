#include "gene.h"
#include "allele.h"
#include <iostream>
#include <fstream>

using namespace std;
string Gene::getName()
{
	return geneName;
}

void Gene::setName(string newGeneName)
{
	geneName = newGeneName;
}

string Gene::getTrait()
{
	return traitType;
}

void Gene::setTrait(string newTrait)
{
	traitType = newTrait;
}

Gene::Gene()
{
}
Gene::Gene(Allele a, Allele b)
{
	AlleleA = a;
	AlleleB = b;
}

Allele Gene::getAlleleA()
{
	return AlleleA;
}

Allele Gene::getAlleleB()
{
	return AlleleB;
}

Allele Gene::GetExpressedTrait()
{
	if (AlleleA.getType() == "Dominant")
	{
		return AlleleA;
	}
	else
	{
		return AlleleB;
	}
}

void Gene::WriteToFile(string myFileString)
{
	ofstream file;
	file.open(myFileString);
	if (file.good())
	{

		file << getName();
		file << ", ";
		file << getTrait();
		file << ",";
		file << getAlleleA().getName(); //STILL DOESNT WORK
		file << ", ";
		file << getAlleleA().getType(); //ALSO DOESNT WORK
		file << ",";
	}
}
