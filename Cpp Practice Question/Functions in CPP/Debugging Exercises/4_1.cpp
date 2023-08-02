#include <iostream> 
using namespace std;

int sub(int a = 20, int b) //positioning of default argument.

{

int result;

result = a - b;

return result;

}

int main() {

int a = 100;

int b = 200;

int result; result = sub (b); result = sub (a); cout << "value 2 :" << result;

cout << "value 1 :" << result ;

return 0;
}