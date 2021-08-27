#include <iostream>
#include "widget.h"
#include "widgetholder.h"

/*
 * Simple example showing how include guards
 * prevent multiple inclusion
 */

int main() {
    Widget w{ 42 };
    WidgetHolder wid_box{ 100 };

    std::cout << "w        : " << w.get() << '\n';
    std::cout << "wid_user : " << wid_box.get() << '\n';
}