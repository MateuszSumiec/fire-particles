#include "swarm.h"

namespace srn{

Swarm::Swarm(): lastTime(0) {
    m_particle = new Particle[N_PARTICLES];
}


Swarm::~Swarm(){
    delete [] m_particle;
}


void Swarm::update(int elapsed){
    int interval = elapsed - lastTime;

    for(int i=0; i<Swarm::N_PARTICLES; i++){
        m_particle[i].update(interval);
    }

    lastTime = elapsed;
}



}
