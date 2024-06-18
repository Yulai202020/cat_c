#include <iostream>
#include <fstream>

int main(int argc, char* argv[]) {

    if (argc < 2) {
        while (1) {
            std::string string;
            std::getline(std::cin, string);
            std::cout << string;
        }
    } else {
        for (int i = 1; i < argc; i++) {
            std::string filename = argv[i];
            std::ifstream file(filename);
            
            std::string buffer;
            while(std::getline(file, buffer)) {
                std::cout << buffer;
            }

            file.close();
        }
    }

    return 0;
}