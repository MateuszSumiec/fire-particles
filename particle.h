#ifndef PARTICLES_H
#define PARTICLES_H
#include <math.h>

namespace srn{

class Particle{
private:
    double m_direction;
    double m_speed;

    void init();

public:
    double m_x;
    double m_y;

    Particle();
    ~Particle();
    void update(int interval);
    void outOfBoundsSetParticleAtBeginning();
    void randomInitialisationOfParticles();
};

}//namespace srn
#endif // PARTICLES_H
