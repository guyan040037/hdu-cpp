#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    srand(static_cast<unsigned int>(time(nullptr)));
    int targetNumber = rand() % 10 + 1;
    int guess;
    int attempts = 0;

    std::cout << "������һ�� 1 �� 10 ֮������֣����һ�£�" << std::endl;

    do {
        std::cout << "��Ĳ²⣺";
        std::cin >> guess;
        attempts++;

        if (guess < targetNumber) {
            std::cout << "��С�ˣ�������һ�Ρ�" << std::endl;
        }
        else if (guess > targetNumber) {
            std::cout << "�´��ˣ�������һ�Ρ�" << std::endl;
        }
    } while (guess != targetNumber);

    std::cout << "��ϲ�㣬�¶��ˣ����ܹ����� " << attempts << " �Ρ�" << std::endl;

    return 0;
}