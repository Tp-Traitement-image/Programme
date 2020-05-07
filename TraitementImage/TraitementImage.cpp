#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

int main()
{
    int choix;
    do
    {
        cout << endl << " ----------------------- MENU -----------------------" << endl << endl;
        cout << "Choisissez le traitement de l'image :" << endl << endl;
        cout << "1. Filtrage :" << endl;
        cout << "       11. Filtre median" << endl;
        cout << "       12. Filtre gaussien" << endl << endl;
        cout << "2. Derivation (calcul du gradient)" << endl << endl;
        cout << "3. Operation de morphologie mathematique :" << endl;
        cout << "       31. Dilatation" << endl;
        cout << "       32. Erosion" << endl << endl;
        cout << "4. Detection de contours (Canny)" << endl << endl;
        cout << "5. Segmentation de l'image :" << endl;
        cout << "       51. Operations de seuillages" << endl;
        cout << "       52. Segmentation par croissance de region" << endl << endl;
        cout << "0. Quitter" << endl << endl;
        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl << endl;
        cout << "Votre choix : ";
        cin >> choix;
        cout << endl;

        switch (choix)
        {
        case 0: break;

        case 11: cout << "11" << endl;
            break;

        case 12: cout << "12" << endl;
            break;

        case 2: cout << "2" << endl;
            break;

        case 31: cout << "31" << endl;
            break;

        case 32: cout << "32" << endl;
            break;

        case 4: cout << "4" << endl;
            break;

        case 51: cout << "51" << endl;
            break;

        case 52: cout << "52" << endl;
            break;
        }

    } while (choix != 0);

}
