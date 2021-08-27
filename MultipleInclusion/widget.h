#ifndef WIDGET_H_
#define WIDGET_H_

/*
 * Simple example showing how to use include guards to
 * prevent multiple inclusion
 */

class Widget {
    int data;
public:
    Widget(int val) : data(val) {}
    int get() const {
        return data;
    }
};

#endif

