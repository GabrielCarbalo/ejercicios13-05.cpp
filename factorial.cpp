#include <iostream>
using namespace std;
int main()
{
    int numero, i = 1, factorial = 1;

    cout << "Digite un numero para obtener un factorial: "; 
    cin >> numero ;

    for (int i = 1 ; i <= numero; i++ ) 
    {
        factorial = factorial * i ;
    }

    cout << " El factorial del numero es: " << factorial;


    return 0;
}