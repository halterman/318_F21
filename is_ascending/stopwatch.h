#ifndef STOPWATCH_H_INCLUDED_
#define STOPWATCH_H_INCLUDED_

#include <ctime>

class Stopwatch {
    clock_t start_time;
    clock_t end_time;
    bool running;
public:
    Stopwatch();
    void start();            //  Start the timer
    void stop();             //  Stop the timer
    void reset();            //  Reset the timer
    double elapsed() const;  //  Reveal the elapsed time
};

#endif
