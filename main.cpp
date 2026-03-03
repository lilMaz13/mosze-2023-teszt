#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    // HIBA: NELEMENTS nincs definialva. Valoszinuleg N_ELEMENTS akart lenni.
    int *b = new int[NELEMENTS];

    // HIBA: szoveghez dupla idezojel kell, nem aposztrof (').
    // HIBA: hianyzik a pontosvesszo a sor vegerol.
    std::cout << '1-100 ertekek duplazasa'
    
    // HIBA: for ciklus hibas (hianyzik a feltetel es a lepes/inkrement resz).
    for (int i = 0;)
    {
        b[i] = i * 2;
    }
    // HIBA: feltetel "i" rossz. KELLENE: i < N_ELEMENTS
    for (int i = 0; i; i++)
    {
        // HIBA: hianyzik a kiirt ertek (pl. b[i]) es a pontosvesszo.
        std::cout << "Ertek:"
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    
    // HIBA: atlag nincs inicializalva (szemet ertekrol indulna).
    int atlag;
    // HIBA: a for feltetel reszben vesszo van pontosvesszo helyett.
    for (int i = 0; i < N_ELEMENTS, i++)
    {
        // HIBA: hianyzik a pontosvesszo a sor vegerol.
        atlag += b[i]
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;

    // HIBA: hianyzik a delete[] b; (memory leak).
    return 0;
}
