#ifndef SWARM_H
#define SWARM_H

#include "particle.h"

namespace srn{

class Swarm{
private:
    Particle * m_particle;
    int lastTime;
public:
    const static int N_PARTICLES = 5000;
    Swarm();
    virtual ~Swarm();
    void update(int elapsed);
    const Particle * const getParticles() { return m_particle; };
};

}

#endif // SWARM_H
