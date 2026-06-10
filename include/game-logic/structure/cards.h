#include <vector>
#include <stdlib.h>
#include <algorithm>
#include <random>
#include <iostream>

enum class Suit;
enum class Rank;
struct Card {
    Suit suit;
    Rank rank;
    int points;
    bool trump;
};
class Deck {
    public:
        Deck();
        std::vector<Card> get_deck();

};