#include <iostream>

// Calculate the score of different basketball shots

enum SHOT {
    FOUL_SHOT = 0,
    SHORT_SHOT,
    FAR_SHOT
};

int shot(SHOT type, int amount) {
    switch (type)
    {
    case 0:
        return amount;
    case 1:
        return (amount * 2);
    case 2:
        return (amount * 3);
    }
    return 0;
}

int main() {
    int score;
    score = shot(FAR_SHOT, 30);
    std::cout << "Your current score is: " << score << std::endl;
    return 0;
}