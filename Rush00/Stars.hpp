
#ifndef STARS_HPP
# define STARS_HPP 

# include "Enemy.hpp"

class Stars : public Enemy
{
	public:
		Stars();
		~Stars();
		Stars(int width, int hight);
		Stars(Stars const &src);
    
		Stars 	&operator=(Stars const &rhs);

		void	move(void);
};

#endif
