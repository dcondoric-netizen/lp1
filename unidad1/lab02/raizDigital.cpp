#include <iostream>

using namespace std;
//Deyvis Beltran Condori Coyla
int main() {
    int num;
    while (cin >> num && num != 0) {
    
        while (num >= 10) {
            int suma = 0;
            while (num > 0) {
                int dig = num % 10;
                suma = suma + dig;  
                num = num / 10;        
            }
            num = suma; 
        }
        cout << num << "\n";
    }
    return 0;
}
