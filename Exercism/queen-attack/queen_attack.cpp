#include "queen_attack.h"

namespace queen_attack {

    chess_board::chess_board(std::pair<int, int> white, std::pair<int, int> black)
            :white_(std::move(white)),black_(std::move(black)){ if(white_ == black_){
            throw std::domain_error("Queens can not stand in the same place on board");
        }}

    bool chess_board::can_attack() const {
        bool possible_attack = false;
        if(black_.first == white_.first || black_.second == white_.second){
            possible_attack = true;
        }else if(abs(black_.first-white_.first)==abs(black_.second-white_.second)){
            possible_attack = true;
        }
        return possible_attack;
    }

    std::string chess_board::to_string() const {
        std::string board;
        for(int j = 0; j < 8 ; j++){
            for(int i = 0; i < 8 ; i++){
                if(black_.first == i && black_.second == j){
                    board += "B";
                }else if(white_.first == i && white_.second == j){
                    board += "W";
                } else{
                    board += "-";
                }

                if(i != 7){
                    board += " ";
                }
            }
            board += "\n";
        }
        return board;
    }

}  // namespace queen_attack
