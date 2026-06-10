#include "cards.h"

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
    int points;
    bool trump;
};

class Deck {
    private: 
        std::vector<Card> cards;
    public:
        Deck() {
            for (int s=0;s<4;s++) {
                for (int r=9;r<15;r++) {
                    // Choose points to give
                    int points;
                    switch (static_cast<Rank>(r))
                    {
                    case Rank::Nine:
                        points = 0;
                        break;
                    case Rank::Ten:
                        points = 10;
                        break;
                    case Rank::Jack:
                        points = 2;
                        break;
                    case Rank::Queen:
                        points = 3;
                        break;
                    case Rank::King:
                        points = 4;
                        break;
                    case Rank::Ace:
                        points = 11;
                        break;
                    default:
                        std::cout << "Error";
                        break;
                    };
                    cards.push_back({static_cast<Suit>(s), static_cast<Rank>(r),points,false});
                }
            }

            /* Make a random generator*/
            auto rd = std::random_device {};
            auto rng = std::default_random_engine { rd() };
            std::shuffle(std::begin(cards), std::end(cards),rng);
        }  

        // Get the whole deck
        std::vector<Card> get_deck() {
            return cards;
        }

        // Get next card and remove it
        Card next_card() {
            
        }

        bool is_empty() {
            return cards.empty();
        }

};