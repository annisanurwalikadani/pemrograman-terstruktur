#include<iostream>
#include<cstring>
using namepace std;
int cari_kata(*(word));
{
  int pjg,cek,hasil;
  hasil=0;
  pjg=strln(word);
  
  //HORIZONTAL KE KANAN (dari kiri ke kanan)
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
  
  
  
  
  //HORIZONTAL KE KIRI(dari kanan ke kiri)
              for(int k=0;k<pjg;k++){
                if (word[k]==kata[i][j-k]){
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
  
 
                  
  



