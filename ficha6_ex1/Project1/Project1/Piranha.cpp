#include "Piranha.h"


ostream& operator<<(ostream& os, const Piranha& p) {
	os << p.getAsString() << "comprimento: " << p.getComprimento();

	return os;
}