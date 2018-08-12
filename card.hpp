#ifndef CARD_HPP_
#define CARD_HPP_

#include<iostream>

enum Suit{DIAMONDS, CLUBS , HEARTS, SPADES};
enum Rank{EMPTY, ACE, TW0, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN, JACK, QUEEN, KING};

class Card
{

public:

	Card( Rank r = ACE, Suit s = SPADES): suit_{s}, rank_{r}{}

	Suit suit()const{return suit_;}
	Rank rank()const{return rank_;}

	friend std::ostream& operator<<(std::ostream&,const Card&);


private:

	enum Suit suit_;
	enum Rank rank_;

	static const char* n_suit[], * n_rank[];

};


#endif // TCARD_HPP_