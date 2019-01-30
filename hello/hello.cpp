#include <iostream>
#include <libhello/libhello.hpp>

int main() {
    std::cout << "Libhello version: " << libhello::version() << std::endl;
    return 0;
}
