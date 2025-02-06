#include <iostream>
using namespace std;

int main() {
    int x = 5;
    int y = 10;
    int z = 25;
    if (x > y && x > z) {
        cout << "x is greater than y" << endl;
    }
    else if (y > x && y > z) {
        cout << "y is greater than x" << endl;
    }
    else if (z > x && z > y) {
        cout << "z is greater than x" << endl;
    }
}
// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.