//
// Created by Andrii Lohashchuk on 11/4/17.
//

#ifndef RUSH00_BULLET_HPP
#define RUSH00_BULLET_HPP

class Bullet
{
	public:
		Bullet();
	    Bullet(int width, int hight);
	    Bullet(Bullet const & src);
	    ~Bullet();

	    Bullet			&operator=(Bullet const &rhs);
		int				getX(void);
		int				getY(void);
		char			getDisplay(void);
		void			setX(int x);
		void			setY(int y);
		void			setDisplay(char c);
	    void			move(void);

	private:

	    int				x;
	    float			y;
	    int				width;
	    int				hight;
	    char			display;

};

static int shots		= 0;

#endif //RUSH00_BULLET_HPP
