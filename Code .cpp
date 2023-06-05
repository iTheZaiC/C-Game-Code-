#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    srand(time(0)); // Rastgele sayı üretimi için tohum ayarlanıyor

    int rastgeleSayi = rand() % 100; // 0 ile 99 arasında rastgele bir sayı üretiliyor
    int tahmin;
    int denemeSayisi = 0;
    
    std::cout << "0 ile 99 arasında bir sayıyı tahmin edin." << std::endl;

    do {
        std::cout << "Tahmininizi girin: ";
        std::cin >> tahmin;
        
        denemeSayisi++;

        if (tahmin < rastgeleSayi) {
            std::cout << "Daha yüksek bir sayı girin." << std::endl;
        } else if (tahmin > rastgeleSayi) {
            std::cout << "Daha düşük bir sayı girin." << std::endl;
        } else {
            std::cout << "Tebrikler! Doğru sayıyı " << denemeSayisi << " denemede buldunuz." << std::endl;
        }
    } while (tahmin != rastgeleSayi);

    return 0;
}
 
// Creator By ZaiC