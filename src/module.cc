#include "TrackingTools/PatternTools/interface/TrajectoryFitter.h" 
#include "TrackingTools/PatternTools/interface/TrajectorySmoother.h" 

#include "FWCore/Framework/interface/EventSetup.h"
#include "FWCore/Framework/interface/ESHandle.h"
#include "FWCore/Framework/interface/ModuleFactory.h"
#include "FWCore/Framework/interface/ESProducer.h"
#include "FWCore/Framework/interface/eventsetupdata_registration_macro.h"

EVENTSETUP_DATA_REG(TrajectoryFitter);
EVENTSETUP_DATA_REG(TrajectorySmoother);
