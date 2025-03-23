#include <iostream>
#include <string>

using namespace std;

int main() {
    string player_name;

    cout << "Trainer! Before you embark on your journey,\n";
    cout << "the Pokémon world needs to know who you are!\n\n";

    cout << "Time to step up and tell us your name.\n";
    cout << "And remember, a great name is the start of every great adventure!\n\n";

    cout << "Enter your name: ";
    getline(cin, player_name);

    cout << "\nWelcome, " << player_name << "!\n\n";
    cout << "You're officially in the game now!\n\n";

    cout << "Great start, Trainer! Looks like you’ve mastered the opening of every code adventure.\n";
    cout << "Keep this up, and you’ll be a coding master in no time!\n";

    return 0;
}
