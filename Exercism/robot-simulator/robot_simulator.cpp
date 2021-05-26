#include <utility>
#include "robot_simulator.h"

namespace robot_simulator {
    void Robot::execute_sequence(const std::string& cmd){
        std::string::const_iterator it;
        for(it = cmd.cbegin();it!=cmd.cend();it++){
            switch(static_cast<char>(*it)){
                case 'R':
                    turn_right();
                    break;
                case 'L':
                    turn_left();
                    break;
                case 'A':
                    advance();
                    break;
                default:
                    throw std::domain_error("Unknown command");
            }
        }
    }

    void Robot::advance() {
        switch(orientation){
            case north:
                position.second++;
                break;
            case east:
                position.first++;
                break;
            case south:
                position.second--;
                break;
            case west:
                position.first--;
                break;
            default:
                throw std::domain_error("Unknown orientation");
        }
    }

}  // namespace robot_simulator
