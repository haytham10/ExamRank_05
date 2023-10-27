#include "SpellBook.hpp"

SpellBook::SpellBook () {}

SpellBook::~SpellBook () {}

void SpellBook::learnSpell(ASpell *spell)
{
	if (spell)
		spells.push_back(spell->clone());
}

void SpellBook::forgetSpell(const std::string &spellName)
{
	for (size_t i = 0; i < spells.size(); ++i)
	{
		if (spells[i]->getName() == spellName)
		{
			delete spells[i];
			spells.erase(spells.begin() + i);
			return ;
		}
	}
	return ;
}

ASpell* SpellBook::createSpell(const std::string &spellName)
{
	for (size_t i = 0; i < spells.size(); ++i)
	{
		if (spells[i]->getName() == spellName)
			return (spells[i]->clone());
	}
	return (NULL);
}