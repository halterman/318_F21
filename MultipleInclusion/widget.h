#ifndef WIDGET_H_
#define WIDGET_H_

class Widget {
    int data;
public:
    Widget(int val) : data(val) {}
    int get() const {
        return data;
    }
};

#endif

