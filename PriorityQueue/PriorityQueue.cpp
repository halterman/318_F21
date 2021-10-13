#include <iostream>
#include <iomanip>
#include <queue>
#include <vector>

struct Widget {
    int rank;
    double quantity;
    Widget(int d, double q) : rank(d), quantity(q) {}
};

struct WidgetComparer {
    bool operator()(const Widget& w1, const Widget& w2) {
        return w1.rank > w2.rank;
    }
};

int main() {
    std::priority_queue<Widget, std::vector<Widget>, WidgetComparer> Q;

    Q.push(Widget(10, 2.5));
    Q.push(Widget(22, 2.1));
    Q.push(Widget(5, 0.5));
    Q.push(Widget(15, 0.7));
    Q.push(Widget(7, 2.8));

    while (!Q.empty()) {
        Widget w = Q.top();
        Q.pop();
        std::cout << std::setw(3) << w.rank << " : " << w.quantity << '\n';
    }
}
