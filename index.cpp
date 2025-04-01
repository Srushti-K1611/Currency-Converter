#include <iostream>
using namespace std;

void convertCurrency(double amount, double rate, string baseCurrency, string targetCurrency) {
    double convertedAmount = amount * rate;
    cout << amount << " " << baseCurrency << " = " << convertedAmount << " " << targetCurrency << endl;
}

int main() {
    double amount, rate;
    string baseCurrency, targetCurrency;
    
    cout << "Enter base currency (e.g., USD): ";
    cin >> baseCurrency;
    cout << "Enter target currency (e.g., INR): ";
    cin >> targetCurrency;
    cout << "Enter amount: ";
    cin >> amount;
    cout << "Enter exchange rate: ";
    cin >> rate;
    
    convertCurrency(amount, rate, baseCurrency, targetCurrency);
    return 0;
}
