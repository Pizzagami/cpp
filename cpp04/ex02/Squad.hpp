#ifndef SQUAD_HPP
# define SQUAD_HPP

# include <iostream>
# include "ISquad.hpp" 

typedef struct	s_soldier
{
	ISpaceMarine		*_marine;
	struct	s_soldier	*next;
}				t_soldier;

class Squad : public ISquad
{
	public:

        int getCount() const;
        ISpaceMarine* getUnit(int) const;
        int push(ISpaceMarine*);

        Squad(void);
        virtual ~Squad(void);
        Squad(const Squad &squad);
        Squad(const Squad *squad);
        Squad &operator=(const Squad &squad);

	private:

        t_soldier	*_soldier;
        int			_count;
};

#endif