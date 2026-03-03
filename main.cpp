#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    // HIBA: NELEMENTS nincs definialva. Valoszinuleg N_ELEMENTS akart lenni.
    int* b = new int[N_ELEMENTS];

    // HIBA: szoveghez dupla idezojel kell, nem aposztrof (').
    // HIBA: hianyzik a pontosvesszo a sor vegerol.
    std::cout << "1-100 ertekek duplazasa" << std::endl;
    
    // HIBA: for ciklus hibas (hianyzik a feltetel es a lepes/inkrement resz).
    for (int i = 0; i < N_ELEMENTS; ++i)
    {
        b[i] = (i + 1) * 2;
    }
    // HIBA: feltetel "i" rossz. KELLENE: i < N_ELEMENTS
    for (int i = 0; i < N_ELEMENTS; ++i)
    {
        // HIBA: hianyzik a kiirt ertek (pl. b[i]) es a pontosvesszo.
        std::cout << "Ertek: " << b[i] << std::endl;
    }
    std::cout << "Atlag szamitasa: " << std::endl;
    
    // HIBA: atlag nincs inicializalva (szemet ertekrol indulna).
    long long osszeg = 0;
    for (int i = 0; i < N_ELEMENTS; ++i)
    {
        osszeg += b[i];
    }
    double atlag = static_cast<double>(osszeg) / N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;

    // HIBA: hianyzik a delete[] b; (memory leak).
    delete[] b;
    return 0;
}
