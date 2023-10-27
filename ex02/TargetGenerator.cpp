#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator() {}

TargetGenerator::~TargetGenerator()
{
	for (size_t i = 0; i < this->targets.size(); i++)
		delete this->targets[i];

	this->targets.clear();
}

void TargetGenerator::learnTargetType(ATarget *target)
{
	for (size_t i = 0; i < this->targets.size(); i++)
	{
		if (this->targets[i]->getType() == target->getType())
			return ;
	}
	this->targets.push_back(target->clone());
}

void TargetGenerator::forgetTargetType(const std::string &targetName)
{
	for (size_t i = 0; i < this->targets.size(); i++)
	{
		if (this->targets[i]->getType() == targetName)
		{
			delete this->targets[i];
			this->targets.erase(this->targets.begin() + i);
			return ;
		}
	}
}

ATarget *TargetGenerator::createTarget(const std::string &targetName)
{
	for (size_t i = 0; i < this->targets.size(); i++)
	{
		if (this->targets[i]->getType() == targetName)
			return (this->targets[i]->clone());
	}
	return (NULL);
}
