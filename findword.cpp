#include <iostream>
#include <cstring>
using namespace std;
int main(){

  cout<<"==================================================================="<<endl;
  cout<<"                     Tugas Pemrograman Terstruktur                ="<<endl;
  cout<<"==================================================================="<<endl;
  
  char B1[] = {'t','g','b','w','w','i','n','t','e','r','w','s','e','s','n'};
  char B2[] = {'a','a','u','n','t','t','m','m','h','f','o','o','d','n','b'};
  char B3[] = {'j','l','w','c','q','l','d','z','m','p','m','v','d','m','r'};
  char B4[] = {'a','s','a','g','m','q','u','w','v','v','b','s','o','h','i'};
  char B5[] = {'b','w','p','l','o','t','a','n','a','d','t','p','g','n','c'};
  char B6[] = {'r','e','w','n','g','o','d','j','c','p','n','a','t','n','k'};
  char B7[] = {'e','e','o','t','w','o','s','b','q','h','a','r','r','s','a'};
  char B8[] = {'a','z','c','g','e','s','w','e','w','n','a','k','n','p','b'};
  char B9[] = {'d','i','n','n','e','r','q','o','d','l','w','d','c','a','r'};
  char B10[] = {'o','n','o','p','k','w','m','p','a','r','k','t','z','c','c'};
  char B11[] = {'q','b','f','r','o','g','m','a','m','w','p','w','e','e','y'};
  char B12[] = {'l','q','z','q','n','n','m','r','z','j','j','s','c','l','g'};
  char B13[] = {'m','o','s','g','z','c','z','e','t','d','b','o','o','t','o'};
  char B14[] = {'p','d','c','r','z','m','s','n','g','r','d','n','r','p','z'};
  char B15[] = {'o','h','n','k','z','w','a','t','e','r','j','g','t','r','a'};
  char *F[] = {B1,B2,B3,B4,B5,B6,B7,B8,B9,B10,B11,B12,B13,B14,B15};
  
  cout<<"------------------------FIND WORD PROGRAM-------------------------"<<endl<<endl;
    for (int baris=0; baris<15; baris++){
        for (int kolom=0; kolom<15; kolom++)
        cout<<*(*(F+baris)+kolom)<<"||";
        cout<<endl;
    }
  cout<<"=====================_TERIMA_KASIH_==============================="<<endl<<endl;

return 0; 
}
