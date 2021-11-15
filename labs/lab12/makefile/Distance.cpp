#include "Distance.h"

Distance::Distance(const float distance) {
    _distance = distance;
}

float Distance::get_distance() const {
    return _distance;
}

void Distance::move(const float move_distance) {
    _distance += move_distance;
}

Distance Distance::operator+(const float move_distance) const {
    return Distance(_distance + move_distance);
}
