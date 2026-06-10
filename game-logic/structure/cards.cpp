#include <iostream>
#include <vector>
#include <stdlib.h>
#include <algorithm>
#include <random>

enum class Suit {
    Clubs,
    Hearts,
    Diamonds,
    Spades
};

enum class Rank {
    Nine = 9,
    Ten,
    Jack,
    Queen,
    King,
    Ace
};

struct Card {
    Suit suit;
    Rank rank;
};

class Deck {
    public:
        std::vector<Card> cards;

        Deck() {
            for (int s=0;s<4;s++) {
                for (int r=9;r<15;r++) {
                    cards.push_back({static_cast<Suit>(s), static_cast<Rank>(r)});
                    auto rd = std::random_device {};
                    auto rng = std::default_random_engine { rd() };
                    std::shuffle(std::begin(cards), std::end(cards),rng);
                }
            }
        }  

};


int main() {
    Deck deck = Deck();
    for (Card c : deck.cards) {
        std::cout << static_cast<int>(c.suit) << ", " << static_cast<int>(c.rank) << "\n";
    }
}