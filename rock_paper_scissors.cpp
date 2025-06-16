#include <iostream>
#include <vector>
#include <cmath>
#include <ctime>
#include <iomanip>

char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);


int main(){

    char player;
    char computer;
    char cont;

    do{
    player = getUserChoice();
    std::cout << "Your choice: ";
    showChoice(player);

    computer =getComputerChoice();
    std::cout << "Computer Choice: ";
    showChoice(computer);

    chooseWinner(player, computer);

    std::cout << "Do You Want to Continue(Y/N): ";
    std::cin >> cont;
    }while(cont == 'Y' || cont == 'y');

    system("pause");

    return 0;
}
char getUserChoice(){

    char player;
    std::cout << "Rock-Paper-Scissors Game!\n";
    std::cout << "*************************\n";

    do{

        std::cout << "Please Make a Selection\n";
        std::cout << "'r' for Rock\n";
        std::cout << "'p' for Paper\n";
        std::cout << "'s' for Scissors\n";
        std::cin >> player;
    }while(player != 'r' && player != 'R' && player != 'p' && player != 'P' && player != 's' && player != 'S');

    std::cout << "*************************\n";

    return player;
}
char getComputerChoice(){

    srand(time(0));
    int num = rand() %3 + 1;

    switch(num){
        case 1: return 'r';
        case 2: return 'p';
        case 3: return 's';
    }
    return 0;
}
void showChoice(char choice){
    
    switch(choice){
        case 'r': std::cout << "Rock\n";
            break;
        case 'p':std::cout << "Paper\n";
            break;
        case 's':std::cout << "Scissors\n";
            break;
        case 'R': std::cout << "Rock\n";
            break;
        case 'P':std::cout << "Paper\n";
            break;
        case 'S':std::cout << "Scissors\n";
            break;
    }

}
void chooseWinner(char player, char computer){

    switch(player){
        case 'r': if(computer == 'r'){
            std::cout << "It's a Tie!\n";
        }
        else if(computer == 'p'){
            std::cout << "You Lose!\n";
        }
        else{
            std::cout << "You Win!\n";
        }
        break;
        case 'R': if(computer == 'r'){
            std::cout << "It's a Tie!\n";
        }
        else if(computer == 'p'){
            std::cout << "You Lose!\n";
        }
        else{
            std::cout << "You Win!\n";
        }
        break;
        case 'p': if(computer == 'p'){
            std::cout << "It's a Tie!\n";
        }
        else if(computer == 's'){
            std::cout << "You Lose!\n";
        }
        else{
            std::cout << "You Win!\n";
        }
        break;
        case 'P': if(computer == 'p'){
            std::cout << "It's a Tie!\n";
        }
        else if(computer == 's'){
            std::cout << "You Lose!\n";
        }
        else{
            std::cout << "You Win!\n";
        }
        break;
        case 's': if(computer == 's'){
            std::cout << "It's a Tie!\n";
        }
        else if(computer == 'r'){
            std::cout << "You Lose!\n";
        }
        else{
            std::cout << "You Win!\n";
        }
        break;
        case 'S': if(computer == 's'){
            std::cout << "It's a Tie!\n";
        }
        else if(computer == 'r'){
            std::cout << "You Lose!\n";
        }
        else{
            std::cout << "You Win!\n";
        }
        break;
    }

}