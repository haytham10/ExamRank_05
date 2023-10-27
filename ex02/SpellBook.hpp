#ifndef SPELLBOOK_HPP
#define SPELLBOOK_HPP

#include "ASpell.hpp"
#include <vector>

class SpellBook
{
	private:
		std::vector<ASpell*> spells;
	
	public:
		SpellBook();
		~SpellBook();

		void	learnSpell(ASpell *spell);
		void	forgetSpell(const std::string &spellName);
		ASpell	*createSpell(const std::string &spellName);
};

#endif