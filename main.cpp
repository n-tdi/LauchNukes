#include "main.h"
#include "function.h"

using namespace std;



int main() {
  bool start = false;

  while (start != true) {
    start = launch();

    if (start == true) {
      for (int i = 5; i > 0; i--) {
        cout << i << " seconds until launch" << endl;
        chrono::seconds dura( 1);
        this_thread::sleep_for( dura );
      }
      cout << "The rocket has launched!" << endl;
      asciiArt(1);
    } else {
      cout << "The launch has been aborted." << endl;
      asciiArt(2);
    }
  }
}