#ifndef VICTIM_HPP
# define VICTIM_HPP

# include <iostream>

class Victim
{
	public:

		std::string		getname() const;
		virtual void	getPolymorphed() const;

		Victim(void);
		Victim(const std::string &name);	
		Victim(const Victim & src);
		virtual	~Victim();

		Victim &	operator=(const Victim & rhs);

	protected:
		
		std::string _name;
};

std::ostream &operator<<(std::ostream &os, const Victim & victim);

#endif
