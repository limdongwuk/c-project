#include <iostream>
#include <thread>
#include <chrono>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <conio.h>  // _getch() 함수 포함 (Windows)

void clearScreen() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

void drawSlot(int slot) {
    switch (slot) {
    case 0:
        std::cout << "[ ]";  // Empty
        break;
    case 1:
        std::cout << "[*]";  // Baking
        break;
    case 2:
        std::cout << "[O]";  // Cooked
        break;
    case 3:
        std::cout << "[X]";  // Burned
        break;
    }
}

void drawSlots(const std::vector<int>& slots) {
    std::cout << "Slots: ";
    for (int i = 0; i < slots.size(); ++i) {
        drawSlot(slots[i]);
        if ((i + 1) % 3 == 0) {
            std::cout << std::endl;
        }
    }
    std::cout << std::endl;
}

class Customer {
public:
    Customer() : numBread(rand() % 3 + 1) {}

    int getNumBread() const {
        return numBread;
    }

    void requestBread() const {
        std::cout << "Customer: Please give me " << numBread << " bread(s)!" << std::endl;
    }

private:
    int numBread;
};

class Player {
public:
    Player() : breadCount(0), gold(0), totalBreadsSold(0), gameRunning(true) {
        breadSlots.resize(9, 0);  // 9개의 슬롯 초기화 (0: empty)
    }

    void fillDough() {
        for (int i = 0; i < breadSlots.size(); ++i) {
            if (breadSlots[i] == 0) {
                breadSlots[i] = 1;  // 빈 슬롯에 반죽을 채움
                breadCount++;
            }
        }
    }

    void bakeBread() {
        for (int i = 0; i < breadSlots.size(); ++i) {
            if (breadSlots[i] == 1) {
                breadSlots[i] = 2;  // 굽기 완료
            }
        }
        clearScreen();
        drawSlots(breadSlots);
        std::this_thread::sleep_for(std::chrono::seconds(6));  // 6초 대기
    }

    void serveCustomer() {
        Customer customer;
        clearScreen();
        customer.requestBread();

        int givenBread;
        std::cout << "Enter the slot number (1-9) to serve the customer (or 0 to skip): ";
        std::cin >> givenBread;

        if (givenBread < 1 || givenBread > 9) {
            std::cout << "Invalid slot number. Please enter a number between 1 and 9.\n";
            return;
        }

        if (breadSlots[givenBread - 1] == 2) {  // 익은 붕어빵을 꺼내줌
            breadSlots[givenBread - 1] = 0;  // 슬롯 비우기
            breadCount--;
            gold += 500;  // 개당 500원
            totalBreadsSold++;

            std::cout << "Served bread from slot " << givenBread << "." << std::endl;
            std::cout << "Gold: " << gold << std::endl;
        }
        else {
            std::cout << "No cooked bread in slot " << givenBread << "." << std::endl;
        }

        if (totalBreadsSold >= 30) {
            std::cout << "You won! Total gold: " << gold << std::endl;
            gameRunning = false;
        }

        if (breadCount < 0) {
            std::cout << "Game Over! You burned too many breads." << std::endl;
            gameRunning = false;
        }
    }

    bool isGameRunning() const {
        return gameRunning;
    }

private:
    int breadCount;
    int gold;
    int totalBreadsSold;
    bool gameRunning;
    std::vector<int> breadSlots;
};

void gameLoop() {
    Player player;
    while (player.isGameRunning()) {
        clearScreen();
        std::cout << "Filling dough..." << std::endl;
        player.fillDough();  // 반죽을 채운 후
        std::this_thread::sleep_for(std::chrono::seconds(2));

        std::cout << "Baking bread..." << std::endl;
        player.bakeBread();  // 붕어빵을 굽는 과정

        clearScreen();
        player.serveCustomer();  // 손님을 서비스

        // 간단한 대기 시간 추가
        std::this_thread::sleep_for(std::chrono::seconds(2));
    }
}

int main() {
    srand(static_cast<unsigned int>(time(nullptr)));  // 난수 초기화
    gameLoop();
    return 0;
}
