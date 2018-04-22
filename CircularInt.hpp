#include <iostream>
using namespace std;

class CircularInt{
    
    public:
    
    int small;
    int big;
 
    CircularInt(int small,int big)  //constructor
    {
       this->small=small;
       this->big=big;
    }

public: ///functions
        
    CircularInt& operator+=(int x)
    {
        return *this;
    }
    
    const CircularInt operator++(int x)
    {
        return *this;
    }
    
    const CircularInt operator-() const
    {
        return CircularInt(big-small, big);
    }
    
       const CircularInt operator/(int x) const {
        
        return CircularInt(big-small, big);
 
    }
    
      CircularInt& operator-=(int x) {
      /*  small=big+x-small;
        return *this;*/
        return *this;
    }
    
     const CircularInt operator-(int x) const {
        
        return CircularInt(big+x-small, big);
    }
    
    
      CircularInt& operator*=(int x) {
    /*    double new_re = _re*other._re - _im*other._im;
        double new_im = _re*other._im + _im*other._re; 
     //   _re = new_re;
        _im = new_im;
		// version with bug
		// _im= _re*other._im + _im*other._re; 
		// _re= _re*other._re - _im*other._im;
		return *this;*/
		return *this;
    }
    

    
    friend ostream& operator<< (ostream& os, const CircularInt& c);
    friend const CircularInt operator-(int x,const CircularInt& c1);
     friend const CircularInt operator+ (const CircularInt& c1, const CircularInt& c2);

};


inline ostream& operator<< (ostream& os, const CircularInt& c) {
    os << c.small;
    return os;
}


inline const CircularInt operator-(int x,const CircularInt& c1) {
    return CircularInt(c1.small,c1.big);

}

inline const CircularInt operator+(const CircularInt& c1, const CircularInt& c2) {
    return CircularInt(c1.small,c1.big);
  
}