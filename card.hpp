#ifndef CARD_HPP_
#define CARD_HPP_

enum suit{DIAMONDS, CLUBS , HEARTS, SPADES};
enum rank{EMPTY, ACE, TW0, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN, JACK, QUEEN, KING};

class Card
{

public:

	Card( rank r = ACE, suit s = SPADES): suit_{s}, rank_{r}{}

	suit suit()const{return suit_;}
	rank rank()const{return rank_;}

	friend std::ostream& operator<<(std::ostream&,const Card&);


private:

	enum suit suit_;
	enum rank rank_;

	static const char* n_suit[], * n_rank[];

};


#endif // TCARD_HPP_