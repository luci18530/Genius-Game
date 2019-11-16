#include <iostream>
#include <cstdio>      /* printf, NULL */
#include <cstdlib>     /* srand, rand */
#include <ctime>
#include <unistd.h>
using namespace std;
#define tamfacil 6
#define tammedio 12
#define tamdificil 18

void clear (){
  int c;
  for (c=0;c<100;c++){
    cout<< "\n";
  }
}

int main() {
  
  int i;
  int opcinicial = 0;
  int opcdifi = 0;
  int sequenciafacil[tamfacil];
  int sequenciamedia[tammedio];
  int sequenciadificil[tamdificil];
  srand (time(NULL));
  while (opcinicial != 2){

  cout << " -------------\n";
  cout << ": GENIUS GAME :\n";
  cout << " -------------\n";

  cout << "1- Jogar\n2- Sair\n";
  cout << "--------\n";
  cout << "Sua escolha: ";
    cin >> opcinicial;

    if (opcinicial == 1){
      clear();
      cout << "Escolha o nivel de dificuldade\n";
      cout << "------------------------------\n";
      cout << "1- Fácil\n2- Médio\n3- Difícil\n";
      cout << "----------\n";
      cout << "Sua escolha: ";
      cin >> opcdifi;

      if (opcdifi == 1){

        cin.get();
        cin.ignore();
        
        for (i=0;i<tamfacil; i++){
          sequenciafacil[i] = rand()%4+1;
          
        }

        for (i=0; i<tamfacil; i++){
          clear();
          cout << sequenciafacil[i] << "\n";
          usleep(1000000);
          
        }

      }
      if (opcdifi == 2){
        for (i=0;i<tammedio; i++){
          sequenciamedia[i] = rand()%6+1;
        }
      }
      if (opcdifi == 3){
        for (i=0;i<tamdificil; i++){
          sequenciadificil[i] = rand()%8+1;
        }
      }

      
    }

  }
}

