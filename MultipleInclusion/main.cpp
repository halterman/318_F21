#include <iostream>
#include "widget.h"
#include "widgetuser.h"

int main() {
    Widget w{ 42 };
    WidgetUser wid_user{ 100 };

    std::cout << "w        : " << w.get() << '\n';
    std::cout << "wid_user : " << wid_user.get() << '\n';
}