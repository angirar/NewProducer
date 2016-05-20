
#ifndef FASTSIM_HELIXTRAJECTORY_H
#define FASTSIM_HELIXTRAJECTORY_H

#include "FastSimulation/Propagation/interface/Trajectory.h"

class RawParticle;

namespace fastsim
{
    class HelixTrajectory : public Trajectory
    {
    public:
	HelixTrajectory(const RawParticle & particle,double magneticFieldZ);
	bool crosses(const BarrelLayer & layer) const override;
	bool crossesMaterial(const ForwardLayer & layer) const override;
	double nextCrossingTimeC(const BarrelLayer & layer) const override;
	void move(double deltaTimeC) override;
    private:
	const double radius_;
	const double phi0_;
	const double centerX_;
	const double centerY_;
	const double centerR_;
	const double minR_;
	const double maxR_;
	const double phiSpeed_;
    };
}

#endif
