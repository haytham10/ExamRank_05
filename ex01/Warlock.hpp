#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <iostream>
#include <string>
#include "ASpell.hpp"
#include "ATarget.hpp"
#include <vector>

class Warlock
{
	private:
		std::string name;
		std::string title;
		std::vector<ASpell*> spells;
	
	public:
		Warlock(const std::string &name, const std::string &title);
		~Warlock();

		const std::string &getName() const;
		const std::string &getTitle() const;
		void	introduce() const;
		void	setTitle(const std::string &nTitle);

		void	learnSpell(ASpell *spell);
		void	forgetSpell(std::string spellName);
		void	launchSpell(std::string spellName, const ATarget &target);

};

#endif
