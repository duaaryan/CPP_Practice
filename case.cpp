#include <iostream>
using namespace std;

int main(){
char ch;
cout << "enter a character";
cin >> ch;

if (ch >= 'a' && ch <= 'z'){
    cout << "lowercase\n";

} else {
    cout << "upeercase";

}
return 0;
}