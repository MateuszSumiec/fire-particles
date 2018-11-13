#ifndef PARTICLES_H
#define PARTICLES_H

#include <stdlib.h>
namespace srn{

class Particle{
public:
    double m_x;
    double m_y;
    double m_xspeed;
    double m_yspeed;

    Particle();
    ~Particle();
    void update();
    void xOutOfBoundsReverseDirection();
    void yOutOfBoundsReverseDirection();
};

}//namespace srn
#endif // PARTICLES_H
