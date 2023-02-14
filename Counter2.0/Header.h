#pragma once
class Counter {
private:

    float value;

public:

    Counter();

    Counter(float val);

    void set_value(float value);

    float increase();

    float decrease(); 

    float show();
};