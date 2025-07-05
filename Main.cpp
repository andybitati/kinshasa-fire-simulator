#include "foret.h" // Inclusion de la d�finition de la classe Forest

int main() {
    // D�finition des dimensions de la grille (modifiable selon les besoins)
    int rows = 40;
    int cols = 40;

    // Densit� des arbres : ici, 60% de la grille sera initialis�e avec des arbres
    double treeDensity = 0.7;

    // Cr�ation d'une instance de for�t avec les dimensions sp�cifi�es
    Forest forest(rows, cols);

    // Remplissage de la for�t avec des arbres al�atoires selon la densit�
    forest.initialize(treeDensity);

    // Affichage initial de la grille dans le terminal
    forest.display();

    return 0;
}
