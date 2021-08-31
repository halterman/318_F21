#ifndef WIDGETHOLDER_H_
#define WIDGETHOLDER_H_

#include "widget.h"

class WidgetHolder {
    Widget user;
public:
    WidgetHolder(int val) : user(val) {}
    int get() const {
        return user.get();  // Return the value of my widget object
    }
};

#endif
