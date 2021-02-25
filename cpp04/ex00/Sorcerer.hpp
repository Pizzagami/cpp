#ifndef SORCERER_HPP
# define SORCERER_HPP

#include "Victim.hpp"

class Sorcerer
{
	public:

		std::string getname() const;
		std::string gettitle() const;
		void		polymorph( Victim const &victim) const;

		Sorcerer(void);
		Sorcerer(const std::string & name, const std::string & title);
		Sorcerer(const Sorcerer & src);
		virtual	~Sorcerer();

		Sorcerer &	operator=(const Sorcerer & rhs);

	private:

		std::string _name;
		std::string _title;
};

std::ostream	&operator<<(std::ostream &ost, const Sorcerer & sorcerer);

#endif
