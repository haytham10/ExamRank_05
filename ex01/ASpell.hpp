#ifndef ASPELL_HPP
#define ASPELL_HPP

#include <iostream>
#include <string>
#include "ATarget.hpp"

class ATarget;

class ASpell
{
	private:
		std::string name;
		std::string effects;

	public:
		ASpell(const std::string &name, const std::string &effects);
		virtual ~ASpell();

		std::string getName() const;
		std::string getEffects() const;

		void launch(const ATarget &target) const;

		virtual ASpell *clone() const = 0;
};

#endif
