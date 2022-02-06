#include <iostream>

using namespace std;

class Compare {
private:
   int x, y;
public:

   void numbers() {
       cout << "Enter two numbers:";
       cin >> x>>y;
   }

   friend void larger(Compare t);
};

void larger(Compare i) {
   if (i.x > i.y) {
       cout << "Larger is: " << i.x;
   } else {
       cout << "Larger is: " << i.y;
   }
}

int main() {

   Compare i;
   i.numbers();
   larger(i);

   return 0;
}