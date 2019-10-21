//Deklarasi dan Pemanggilan Function
#include <iostream>
using namespace std;
 
int result;
 
void cetakPesan (){
    cout<<"Belajar C++"<<endl<<endl;
}
 
int tambah (int a, int b){
    result = a+b;
    //atau kita bisa menggunakan return
    return a+b;
}
 
int main () {
    cetakPesan();
 
    cout<<"tambah(10,55) = "<<tambah(10,55)<<endl;
    cout<<"result = "<<result<<endl;
 
    return 0;
}
