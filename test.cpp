#include <algorithm>
#include "card.hpp"


int main()
{

	Card deck[52];
	Rank base[4];


	for (int i = 0, s = DIAMONDS; s <= SPADES; s++)
		for(int r = ACE; r<= KING; r++, i++)
			deck[i] = Card(Suit(s),Rank(r));


	std::srand(time(0));

	bool victory = false;

	int games = 0;

	do
	{
		std::random_shuffle(deck, deck+52);
		victory = solitaire(deck, base);

		std::cout<<"Games played = "<<++games<<std::endl;
		std::cout<<"Last cards in the table:\n"
		<<"\t"<<Card(DIAMONDS,base[DIAMONDS])<<std::endl
		<<"\t"<<Card(CLUBS,base[CLUBS])<<std::endl
		<<"\t"<<Card(HEARTS,base[HEARTS])<<std::endl
		<<"\t"<<Card(SPADES,base[SPADES])<<std::endl
		<<std::endl;

	}while(!victory);

	std::cout<<"You win!"<<std::endl;

	
}