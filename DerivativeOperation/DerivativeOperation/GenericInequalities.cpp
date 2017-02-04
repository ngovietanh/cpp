#include "GenericInequalities.h"

template<class Numeric>Numeric  Max(const Numeric& x, const Numeric& y){
	if(x >y ) 
		return x;
	return y;
}
template<class Numeric>Numeric  Min(const Numeric& x, const Numeric& y){
	if(x <y)
		return y;
}

template<class Numeric>Numeric Max(const Numeric& x, const Numeric& y, const Numeric& z){
	return Max<Numeric>(Max<Numeric>(x,y),z);
}
template<class Numeric>Numeric Min(const Numeric& x, const Numeric& y, const Numeric& z){
	return Min<Numeric>(Min<Numeric>(x,y),z);
}