#include "widget.h"

class WidgetUser {
    Widget user;
public:
    WidgetUser(int val) : user(val) {}
    int get() const {
        return user.get();  // Return the value of my widget object
    }
};
