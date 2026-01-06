#include "main.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
        return (EXIT_FAILURE);
    if (std::string(argv[1]) == "ADD")
        std::cout << "Hello world" << std::endl;
    
    return (EXIT_SUCCESS);
}
