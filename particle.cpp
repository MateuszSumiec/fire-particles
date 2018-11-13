#include "particle.h"
#include <stdlib.h>

namespace srn{

Particle::Particle(): m_x(0), m_y(0) {
    m_xspeed = 0.001 * ((2.0 * rand()) / RAND_MAX - 1);
    m_yspeed = 0.001 * ((2.0 * rand()) / RAND_MAX - 1);
}

Particle::~Particle() {
        //TODO
}

void Particle::update(){
    m_x += m_xspeed;
    m_y += m_yspeed;

    xOutOfBoundsReverseDirection();
    yOutOfBoundsReverseDirection();
}

void Particle::xOutOfBoundsReverseDirection(){
    if(m_x < -1.0 || m_x >= 1.0){
        m_xspeed = -m_xspeed;
    }
}

void Particle::yOutOfBoundsReverseDirection(){
    if(m_y < -1.0 || m_y >= 1.0){
        m_yspeed = -m_yspeed;
    }
}

} //namespace srn
