


#ifndef FIXED_H
# define FIXED_H


class Fixed
{
	private :
		int value;
		static const int f = 8;
	public :
		Fixed( void );
		Fixed(Fixed &f);
		~Fixed(void);
		Fixed& operator=(const Fixed& f);
		int getRawBits(void) const;
		void setRawBits(int const rax);
};

#endif 
