#include <iostream>
#include "card.hpp"

const char* Card::n_suit[] = {"DIAMONDS","CLUBS   ", "HEARTS ", "SPADES  "};
const char* Card::n_rank[] = {"        ","ACE     ", "TWO     ","THREE   ", "FOUR    ", "FIVE    ", "SIX     ", 
"SEVEN   ", "EIGHT   ", "NINE    ","TEN     ","JACK    ","QUEEN   ", "KING    "}; // all with a length of 8 for good visualization


std::ostream& operator <<(std::ostream& os, const Card& c)
{

	os<<"("<<Card::n_rank[c.rank()]
	<<", "<<Card::n_suit[c.suit()]<< ")";


	return os;

}