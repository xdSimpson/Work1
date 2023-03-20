#include <iostream>
#include "funcs.h"
using namespace std;

int main() {
   int a, b, c, choice;
   cout << "Enter two numbers: ";
   cin >> a >> b;
   cout << "Enter your choice:\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n";
   cin >> choice;
   switch(choice) {
<<<<<<< HEAD
      case 1:
         cout << "Sum=" << c;
         break;
      case 2:
         cout << "Sub=" << c;
         break;
      case 3:
         cout << "Mul=" << c;
         break;
      case 4:
         if(b != 0) {
            cout << "Div=" << c;
         }
         else {
            cout << "Error: Division by zero";
         }
         break;
      default:
         cout << "Invalid choice";
   }
   return 0;
=======
      case Sum:
            result = sum(a, b);
            break;
        case Sub:
            result = sub(a, b);
            break;
        case Mul:
            result = mul(a, b);
            break;
        case Div:
            result = div(a, b);
            break;
        default:
            cout << "Error: wrong number of function\n";
            return 1;
    }

    // Вывод результата
    cout << "Результат: " << result << endl;

    return 0;
>>>>>>> db51d7cdd25dab12a5cd8b6657424b0bde8c286e
}
