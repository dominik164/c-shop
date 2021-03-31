#include "Product.h"
using std::setw;

std::ostream& operator<<(std::ostream& out, const  Product&P) {
	out << setw(15)<<P.m_id<<setw(15)<<P.m_price << setw(15) << P.m_quantity;
	return out;
}