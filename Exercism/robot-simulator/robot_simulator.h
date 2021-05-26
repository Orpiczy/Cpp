#if !defined(ROBOT_SIMULATOR_H)
#define ROBOT_SIMULATOR_H

#include <stdexcept>

namespace robot_simulator {
    enum bearing {
        north = 0,
        east = 1,
        south = 2,
        west = 3
    };


    class Robot {
    public:
        Robot() {
            position.first = 0;
            position.second = 0;
            orientation = north;
        };

        Robot(std::pair<int, int> pos_init, bearing orient_init) {
            position = pos_init;
            orientation = orient_init;
        };

        const std::pair<int, int>& get_position() const { return position; };

        const bearing& get_bearing() const { return orientation; };

        void turn_left() {
            int val = bearing(orientation) != 0 ? (bearing(orientation) - 1) : 3;
            orientation = static_cast<bearing>(val);
        }

        void turn_right() {
            orientation = static_cast<bearing>((bearing(orientation) + 1) % 4);
        }

        void execute_sequence(const std::string& cmd);

        void advance();

    private:
        std::pair<int, int> position;
        bearing orientation;

    };
}  // namespace robot_simulator


#endif // ROBOT_SIMULATOR_H