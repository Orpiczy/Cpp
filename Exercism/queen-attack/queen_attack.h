#if !defined(QUEEN_ATTACK_H)
#define QUEEN_ATTACK_H

#include <utility>
#include <stdexcept>

namespace queen_attack {
class chess_board{
public:
    chess_board() = default;
    chess_board(std::pair<int,int> white, std::pair<int,int> black);
    bool can_attack() const;
    std::string to_string() const;
    std::pair<int,int> white() const {return white_;}
    std::pair<int,int> black() const {return black_;}
private:
    std::pair<int,int> white_ = (std::make_pair(0, 3));
    std::pair<int,int> black_ = (std::make_pair(7, 3));

};
}  // namespace queen_attack

#endif // QUEEN_ATTACK_H