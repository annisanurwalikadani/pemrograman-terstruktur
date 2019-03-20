#include<iostream>
#include<cstring>
using namespace std;
int cari_kata(char*(word))
{
  int pjg,cek,hasil;
  hasil=0;
  pjg=strlen(word);
  char kata[15][15]={ {'t','g','b','w','w','i','n','t','e','r','w','s','e','s','n'},
                     {'a','a','u','n','t','t','m','m','h','f','o','o','d','n','b'},
                     {'j','l','w','c','q','l','d','z','m','p','m','v','d','m','r'},
                     {'a','s','a','g','m','q','u','w','v','v','b','s','o','h','i'},
                     {'b','w','p','l','o','t','a','n','a','d','t','p','g','n','c'},
                     {'r','e','w','n','g','o','d','j','c','p','n','a','t','n','k'},
                     {'e','e','o','t','w','o','s','b','q','h','a','r','r','s','a'},
                     {'a','z','c','g','e','s','w','e','w','n','a','k','n','p','b'},
                     {'d','i','n','n','e','r','q','o','d','l','w','d','c','a','r'},
                     {'o','n','o','p','k','w','m','p','a','r','k','t','z','c','c'},
                     {'q','b','f','r','o','g','m','a','m','w','p','w','e','e','y'},
                     {'l','b','z','q','n','n','m','r','z','j','j','s','c','l','g'},
                     {'m','o','s','g','z','c','z','e','t','d','b','o','o','t','o'},
                     {'p','d','c','r','z','m','s','n','g','r','d','n','r','p','z'},
                     {'o','h','n','k','z','w','a','t','e','r','j','g','t','r','a'}
                    };
                  for (int i=0;i<15;i++){
                    for (int j=0;j<15;j++){
                      if (word[0]==kata[i][j]){
                        
  //HORIZONTAL KE KANAN (dari kiri kekanan)
                       for (int k=0;k<pjg;k++){
					               if (word[k]==kata[i][j+k]){
					                 cek=k;
					               }
					               else{
						               break;
					               }
			                 }
				               if (cek==pjg-1){
					               hasil+=1;
				               }
				               else{
					                hasil+=0;
				               }
				               cek=0;
                          
  //HORIZONTAL KE KIRI (dari kanan ke kiri)
                          for (int k=0;k<pjg;k++){
                            if (word[k]==kata[i][j-k]){
                              cek=k;
                            }
                            else{
                              break;
                            }
                          }
                          if (cek==pjg-1) {
                            hasil+=1;
                          }
                          else{
                            hasil+=0;
                          }
                          cek=0;
  
  
  //VERTIKAL KEBAWAH (dari atas kebawah)
                  for (int k=0;k<pjg;k++){
                      if (word[k]==kata[i+k][j]){
                          cek=k;
                      }
                    else{
                      break;
                    }
                  }
                  if (cek==pjg-1){
                    hasil+=1;;
                  }
                  else{
                    hasil+=0;
                  }
                  cek=0;
  
  //  VERTIKA KEATAS (dari bawah keatas)
                for (int k=0;k<pjg;k++){
                  if (word[k]==kata[i-k]){
                    cek=k;
                  }
                  else{
                    break;
                  }
                }
                if (cek==pjg-1){
                  hasil+=1;
                }
                else{
                  hasil+=0;
                }
                cek=0;
  // DIAGONAL KANAN ATAS (Dari bawah ke atas)
              for (int k=0;k<pjg;k++){
                if (word[k]==kata[i-k][j+k]){
                  cek=k;
                }
                else{
                  break;
                }
              }
              if (cek==pjg-1){
                hasil+=1;
              }
              else{
                hasil+=0;
              }
                  cek=0;
  
  // DIAGONAL KANAN BAWAH (Dari atas ke bawah
              for (int k=0;k<pjg;k++){
                if (word[k]==kata[i+k][j+k]){
                  cek=k;
                }
                else{
                  break;
                }
              }
              if (cek==pjg-1){
                hasil+=1;
              }
              else{
                hasil+=0;
              }
                  cek=0;
          }
      }
    }
                
             
  
              if(hasil>0){
                cout<<"ADA"<<endl;
              }
                else{
                      cout<<"TIDAK ADA"<<endl;
                }
}
   
                //Program nti
                int main()
                {
                  cout<<"       =========================================================="<<endl;
                  cout<<"       =..............Tugas Pemrograman Tersturktur.............."<<endl;
                  cout<<"       =========================================================="<<endl;
                  cout<<"       =                                                        ="<<endl;
                  cout<<"       =   Nama  :   Annisa Nurwalikadani (1817051037)          ="<<endl;
                  cout<<"       =             Suci Hikmawati       (1817051033)          ="<<endl;
                  cout<<"       =             Syela Septania       (1817051058)          ="<<endl;
                  cout<<"       =             Rika Ningtia Azhari  (1817051073)          ="<<endl;
                  cout<<"       =                                                        ="<<endl;
                  cout<<"       =========================================================="<<endl;
                  cout<<endl<<endl<<endl<<endl;
                  int pjg,cek,hasil,batas;
                  cout<<"          =================================================="<<endl;
                  cout<<"          =..................RANGKA HURUF..................="<<endl;
                  cout<<"          =================================================="<<endl;
                  cout<<endl<<endl;
                  char kata[15][15] = { {'t','g','b','w','w','i','n','t','e','r','w','s','e','s','n'},
                                        {'a','a','u','n','t','t','m','m','h','f','o','o','d','n','b'},
                                        {'j','l','w','c','q','l','d','z','m','p','m','v','d','m','r'},
                                        {'a','s','a','g','m','q','u','w','v','v','b','s','o','h','i'},
                                        {'b','w','p','l','o','t','a','n','a','d','t','p','g','n','c'},
                                        {'r','e','w','n','g','o','d','j','c','p','n','a','t','n','k'},
                                        {'e','e','o','t','w','o','s','b','q','h','a','r','r','s','a'},
                                        {'a','z','c','g','e','s','w','e','w','n','a','k','n','p','b'},
                                        {'d','i','n','n','e','r','q','o','d','l','w','d','c','a','r'},
                                        {'o','n','o','p','k','w','m','p','a','r','k','t','z','c','c'},
                                        {'q','b','f','r','o','g','m','a','m','w','p','w','e','e','y'},
                                        {'l','q','z','q','n','n','m','r','z','j','j','s','c','l','g'},
                                        {'m','o','s','g','z','c','z','e','t','d','b','o','o','t','o'},
                                        {'p','d','c','r','z','m','s','n','g','r','d','n','r','p','z'},
                                        {'o','h','n','k','z','w','a','t','e','r','j','g','t','r','a'}
                                      };
                  
                     
                                             
                  
                  //Input Katanya
                  for (int i=0;i<batas;i++){
                    cout<<i+1<<". ";
                    cin>>word[i];
                  }
                  
                  //Outputan Katanya
                  cout<<"          ================================================="<<endl;
                  cout<<"          =               Hasil Seleksi Kata              ="<<endl;
                  cout<<"          ================================================="<<endl;
                  
                  for(int i=0;i<batas;i++){
                    cout<<i+1<<". ";
                    cari_kata(*(word+i));
                  }
                  
                  cout<<endl<<endl<<endl<<endl;
                  cout<<"          =================================================================="<<endl;
                  cout<<"          =  Terimakasih Telah Meluangkan Waktu untuk Belajar Teliti!! ^^  ="<<endl;
                  cout<<"          =================================================================="<<endl;
                  
                return 0;
                }
                 
  
 
                  
  



