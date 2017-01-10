# How to install

```
cmsrel CMSSW_8_2_0
cd CMSSW_8_2_0/src
cmsenv
git clone git@github.com:angirar/NewProducer.git FastSimulation
USER_CXXFLAGS="-g -D=EDM_ML_DEBUG" scram b -j 8 # special flags to switch on debugging code
```

# How to run

```
# create a file with generated events
source FastSimulation/FastSimProducer/test/gen.sh
# pass the generated events to simulation
cmsRun FastSimulation/FastSimProducer/python/conf_cfg.py
# to run validation do instead
cmsRun FastSimulation/FastSimProducer/python/conf_validation_cfg.py
```

# More info on the project

See comments in FastSimulation/Propagation/src/LayerNavigator.cc

# How to push and pull changes

```
git pull 
git push
```
