#include <iostream>
using namespace std;

int main() {
   
   float a,b ;
   int opzione;
   
   cin >> a >> b >> opzione;
   swith (opzione){
   case 0:
      cout << (a*b)/2 << endl;
      break;
      
   case 1:
      cout << a*a << endl;
      break;
      
   case 2:
      cout << a*b << endl;
      break;
      
   }
   return 0;
}
