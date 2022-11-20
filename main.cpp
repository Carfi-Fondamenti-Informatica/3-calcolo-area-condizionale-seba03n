#include <iostream>
using namespace std;

int main() {
   
   float a= 0,b= 0;
   int opzione;
   
   cin >> a >> b >> opzione;
   swith (opzione){
   case 0:
      cout << ((a*b)/2);
      break;
      
   case 1:
      cout << (a*a);
      break;
      
   case 2:
      cout << (a*b);
      break;
      
    default :
      cout << "opzione non valida";   
   }
   return 0;
}
