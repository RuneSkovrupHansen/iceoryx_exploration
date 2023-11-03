#ifndef ICEORYX_RADAR_OBJECT_HPP
#define ICEORYX_RADAR_OBJECT_HPP

struct RadarObject
{
    RadarObject() noexcept {}
    RadarObject(double x, double y, double z) noexcept:
        x(x), y(y), z(z) {}
    double x = 0.0;
    double y = 0.0;
    double z = 0.0;
};

#endif // ICEORYX_RADAR_OBJECT_HPP
