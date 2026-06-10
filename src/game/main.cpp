#include "cards.h"

int main() {

    Deck deck = Deck();
    std::vector<Card> cards = deck.get_deck();

    for (Card c : cards) {
        std::cout << static_cast<int>(c.suit) << "," << static_cast<int>(c.rank) << "," << c.points << "," << c.trump << "\n";
    }
    return 0;
}