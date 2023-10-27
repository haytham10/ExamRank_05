#include "ATarget.hpp"

ATarget::ATarget(const std::string &type) : type(type) {}

ATarget::~ATarget() {}

const std::string& ATarget::getType() const
{
	return this->type;
}

void ATarget::getHitBySpell(const ASpell &spell) const
{
	std::cout << getType() << " has been " << spell.getEffects() << "!" << std::endl;
}
