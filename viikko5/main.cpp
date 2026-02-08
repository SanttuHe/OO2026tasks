#include "Notifikaattori.h"

int main() {
    Notifikaattori n;

    Seuraaja s1("Santtu");
    Seuraaja s2("Jari");
    Seuraaja s3("Urho");

    n.lisaa(&s1);
    n.lisaa(&s2);
    n.lisaa(&s3);

    n.tulosta();
    n.postita("Hei!");

    s1.päivitys("Santtu: Muista palauttaa tehtava tanaan.");
    s2.päivitys("Jari: Voitko tarkistaa onko kotona lammot paalla?");
    s3.päivitys("Urho: Nahdaan klo 18. Tulen silloin hakemaan sinut!");

    n.poista(&s2);
    n.tulosta();

    return 0;
}
