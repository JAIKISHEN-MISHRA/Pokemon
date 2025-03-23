#include <iostream>
#include <string>

using namespace std;

int main() {
    string player_name;
    int choice = 0;

    cout << "Professor Oak: \n";
    cout << "\"Ah, Trainer!\"\n";
    cout << "\"Welcome to the world of Pokemon!\"\n";
    cout << "\"Today is a momentous day—you’ll be choosing your very first Pokemon.\"\n";
    cout << "\"Every great Trainer remembers this moment for the rest of their lives.\"\n";
    cout << "\"So, choose wisely, young one!\"\n\n";

    cout << "Before we begin, what’s your name, Trainer? ";
    getline(cin, player_name);

    cout << "\nAh, " << player_name << "! A fine name indeed.\n";
    cout << "Now, let’s get to the exciting part!\n\n";

    cout << "Here are your choices:\n";
    cout << "1. Bulbasaur 🌿 - A Grass-type Pokemon, calm and wise.\n";
    cout << "2. Charmander 🔥 - A Fire-type Pokemon, fierce and determined.\n";
    cout << "3. Squirtle 💧 - A Water-type Pokemon, cool and collected.\n\n";

    cout << "Enter the number of the Pokemon you want to choose: ";
    cin >> choice;
    cout << "\n";

    if (choice == 1) {
        cout << "\"You chose Bulbasaur! A wise choice.\"\n";
    }
    else if (choice == 2) {
        cout << "\"You chose Charmander! A fiery choice.\"\n";
    }
    else if (choice == 3) {
        cout << "\"You chose Squirtle! A cool choice.\"\n";
    }
    else {
        cout << "\"Invalid choice. Please restart the game and choose again.\"\n";
        return 0;
    }

    cout << "\nProfessor Oak: \n";
    cout << "\"Ah, an excellent choice!\"\n";
    cout << "\"But beware, Trainer, this is only the beginning.\"\n";
    cout << "\"Your journey is about to unfold.\"\n";
    cout << "\"Now let’s see if you’ve got what it takes to keep going!\"\n";
    cout << "\"Good luck, and remember… Choose wisely!\"\n";

    return 0;
}
