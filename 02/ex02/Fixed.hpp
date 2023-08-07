
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

		Fixed operator+(const Fixed& f)const ;
		Fixed operator-(const Fixed& f)const ;
		Fixed operator*(const Fixed& f)const ;
		Fixed operator/(const Fixed& f)const ;
		
		int operator>(const Fixed& f)const ;	
		int operator<(const Fixed& f)const ;	
		int operator>=(const Fixed& f)const ;	
		int operator<=(const Fixed& f)const ;	
		int operator==(const Fixed& f)const ;	
		int operator!=(const Fixed& f)const ;	
		
		Fixed &operator++(void);
		Fixed &operator--(void);
		Fixed operator++(int i);
		Fixed operator--(int i);
		
		static Fixed &min(Fixed &a,Fixed &b);
		static Fixed &max(Fixed &a,Fixed &b);
		static const Fixed &min(const Fixed &a,const Fixed &b);
		static const Fixed &max(const Fixed &a,const Fixed &b);

		float toFloat(void) const;
		int toInt(void) const;
		int getRawBits(void) const;
		void setRawBits(int const rax);
};

std::ostream &operator<<(std::ostream& os ,const Fixed& f);

#endif 
