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
	
	for (size_t i = 0; i < spells.size(); ++i)
	{
		delete spells[i];
	}
	spells.clear();
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

void Warlock::learnSpell(ASpell *spell)
{
	if (spell)
		spells.push_back(spell->clone());
}

void Warlock::forgetSpell(std::string spellName)
{
	for (size_t i = 0; i < spells.size(); ++i)
	{
		if (spells[i]->getName() == spellName)
		{
			delete spells[i];
			spells.erase(spells.begin() + i );
			return ;
		}
	}
	return ;
}

void Warlock::launchSpell(std::string spellName, const ATarget &target)
{
	for (size_t i = 0; i < spells.size(); ++i)
	{
		if (spells[i]->getName() == spellName)
		{
			spells[i]->launch(target);
			return ;
		}
	}
	return ;
}

