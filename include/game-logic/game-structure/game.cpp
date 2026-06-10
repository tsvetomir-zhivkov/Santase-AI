#include <string>;
#include "cards.h";
#include <iostream>

class Game {
};

class Round {

};

class Player {
    protected: 
        // Player's name
        std::string name;
        
        // Player's cards
        std::vector<Card> hand;
        std::vector<Card> discard_pile;

        // Player's points
        int round_points;
        int game_points;

    public:
        Player(std::string name_in) : name{name_in} {
            std::cout << "Player is created";
        };

        // Get methods
        std::string get_name() {
            return name;
        };

        std::vector<Card> get_hand() {
            return hand;
        };

        std::vector<Card> get_discard_pile() {
            return discard_pile;
        };

        int get_round_points() {
            return round_points;
        };

        int get_game_points() {
            return game_points;
        };

        // Reset methods
        void reset_round_points() {
            round_points = 0;
        };

        void reset_discard_pile() {
            discard_pile.clear();
        };

        // Get a card to hand
        void get_card();

        // Player's moves
        void play_card();
        void call(); // Check what can u call
        void close();
        int check_points();


        
};