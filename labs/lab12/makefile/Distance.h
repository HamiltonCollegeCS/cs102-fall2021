#ifndef DISTANCE_H
#define DISTANCE_H

class Distance {
public:
    Distance(const float distance);
    float get_distance() const;
    void move(const float move_distance);
    Distance operator+(const float move_distance) const;
private:
    float _distance;
};

#endif // DISTANCE_H
