#include "hello_world.h"

// Use everything from the 'std' namespace.
// This lets us write 'string' instead of 'std::string'.


namespace hello_world {

// Define the function itself. This could have also been written as:
// std::string hello_world::hello()
    std::string  hello() {
        std::string str("Hello, World!");
    return str;
}

}  // namespace hello_world
