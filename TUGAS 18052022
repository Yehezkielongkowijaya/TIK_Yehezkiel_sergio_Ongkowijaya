#include <iostream>
using namespace std;

int main() {
 
  string satuan [] = { "km","hm","dam","m","dm","cm","mm"};
  string awal,akhir;
  int x,y,nilai;
  float angka,hasil;
  int a = sizeof (satuan) / sizeof (*satuan);
  
  cout << "angka yang ingin dikonversi : ";
  cin >> angka;
  
  cout << "awal konversi : ";
  cin >> awal;
  
  cout << "akhir konversi : ";
  cin >> akhir;
  
  for (int f = 0;f < a; f++){
      if (awal == satuan [f]){
          x = f + 1 ;
      }
      if (akhir == satuan [f]){
          y = f + 1;
      } 
  }
  
  hasil = angka;
  
  if (x < y){
      int z = y - x;
      for (int k = 0; k < z; k++){
          hasil *= 10;
      }
  }
  else if (x > y){
      int z = x - y;
      for (int k = 0; k < z; k++){
          hasil /= 10;
      }
  }
  else {
      hasil = nilai;
  }
  
  cout << angka << " " << awal <<" " << "=" << " " << hasil << " " << akhir; 
  
  return 0;
}
