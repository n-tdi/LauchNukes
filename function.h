#include "main.h"
using namespace std;

bool launch();

bool launch() {
  char confirmation;
  cout << "Enter 'y' to launch or 'n' to chancel: \n";
  cin >> confirmation;

  if (confirmation == 'y') {
    return true;
  } else if (confirmation == 'n') {
    return false;
  } else {
    return false;
  }
}

void asciiArt(string amount);

void asciiArt(int a) {
  if (a == 1) {
    cout << R"(
                              ____                      
                      __,-~~/~    `---.                 
                    _/_,---(      ,    )                
                __ /        <    /   )  \___            
               ====------------------===;;;==           
                   \/  ~"~"~"~"~"~\~"~)~",1/            
                   (_ (   \  (     >    \)              
                    \_( _ <         >_>'                
                       ~ `-i' ::>|--"                   
                           I;|.|.|                      
                          <|i::|i|>                     
                           |[::|.|                      
                            ||: |       
)" << '\n';
  } else if (a == 2) {
    cout << R"(
    ___ __ 
   (_  ( . ) )__                  '.    \   :   /    .'
     '(___(_____)      __           '.   \  :  /   .'
                     /. _\            '.  \ : /  .'
                .--.|/_/__      -----____   _  _____-----
_______________''.--o/___  \_______________(_)___________
       ~        /.'o|_o  '.|  ~                   ~   ~
  ~            |/    |_|  ~'         ~
               '  ~  |_|        ~       ~     ~     ~
      ~    ~          |_|O  ~                       ~
             ~     ___|_||_____     ~       ~    ~
   ~    ~      .'':. .|_|A:. ..::''.
             /:.  .:::|_|.\ .:.  :.:\   ~
  ~         :..:. .:. .::..:  .:  ..:.       ~   ~    ~
             \.: .:  :. .: ..:: .lcf/
    ~      ~      ~    ~    ~         ~
               ~           ~    ~   ~             ~
        ~         ~            ~   ~                 ~
   ~                  ~    ~ ~                 ~ 
)" << '\n';
  }

  //return 0;
}
