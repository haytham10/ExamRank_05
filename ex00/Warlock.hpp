#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <iostream>

class Warlock
{
	private:
		std::string name;
		std::string title;

	public:
		Warlock(const std::string &name, const std::string &title);
		~Warlock();

		void	setTitle(const std::string &newTitle);
		const std::string &getName() const;
		const std::string &getTitle()const ;

		void introduce() const;
};

#endif