#ifndef SWARM_H_
#define SWARM_H_
#include "Particle.h"

namespace screenpkg {

class Swarm {
public:
	const static int NPARTICLES = 1000;
private:
	Particle * m_pParticles;

public:
	Swarm();
	virtual ~Swarm();
	void update();

	const Particle * const getParticles(){ return m_pParticles; };
};

}
/* namespace screenpkg */

#endif /* SWARM_H_ */
