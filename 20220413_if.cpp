#include <iostream> 
using namespace std;

int main(){
    /*
    jika nilai >=90 lulus sangat memuaskan
    Jika nilai >= 80 lulus memuaskan
    Jika nilai >= 75 cukup
    < 75 tidak lulus 
     */
int nilai;
cout<<"Masukan nilai = "; cin>>nilai; 
if (nilai >= 100|| nilai <0){
     cout<<"diluar jangkauan"; 
}
else if (nilai >= 90) {
cout<<"lulus sangat memuaskan";
}
else if (nilai >= 80) {
    cout<<"lulus memuaskan";
}
 else if (nilai >= 75) {
     cout<<"cukup";
}
 else{
     cout<<"tidak lulus";
 }
}
