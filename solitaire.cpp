#include "card.hpp"
#include "pila_vec.hpp" // static queue

bool solitaire (Card* cards, suit* base)
{
	Pila<Card> deck{52}, pile{52}; // pila = queue

	for (int = 0; i<52;i++)
		deck.push(cards[i]);


	base[DIAMONDS] = EMPTY; base [SPADES] = EMPTY;
	base[CLUBS] = EMPTY; base[HEARTS] = EMPTY;



	int in_position {};

	do
	{

		in_position = 0;

		while(!deck.vacia()) // vacia = empty
		{
			while(!pile.vacia() && pile.tope().fig() == base[pile.tope().rank()]+1)
			{
				base[pile.tope().rank()] = pile.tope().fig();
				pile.pop();
				in_position++;

			}

		}

	}while(!deck.vacia() && in_position > 0);


	return (deck.vacia()); // if true, we won, cause if the deck is empty all cards are on the right piles




}