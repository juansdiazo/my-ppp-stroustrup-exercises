#include "../std_lib_facilities.h"

int main(){
    //unsigned long long int grains = 1; // Possible to calculate all 64 grains
    //unsigned int grains = 1; // Largest number of grains possible to calculate with int is 32 
    double grains = 1; // Possible to calculate all 64 grains
    bool flag_thousand = true; // Flag to recognize the first time a limit is passed
    bool flag_million = true;
    bool flag_billion = true; // 1x10e9
    bool flag_trillion = true; // 1x10e12
    bool flag_quadrillion = true; // 1x10e15
    bool flag_quintillion = true; // 1x10e18
    cout << "REWARD FOR SQUARES IN CHESSBOARD\n";

    for (int sqr_num = 1; sqr_num<=64; sqr_num++ ){
        //cout << "Grains of rice for square " << sqr_num << " are " << grains << '\n';
        if (grains > 1000 && flag_thousand) {
            cout << "To give the inventor at least a thousand (1x10e3) grains of rice, " << sqr_num << " squares are required.\n";
            flag_thousand = false;
        }
        else if (grains > 1000000 && flag_million) {
            cout << "To give the inventor at least a million (1x10e6) grains of rice, " << sqr_num << " squares are required.\n";
            flag_million = false;
        }
        else if (grains > 1000000000 && flag_billion) {
            cout << "To give the inventor at least a billion (1x10e9) grains of rice, " << sqr_num << " squares are required.\n";
            flag_billion = false;
        }
        else if (grains > 1000000000000 && flag_trillion) {
            cout << "To give the inventor at least a trillion (1x10e12) grains of rice, " << sqr_num << " squares are required.\n";
            flag_trillion = false;
        }
        else if (grains > 1000000000000000 && flag_quadrillion) {
            cout << "To give the inventor at least a quadrillion (1x10e15) grains of rice, " << sqr_num << " squares are required.\n";
            flag_quadrillion = false;
        }
        else if (grains > 1000000000000000000 && flag_quintillion) {
            cout << "To give the inventor at least a quintrillion (1x10e18) grains of rice, " << sqr_num << " squares are required.\n";
            flag_quintillion = false;
        }
        else if (sqr_num == 64) {
            cout << "The inventor was just asking for " << grains << " grains of rice!!! Clever guy!\n";
        }
        grains *= 2;
    }
}