#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>


void print_array (int array[] , int elementNo)
{
    int i = 0;
    while (i < elementNo)
    {
        std::cout << array[i] << " ";
        i++;
    }
    
}

void play_game()
{
    int guesses[250];
    int guess_count = 0;

    int random = rand() % 251;
    std::cout << random << std::endl;

    std::cout << "Guess a number upto 250" << std::endl;

    while (true)
    {
        int guess;
        std::cin >> guess;

        guesses[guess_count] = guess;
        guess_count++;

        if (guess == random)
        {
            std::cout << "Right answer" << std::endl;
            break;
        }
    

        else if (guess < random)
        {
            std::cout << "Too Low" << std::endl;
        }
    
        else
        {
            std::cout << "Too high" << std::endl;
        }
    }
    print_array(guesses , guess_count);
}

int main ()
{
    srand(time(NULL));
    int choice;

    do
    {
        std::cout << "0) Quit \n";
        std::cout << "1) Play game \n";
        std::cout << "PLease Ente Your Choice \n";
    

        std::cin >> choice;

        switch (choice)
        {
            case 0:
                std::cout << "Quitting \n";
                break;
        
            case 1:
                play_game();
                break;

            default:
                std::cout << "Wong Choice \n";
                break;
        }
    }
    while(choice !=0);
    
}