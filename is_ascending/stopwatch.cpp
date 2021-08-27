#include <cstdlib>
#include "stopwatch.h"

// Creates a Stopwatch object
// A newly minted object is not running and is in a "reset" state
Stopwatch::Stopwatch() : start_time(0), end_time(0), running(false) {}

// Starts the stopwatch.  If there is no current
// start time, the stopwatch has not been used or 
// has just been reset, so we record the current
// system time to begin a new timing.  If there is
// a valid start time, we merely resume the current timing.
// Puts the stopwatch object in the 'running' state.
void Stopwatch::start() {
    if (start_time == 0)       //  Need to start with a fresh timing?
        start_time = clock();  //  If so, record start time
    running = true;            //  The clock is running
}

// Stops the stopwatch.  Records the current
// system time and puts the stopwatch object in
// the 'not running' state. 
// Has no effect if the stopwatch currently is
// not running.
void Stopwatch::stop() {
    if (running) {
        end_time = clock();
        running = false;
    }
    // Else stopping a stopped stopwatch has no effect
}

// Reports the time elapsed between the
// stopwatch's starting and stopping times.
// If the stopwatch is running, the function 
// returns the the time since the stopwatch
// was started.
double Stopwatch::elapsed() const {
    if (!running) {
        return static_cast<double>(end_time - start_time) / CLOCKS_PER_SEC;
    }
    else {
        clock_t current_time = clock();
        return static_cast<double>(current_time - start_time) / CLOCKS_PER_SEC;
    }
}

// Resets the stopwatch so a subsequent start begins recording 
// a new time.  Works whether the stopwatch currently is
// running or not.
void Stopwatch::reset() {
    start_time = end_time = 0;  //  Reset times
    running = false;
}
