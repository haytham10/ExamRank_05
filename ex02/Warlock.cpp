#include "Warlock.hpp"

Warlock::Warlock(const std::string &name, const std::string &title)
{
	this->name = name;
	this->title = title;

	std::cout << getName() << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock()
{
	std::cout << getName() << ": My job here is done!" << std::endl;
}

const std::string& Warlock::getName() const
{
	return this->name;
}

const std::string& Warlock::getTitle() const
{
	return this->title;
}

void    Warlock::setTitle(const std::string &nTitle)
{
        this->title = nTitle;
}

void    Warlock::introduce() const
{
        std::cout << getName() << ": I am " << getName() << ", " << getTitle() << "!" << std::endl;
}

void   Warlock::learnSpell(ASpell *spell)
{
	spellbook.learnSpell(spell);
}

void   Warlock::forgetSpell(std::string spellName)
{
	spellbook.forgetSpell(spellName);
}

void   Warlock::launchSpell(std::string spellName, const ATarget &target)
{
	ASpell *spell = spellbook.createSpell(spellName);
	if (spell)
		spell->launch(target);
}
