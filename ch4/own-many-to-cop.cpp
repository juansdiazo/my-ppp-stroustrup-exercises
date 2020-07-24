#include "../std_lib_facilities.h"

int main()
{
    // conversion rates to colombian pesos (Jul.22, 2020)
    constexpr double eur_to_cop = 4164.32;
    constexpr double usd_to_cop = 3615;
    constexpr double gbp_to_cop = 4580.77;
    constexpr double cny_to_cop = 516.16;
    constexpr double jpy_to_cop = 33.82;
    constexpr double inr_to_cop = 48.33;

    double quantity = 1;            // quantity of your currency
    double cop = 1;                 // equivalen in colombian pesos
    char currency = ' ';            // char representing currency

    cout << "Welcome traveler!\nPlease choose your currency (e:eur, u:usd, p:gbp, y:cny, j:jpy, r:inr): ";
    cin >> currency;
    cout << "How much do you want to change? ";
    cin >> quantity;

    switch (currency)
    {
        case 'e':
            cout << quantity << " Euros correspond to " << quantity * eur_to_cop << " COP (Colombian Pesos)\n";
            break;
        case 'u':
            cout << quantity << " Dollars correspond to " << quantity * usd_to_cop << " COP (Colombian Pesos)\n";
            break;
        case 'p':
            cout << quantity << " Pounds correspond to " << quantity * gbp_to_cop << " COP (Colombian Pesos)\n";
            break;
        case 'y':
            cout << quantity << " Yuans correspond to " << quantity * cny_to_cop << " COP (Colombian Pesos)\n";
            break;
        case 'j':
            cout << quantity << " Yens correspond to " << quantity * jpy_to_cop << " COP (Colombian Pesos)\n";
            break;
        case 'r':
            cout << quantity << " Rupees correspond to " << quantity * inr_to_cop << " COP (Colombian Pesos)\n";
            break;
        default:
            cout << "Sorry, we don't offer that currency at the moment!\n";
    }
    cout << "Enjoy your trip in our beautiful country!\n";
}