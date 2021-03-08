#ifndef CURE_HPP
# define CURE_HPP

class Cure
{
	public:
		Cure(void);
		Cure(const Cure & src);
		virtual	~Cure();

		Cure &	operator=(const Cure & rhs);
	private:
};

#endif
