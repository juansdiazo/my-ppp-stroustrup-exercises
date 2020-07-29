#include "../std_lib_facilities.h"

int main(){
    int rounds;
    int current_round = 0;
    int input_play, pc_play;
    int input_number;
    constexpr int rnd_mult = 781; // Randon number to generate the opponents rock, paper, scissors choice
    vector<int> opponent; // vector to store the opponent answers
    vector<int> game_results(3); // vector to store game results initialized to 0 (win,tie,loose)
    enum states{win, tie, loose}; 
    unordered_map<int, string> answers {{0, "rock"}, {1, "paper"}, {2, "scissors"}};
    
    cout << "ROCK, PAPERS, SCISSORS\n";
    
    cout << "\nHow many rounds do you want to play? ";
    cin >> rounds;
    
    // Generate opponent answers and store them in vector
    cout << "\nPlease input " << rounds << " different numbers, each followed by the enter key: \n";
    for(int i=0; i<rounds;i++) {
        cin >> input_number;
        if (!cin) error("Invalid input format!"); // basic input check - terminate program if error
        opponent.push_back(input_number*rnd_mult%answers.size()); // random number between 0 and 2
    }
    cout << "Opponent answers were generated, now we are ready to play!\n";

    // Game play
    while(current_round<rounds) {
        cout << "\nGame " << current_round +1 << ":  Enter 0 for rock, 1 for paper and 2 for scissors: ";
        cin >> input_play;
        pc_play = opponent[current_round];
        switch(input_play){
            case 0:
                if (pc_play == 0){
                    cout << "I played with " << answers[pc_play] << ". It is a tie.\n";
                    game_results[tie]++;
                }
                else if (pc_play == 1){
                    cout << "I played with " << answers[pc_play] << ". You loose.\n";
                    game_results[loose]++;
                }
                else if (pc_play == 2){
                    cout << "I played with " << answers[pc_play] << ". You win.\n";
                    game_results[win]++;
                }
                current_round++;
                break;
            case 1:
                if (pc_play == 0){
                    cout << "I played with " << answers[pc_play] << ". You win.\n";
                    game_results[win]++;
                }
                else if (pc_play == 1) {
                    cout << "I played with " << answers[pc_play] << ". It is a tie.\n"; 
                    game_results[tie]++;
                }
                else if (pc_play == 2) {
                    cout << "I played with " << answers[pc_play] << ". You loose.\n";
                    game_results[loose]++;
                }
                current_round++;
                break;
            case 2:
                if (pc_play == 0){
                    cout << "I played with " << answers[pc_play] << ". You loose.\n";
                    game_results[loose]++;
                }
                else if (pc_play == 1) {
                    cout << "I played with " << answers[pc_play] << ". You win.\n"; 
                    game_results[win]++;
                }
                else if (pc_play == 2) {
                    cout << "I played with " << answers[pc_play] << ". It is a tie.\n"; 
                    game_results[tie]++;
                }
                current_round++;
                break;
            default:
                cout << "You chose an invalid option.\n";
                break;
        }
    }
    cout << "\nRESULTS SUMMARY\nwins: " << game_results[0] << ", ties: " << game_results[1] << ", lost: " << game_results[2] << ".\nThanks for playing!\n";
} 