#ifndef WIDGETMANAGER_H_
#define WIDGETMANAGER_H_

#include "widget.h"

class WidgetManager {
    Widget wid;
public:
    // Using a constructor initialization list, as we should
    WidgetManager(Widget w) : wid(w) {}
    //WidgetManager(Widget w) {
    //    wid = w;   // This is how we do it in Java!
    //}
};

#endif