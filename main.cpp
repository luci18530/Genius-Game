#include <iostream>
#include <cstdio>      /* printf, NULL */
#include <cstdlib>     /* srand, rand */
#include <ctime>
#include <unistd.h>
using namespace std;
#define tamfacil 5
#define tammedio 10
#define tamdificil 15

void clear (){
  int c;
  for (c=0;c<100;c++){
    cout<< "\n";
  }
}

void perdeu(){
  cout << "\n--------------------------\n";
  cout << "Sinto muito, você errou !!!\n";
  cout << "Pressione qualquer tecla para voltar ao inicio\n";
  cin.get();
  cin.ignore();
  clear();
}

void ganhou(){
  cout << "\n--------------------------\n";
  cout << "Parabéns, você acertou !!!\n";
  cout << "Pressione qualquer tecla para voltar ao inicio\n";
  cin.get();
  cin.ignore();
  clear();
}

void apresentadecora(){
  clear();
  cout << "Tente decorar esses numeros, pressione qualquer tecla para continuar\n";
  cin.get();
  cin.ignore();
}

void fim(bool error){
  if (error == true){
          perdeu();
        }

        if (error == false){
          ganhou();
        }

      }


int main() {
  
  int i;
  int opcinicial = 0;
  int opcdifi = 0;
  int sequenciafacil[tamfacil];
  int respostafacil[tamfacil];
  int sequenciamedia[tammedio];
  int respostamedia[tamfacil];
  int sequenciadificil[tamdificil];
  int respostadificil[tamdificil];
  srand (time(NULL));
  
  while (opcinicial != 2){
    bool error = false;
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
        apresentadecora();
        
        for (i=0;i<tamfacil; i++){
          sequenciafacil[i] = rand()%4+1;
          
        }
        // apresentar a sequencia aleatoria
        for (i=0; i<tamfacil; i++){
          clear();
          cout << "Numero [" << i+1 << "]: "<< sequenciafacil[i] << "\n";
          usleep(1000000);
          
        }

        clear();
        cout << "Agora digite de um em um a sequencia numerica apresentada:\n\n";
        // digitar resposta
        for (i=0;i<tamfacil; i++){
          cout << "Numero [" << i+1 << "]: " ;
          cin >> respostafacil[i];
          
        }

        // verificar erros
        for (i=0;i<tamfacil; i++){
          if (respostafacil[i] != sequenciafacil[i]){
            error = true;
          }
        }

        fim(error);

      }

      if (opcdifi == 2){
        apresentadecora();
        for (i=0;i<tammedio; i++){
          sequenciamedia[i] = rand()%6+1;
        }
          for (i=0; i<tammedio; i++){
          clear();
          cout << "Numero [" << i+1 << "]: "<< sequenciamedia[i] << "\n";
          usleep(750000);
          
        }

        clear();
        cout << "Agora digite de um em um a sequencia numerica apresentada:\n\n";
        // digitar resposta
        for (i=0;i<tammedio; i++){
          cout << "Numero [" << i+1 << "]: " ;
          cin >> respostamedia[i];
          
        }

        // verificar erros
        for (i=0;i<tammedio; i++){
          if (respostamedia[i] != sequenciamedia[i]){
            error = true;
          }
          
        }

        fim(error);

        }

      if (opcdifi == 3){
        for (i=0;i<tamdificil; i++){
          sequenciadificil[i] = rand()%8+1;
        }

        for (i=0; i<tamdificil; i++){
          clear();
          cout << "Numero [" << i+1 << "]: "<< sequenciadificil[i] << "\n";
          usleep(500000);
                
        }

        clear();
        cout << "Agora digite de um em um a sequencia numerica apresentada:\n\n";
        // digitar resposta
        for (i=0;i<tamdificil; i++){
          cout << "Numero [" << i+1 << "]: " ;
          cin >> respostadificil[i];
          
        }

        // verificar erros
        for (i=0;i<tamdificil; i++){
          if (respostadificil[i] != sequenciadificil[i]){
            error = true;
          }
        }

        fim(error);

      }      
    }
  }
}
