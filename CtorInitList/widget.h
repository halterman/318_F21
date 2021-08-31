#ifndef WIDGET_H_
#define WIDGET_H_

class Widget {
    int data;
public:
    //Widget() : data(0) {
    //    std::cout << "Executing default c'tor\n";
    //}
    Widget(int d) : data(d) {
        std::cout << "Executing intializing c'tor\n";
    }

    Widget& operator=(const Widget& other) {
        std::cout << "Reassigning a widget\n";
        if (this != &other)
            this->data = other.data;
        return *this;
    }
};

#endif

