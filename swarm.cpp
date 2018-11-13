#include "swarm.h"

namespace srn{

Swarm::Swarm()
{
    m_particle = new Particle[N_PARTICLES];
}


Swarm::~Swarm(){
    delete [] m_particle;
}


void Swarm::update(){
    for(int i=0; i<Swarm::N_PARTICLES; i++){
        m_particle[i].update();
    }
}



}
