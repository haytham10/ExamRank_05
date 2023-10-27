#ifndef TARGETGENERATOR_HPP
#define TARGETGENERATOR_HPP

#include <vector>
#include <string>
#include "ATarget.hpp"

class TargetGenerator
{
	private:
		std::vector<ATarget*> targets;

		TargetGenerator(TargetGenerator const &src);
		TargetGenerator &operator=(TargetGenerator const &src);
	
	public:
		TargetGenerator();
		~TargetGenerator();

		void	learnTargetType(ATarget *target);
		void	forgetTargetType(const std::string &targetName);
		ATarget	*createTarget(const std::string &targetName);
};

#endif