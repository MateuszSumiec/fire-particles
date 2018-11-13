#ifndef SWARM_H
#define SWARM_H

#include "particle.h"

namespace srn{

class Swarm{
private:
    Particle * m_particle;

public:
    const static int N_PARTICLES = 4000;
    Swarm();
    virtual ~Swarm();
    void update();
    const Particle * const getParticles() { return m_particle; };
};

}

#endif // SWARM_H
