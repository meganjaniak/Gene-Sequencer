
#include "allele.h"
#include <iostream>
using namespace std;
//NAME
string Allele::getName()
{
	return variantName; //not surviving
}

void Allele::setName(string newName)
{
	variantName = newName;
}

//TYPE
string Allele::getType()
{
	return variantType;
}

void Allele::setType(string newType)
{
	variantType = newType;
}

//SEQUENCE
string Allele::getSequence()
{
	return nucleotideSequencer;
}

void Allele::setSequence(string newSequence)
{
	nucleotideSequencer = newSequence;
}

Allele::Allele()
{
}
Allele::Allele(string seq, string name, string type)
{
	variantType = type;
	nucleotideSequencer = seq;
	variantName = name;
}