#include <bits/stdc++.h>
using namespace std;

class Screen {
public:
    using pos = string::size_type;

    Screen() = default;
    Screen(pos ht, pos wd, char c): height(ht), width(wd), contents(ht * wd, c){}
    char get() const {return contents[cursor];}
    inline char get(pos ht, pos wd) const;
    Screen &move(pos r, pos c);
private:
    pos cursor = 0;
    pos height = 0, width = 0;
    string contents;
};

Screen::Screen(/* args */) {}

Screen::~Screen() {}

int main() {
    return 0;
}