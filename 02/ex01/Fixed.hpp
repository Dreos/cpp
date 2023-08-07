
#ifndef FIXED_H
# define FIXED_H


class Fixed
{
	private :
		int value;
		static const int f = 8;
	public :
		Fixed( void );
		Fixed(Fixed const &f);
		Fixed(const int i);
		Fixed(const float f);

		~Fixed(void);

		Fixed& operator=(const Fixed& f);

		float toFloat(void) const;
		int toInt(void) const;
		int getRawBits(void) const;
		void setRawBits(int const rax);
};

std::ostream &operator<<(std::ostream& os ,const Fixed& f);

#endif 
