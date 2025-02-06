#include <algorithm>
#include <iostream>
#include <ranges>
#include <string>
using namespace std;

int main() {
    string txt="hello";
    reverse(txt.begin(), txt.end());
    cout << txt << endl;
    return 0;
}
// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.