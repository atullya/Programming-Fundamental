#include <iostream>
#include <fstream>
#include <string>
#include <random>
#include <ctime>
using namespace std;

// Function to get a specific word from the file
string getWord(int n)
{
    ifstream file("words.txt");
    string word;
    for (int i = 1; i <= n; i++)
    {
        file >> word;
    }
    return word;
}

int main()
{
    // Initialize variables
    int choice;
    string word;

    // Seed the random number generator
    srand(time(0));

    cout << "Enter 1-20 for a specific word or 0 for a random word: ";
    cin >> choice;

    // Validate input
    while (choice < 0 || choice > 20)
    {
        cout << "Invalid input. Enter a number between 0 and 20: ";
        cin >> choice;
    }

    // Load a specific word or a random word
    if (choice == 0)
    {
        // Generate a random number between 1 and 20
        int n = rand() % 20 + 1;
        word = getWord(n);
    }
    else
    {
        word = getWord(choice);
    }

    // Play the game
    string guess = "";
    int numGuesses = 0;
    while (guess != word && numGuesses < 5)
    {
        // Display the word as underscores
        for (int i = 0; i < word.length(); i++)
        {
            cout << "_ ";
        }
        cout << endl;
        cout << "Guess the word: " << endl;
        cin >> guess;
        numGuesses++;
    }

    if (guess == word)
    {
        cout << "Correct! The word was: " << word << endl;
    }
    else
    {
        cout << "You have exceeded the maximum number of guesses. The word was: " << word << endl;
    }

    return 0;
}
