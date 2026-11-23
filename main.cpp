#include <iostream>
#include <stdio.h>
#include <stdlib.h>

int reGuessNumber();

int main(int argc, char **argv) {
    int iSecret, iGuess = 0;

    srand(time(NULL));
    iSecret = rand() % 10 + 1;
    iGuess = reGuessNumber();
    int iTry = 0;

    std::cout << "Secret is: " << iSecret << "\n";
    std::cout << "Guessing is: " << iGuess << "\n";

    do {
        std::cout << "Guessing the number (1 to 10): \n";

        if(iSecret < iGuess) {
            std::cout << "The secret number is lower\n";
            iGuess = reGuessNumber();
            iTry++;
        } else if (iSecret > iGuess) {
            std::cout << "The secret number is higher\n";
            iGuess = reGuessNumber();
            iTry++;
        }
    } while (iSecret != iGuess);

    std::cout << "Number of tries: " << iTry << "\n";
    std::cout << "Congratulations!";

    return 0;
}


int reGuessNumber() {
    return rand() % 10 + 1;
}
