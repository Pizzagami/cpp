#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

class MateriaSource
{
	public:
		MateriaSource(void);
		MateriaSource(const MateriaSource & src);
		virtual	~MateriaSource();

		MateriaSource &	operator=(const MateriaSource & rhs);
	private:
};

#endif
