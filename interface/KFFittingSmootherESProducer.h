#ifndef TrackingTools_TrackFitters_KFFittingSmootherESProducer_h
#define TrackingTools_TrackFitters_KFFittingSmootherESProducer_h

/** \class KFFittingSmootherESProducer
 *  ESProducer for the KFFittingSmoother
 *
 *  $Date: 2007/05/09 12:56:07 $
 *  $Revision: 1.2.2.1 $
 *  \author cerati
 */

#include "FWCore/Framework/interface/ESProducer.h"
#include "FWCore/ParameterSet/interface/ParameterSet.h"
#include "TrackingTools/Records/interface/TrackingComponentsRecord.h"
#include "TrackingTools/TrackFitters/interface/KFFittingSmoother.h"
#include <boost/shared_ptr.hpp>

class  KFFittingSmootherESProducer: public edm::ESProducer{
 public:
  KFFittingSmootherESProducer(const edm::ParameterSet & p);
  virtual ~KFFittingSmootherESProducer(); 
  boost::shared_ptr<TrajectoryFitter> produce(const TrackingComponentsRecord &);
 private:
  boost::shared_ptr<TrajectoryFitter> _fitter;
  edm::ParameterSet pset_;
};


#endif




