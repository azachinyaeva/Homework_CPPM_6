#include "Header.h"

    Counter::Counter() {
        value = 1;
    }

    Counter::Counter(float val) {
        value = val;
    }

    void Counter::set_value(float value) { this->value = value; }

    float Counter::increase() {
        value++;
        return value;
    }

    float Counter::decrease() {
        value--;
        return value;
    }

    float Counter::show() {
        return value;
    }
