libname = 'rise'
srcFiles = [
    'src/RISE.cpp',
    'src/manager/metasystemmanager.cpp',
    'src/manager/systemmanager.cpp',
    'src/medium/Medium.cpp',
    'src/medium/PhysicalResource.cpp',
    'src/transmissionobjects/transmissionobject.cpp',
    'src/transmissionobjects/transmissionobjectbf.cpp',
    'src/transmissionobjects/unicasttransmissionobject.cpp',
    'src/transmissionobjects/multicasttransmissionobject.cpp',
    'src/transmissionobjects/broadcasttransmissionobject.cpp',
    'src/stations/station.cpp',
    'src/stations/base/base.cpp',
    'src/transceiver/SCReceiver.cpp',
    'src/transceiver/cache/vectorcache.cpp',
    'src/transceiver/cache/idvectorcache.cpp',
    'src/transceiver/cache/h2cache.cpp',
    'src/transceiver/cache/hashcache.cpp',
    'src/transceiver/cache/nocache.cpp',
    'src/transceiver/cache/propcacheentry.cpp',
    'src/transceiver/cache/propagationcache.cpp',
    'src/transceiver/transmitter.cpp',
    'src/transceiver/receiver.cpp',
    'src/transceiver/SCTransmitter.cpp',
    'src/receiver/SignalAveragingStrategy.cpp',
    'src/receiver/LossCalculation.cpp',
    'src/receiver/PowerMeasurement.cpp',
    'src/demodulator/Demodulator.cpp',
    'src/demodulator/DemodulatorBPSK.cpp',
    'src/demodulator/DemodulatorGMSK.cpp',
    'src/demodulator/DemodulatorQPSK.cpp',
    'src/demodulator/DemodulatorPi4DQPSK.cpp',
    'src/demodulator/DemodulatorFix.cpp',
    'src/decoder/Decoder.cpp',
    'src/decoder/DecoderFix.cpp',
    'src/decoder/DecoderConvolutional.cpp',
    'src/misc/RISELogger.cpp',
    'src/plmapping/SNR2MI.cpp',
    'src/plmapping/MI2PER.cpp',
    'src/plmapping/CodeRates.cpp',
    'src/plmapping/PhyMode.cpp',
    'src/plmapping/PhyModeMapper.cpp',
    'src/decoder/tests/DecoderFixTest.cpp',
    'src/decoder/tests/DecoderConvolutionalTest.cpp',
    'src/demodulator/tests/DemodulatorTest.cpp',
    'src/demodulator/tests/DemodulatorPi4DQPSKTest.cpp',
    'src/demodulator/tests/DemodulatorBPSKTest.cpp',
    'src/demodulator/tests/DemodulatorFixTest.cpp',
    'src/demodulator/tests/DemodulatorQPSKTest.cpp',
    'src/transceiver/tests/propcacheTest.cpp',
    'src/medium/tests/MediumTest.cpp',
    'src/medium/tests/PhysicalResourceTest.cpp',
    'src/stations/tests/stationTest.cpp',
    'src/transceiver/tests/SCReceiverTest.cpp',
    'src/receiver/tests/NoTransmissionAveragingTest.cpp',
    'src/receiver/tests/TimeWeightedTransmissionAveragingTest.cpp',
    'src/scenario/mobility/tests/BrownTest.cpp',
    'src/plmapping/tests/SNR2MITest.cpp',
    'src/plmapping/tests/PhyModeTest.cpp',	
    'src/plmapping/tests/CoderTests.cpp',
    'src/antenna/Antenna.cpp',
    'src/antenna/Beamforming.cpp',
    'src/antenna/Static.cpp',
    'src/antenna/pattern/kernel/Kernel.cpp',
    'src/antenna/pattern/kernel/TwoDimensional.cpp',
    'src/antenna/pattern/kernel/ThreeDimensional.cpp',
    'src/antenna/pattern/kernel/Planet.cpp',
    'src/antenna/pattern/twodimensional/Isotropic.cpp',
    'src/antenna/pattern/twodimensional/OmniDirectional.cpp',
    'src/antenna/pattern/twodimensional/OmniDirectional7.cpp',
    'src/antenna/pattern/twodimensional/OmniDirectional9.cpp',
    'src/antenna/pattern/twodimensional/LambdaHalf.cpp',
    'src/antenna/pattern/twodimensional/Directed13.cpp',
    'src/antenna/pattern/twodimensional/Directed17.cpp',
    'src/antenna/pattern/twodimensional/Directed30.cpp',
    'src/antenna/pattern/twodimensional/Directed66.cpp',
    'src/antenna/pattern/twodimensional/Directed90.cpp',
    'src/antenna/pattern/twodimensional/Directed120.cpp',
    'src/antenna/pattern/twodimensional/WINNER70.cpp',
    'src/antenna/tests/AntennaTest.cpp',
    'src/antenna/tests/BeamformingTest.cpp',
    'src/scenario/Scenario.cpp',
    'src/scenario/Propagation.cpp',
    'src/scenario/PropagationCharacteristic.cpp',
    'src/scenario/sceneryfile/SC.cpp',
    'src/scenario/sceneryfile/Walls.cpp',
    'src/scenario/fastfading/NoFastFading.cpp',
    'src/scenario/fastfading/RiceFading.cpp',
    'src/scenario/pathloss/Pathloss.cpp',
    'src/scenario/pathloss/MinPathloss.cpp',
    'src/scenario/pathloss/DistanceDependent.cpp',
    'src/scenario/pathloss/DistanceIndependent.cpp',
    'src/scenario/pathloss/Deny.cpp',
    'src/scenario/pathloss/Constant.cpp',
    'src/scenario/pathloss/RangeChecked.cpp',
    'src/scenario/pathloss/FreeSpace.cpp',
    'src/scenario/pathloss/SingleSlope.cpp',
    'src/scenario/pathloss/MultiSlope.cpp',
    'src/scenario/pathloss/MultiModel.cpp',
    'src/scenario/pathloss/Umts3003Vehicular.cpp',
    'src/scenario/pathloss/MapPathloss.cpp',
    'src/scenario/pathloss/PyFunction.cpp',
    'src/scenario/pathloss/PathlossChooser.cpp',
    'src/scenario/shadowing/NoShadowing.cpp',
    'src/scenario/shadowing/MapShadowing.cpp',
    'src/scenario/shadowing/SpatialCorrelatedShadowing.cpp',
    'src/scenario/shadowing/Objects.cpp',
    'src/scenario/mobility/Component.cpp',
    'src/scenario/mobility/Mobility.cpp',
    'src/scenario/mobility/None.cpp',
    'src/scenario/mobility/Brown.cpp',
    'src/scenario/mobility/EventList.cpp',
    'src/scenario/mobility/Roadmap.cpp',
    'src/scenario/mobility/roadmap/Map.cpp',
    'src/scenario/mobility/roadmap/MapObject.cpp',
    'src/scenario/mobility/roadmap/MapUser.cpp',
    'src/scenario/mobility/roadmap/Crossing.cpp',
    'src/scenario/mobility/roadmap/Street.cpp',
    'src/scenario/ftfading/JakesFadingGenerator.cpp',
    'src/scenario/ftfading/FTFading.cpp',
    'src/scenario/tests/ScenarioTestsBase.cpp',
    'src/scenario/tests/ObstructionTest.cpp',
    'src/scenario/fastfading/tests/NoFastFadingTest.cpp',
    'src/scenario/fastfading/tests/RiceFadingTest.cpp',
    'src/scenario/pathloss/tests/PathlossTestsBase.cpp',
    'src/scenario/pathloss/tests/ConstantTest.cpp',
    'src/scenario/pathloss/tests/DenyTest.cpp',
    'src/scenario/pathloss/tests/DistanceDependentTest.cpp',
    'src/scenario/pathloss/tests/DistanceIndependentTest.cpp',
    'src/scenario/pathloss/tests/FreeSpaceTest.cpp',
    'src/scenario/pathloss/tests/RangeCheckedTest.cpp',
    'src/scenario/pathloss/tests/Umts3003VehicularTest.cpp',
	'src/scenario/pathloss/tests/PathlossChooserTest.cpp',
    'src/scenario/pathloss/tests/SingleSlopeTest.cpp',
    'src/scenario/pathloss/tests/MultiSlopeTest.cpp',
    'src/scenario/shadowing/tests/ShadowingTestsBase.cpp',
    'src/scenario/shadowing/tests/NoShadowingTest.cpp',
    'src/scenario/shadowing/tests/ObjectsTest.cpp',
    'src/scenario/tests/PropagationTest.cpp',
    'src/scenario/ftfading/tests/FTFadingTest.cpp',
    ]


hppFiles = [
    'src/manager/tests/SystemManagerDropIn.hpp',
    'src/manager/metasystemmanager.hpp',
    'src/manager/systemmanager.hpp',
    'src/RISE.hpp',
    'src/stations/tests/StationDropIn.hpp',
    'src/stations/tests/stationTest.hpp',
    'src/stations/station.hpp',
    'src/stations/base/base.hpp',
    'src/decoder/DecoderConvolutional.hpp',
    'src/decoder/DecoderFix.hpp',
    'src/decoder/Decoder.hpp',
    'src/decoder/tests/DecoderConvolutionalTest.hpp',
    'src/decoder/tests/DecoderFixTest.hpp',
    'src/scenario/pathloss/Pathloss.hpp',
    'src/scenario/pathloss/Umts3003Vehicular.hpp',
    'src/scenario/pathloss/Deny.hpp',
    'src/scenario/pathloss/FreeSpace.hpp',
    'src/scenario/pathloss/MultiModel.hpp',
    'src/scenario/pathloss/PyFunction.hpp',
    'src/scenario/pathloss/MapPathloss.hpp',
    'src/scenario/pathloss/tests/PathlossTestsBase.hpp',
    'src/scenario/pathloss/SingleSlope.hpp',
    'src/scenario/pathloss/MultiSlope.hpp',
    'src/scenario/pathloss/DistanceIndependent.hpp',
    'src/scenario/pathloss/MinPathloss.hpp',
    'src/scenario/pathloss/Constant.hpp',
    'src/scenario/pathloss/defs.hpp',
    'src/scenario/pathloss/DistanceDependent.hpp',
    'src/scenario/pathloss/RangeChecked.hpp',
    'src/scenario/pathloss/OneSlope.hpp',
	'src/scenario/pathloss/PathlossChooser.hpp',
    'src/scenario/Scenario.hpp',
    'src/scenario/Propagation.hpp',
    'src/scenario/ftfading/FTFading.hpp',
    'src/scenario/ftfading/JakesFadingGenerator.hpp',
    'src/scenario/fastfading/NoFastFading.hpp',
    'src/scenario/fastfading/FastFading.hpp',
    'src/scenario/fastfading/RiceFading.hpp',
    'src/scenario/tests/ScenarioTestsBase.hpp',
    'src/scenario/PropagationCharacteristic.hpp',
    'src/scenario/scenerymap/SceneryMap.hpp',
    'src/scenario/mobility/Mobility.hpp',
    'src/scenario/mobility/Brown.hpp',
    'src/scenario/mobility/None.hpp',
    'src/scenario/mobility/Roadmap.hpp',
    'src/scenario/mobility/roadmap/Street.hpp',
    'src/scenario/mobility/roadmap/Map.hpp',
    'src/scenario/mobility/roadmap/MapObject.hpp',
    'src/scenario/mobility/roadmap/MapUser.hpp',
    'src/scenario/mobility/roadmap/Crossing.hpp',
    'src/scenario/mobility/EventList.hpp',
    'src/scenario/mobility/Component.hpp',
    'src/scenario/shadowing/MapShadowing.hpp',
    'src/scenario/shadowing/SpatialCorrelatedShadowing.hpp',
    'src/scenario/shadowing/Shadowing.hpp',
    'src/scenario/shadowing/tests/AntennaPosDropIn.hpp',
    'src/scenario/shadowing/tests/ShadowingTestsBase.hpp',
    'src/scenario/shadowing/Objects.hpp',
    'src/scenario/shadowing/NoShadowing.hpp',
    'src/scenario/sceneryfile/SC.hpp',
    'src/scenario/sceneryfile/Walls.hpp',
    'src/scenario/sceneryfile/SceneryFile.hpp',
    'src/scenario/Obstruction.hpp',
    'src/transmissionobjects/unicasttransmissionobject.hpp',
    'src/transmissionobjects/transmissionobject.hpp',
    'src/transmissionobjects/broadcasttransmissionobject.hpp',
    'src/transmissionobjects/multicasttransmissionobject.hpp',
    'src/transmissionobjects/transmissionobjectbf.hpp',
    'src/misc/RISELogger.hpp',
    'src/misc/pointer.hpp',
    'src/misc/pointerhashmap.hpp',
    'src/misc/pointerhashset.hpp',
    'src/medium/PhysicalResource.hpp',
    'src/medium/tests/PhysicalResourceTest.hpp',
    'src/medium/tests/MediumTest.hpp',
    'src/medium/Medium.hpp',
    'src/medium/PhysicalResourceObserver.hpp',
    'src/receiver/SignalAveragingStrategy.hpp',
    'src/receiver/ReceiverInterface.hpp',
    'src/receiver/tests/TimeWeightedTransmissionAveragingTest.hpp',
    'src/receiver/tests/NoTransmissionAveragingTest.hpp',
    'src/receiver/LossCalculation.hpp',
    'src/receiver/MultiCarrier.hpp',
    'src/receiver/PowerMeasurement.hpp',
    'src/receiver/LossCalculationInterface.hpp',
    'src/antenna/pattern/kernel/Kernel.hpp',
    'src/antenna/pattern/kernel/ThreeDimensional.hpp',
    'src/antenna/pattern/kernel/Planet.hpp',
    'src/antenna/pattern/kernel/TwoDimensional.hpp',
    'src/antenna/pattern/twodimensional/OmniDirectional.hpp',
    'src/antenna/pattern/twodimensional/Isotropic.hpp',
    'src/antenna/pattern/twodimensional/Directed90.hpp',
    'src/antenna/pattern/twodimensional/LambdaHalf.hpp',
    'src/antenna/pattern/twodimensional/OmniDirectional7.hpp',
    'src/antenna/pattern/twodimensional/Directed30.hpp',
    'src/antenna/pattern/twodimensional/Directed17.hpp',
    'src/antenna/pattern/twodimensional/Directed120.hpp',
    'src/antenna/pattern/twodimensional/WINNER70.hpp',
    'src/antenna/pattern/twodimensional/Directed13.hpp',
    'src/antenna/pattern/twodimensional/Directed66.hpp',
    'src/antenna/pattern/twodimensional/OmniDirectional9.hpp',
    'src/antenna/Antenna.hpp',
    'src/antenna/tests/AntennaTest.hpp',
    'src/antenna/tests/AntennaDropIn.hpp',
    'src/antenna/tests/BeamformingTest.hpp',
    'src/antenna/Beamforming.hpp',
    'src/antenna/Static.hpp',
    'src/demodulator/Demodulator.hpp',
    'src/demodulator/DemodulatorGMSK.hpp',
    'src/demodulator/DemodulatorBPSK.hpp',
    'src/demodulator/DemodulatorFix.hpp',
    'src/demodulator/tests/DemodulatorBPSKTest.hpp',
    'src/demodulator/tests/DemodulatorQPSKTest.hpp',
    'src/demodulator/tests/DemodulatorFixTest.hpp',
    'src/demodulator/tests/DemodulatorPi4DQPSKTest.hpp',
    'src/demodulator/tests/DemodulatorTest.hpp',
    'src/demodulator/DemodulatorQPSK.hpp',
    'src/demodulator/DemodulatorPi4DQPSK.hpp',
    'src/transceiver/transmitter.hpp',
    'src/transceiver/cache/nocache.hpp',
    'src/transceiver/cache/propcacheentry.hpp',
    'src/transceiver/cache/hashcache.hpp',
    'src/transceiver/cache/propagationcache.hpp',
    'src/transceiver/cache/idvectorcache.hpp',
    'src/transceiver/cache/vectorcache.hpp',
    'src/transceiver/cache/h2cache.hpp',
    'src/transceiver/SCReceiver.hpp',
    'src/transceiver/ReceiverBF.hpp',
    'src/transceiver/receiver.hpp',
    'src/transceiver/tests/TransmitterDropIn.hpp',
    'src/transceiver/tests/SCTransmitterDropIn.hpp',
    'src/transceiver/tests/propcacheTest.hpp',
    'src/transceiver/tests/ReceiverDropIn.hpp',
    'src/transceiver/tests/SCReceiverTest.hpp',
    'src/transceiver/tests/SCReceiverDropIn.hpp',
    'src/transceiver/tests/receiverTest.hpp',
    'src/transceiver/SCTransmitter.hpp',
    'src/plmapping/SNR2MI.hpp',
    'src/plmapping/PhyMode.hpp',
    'src/plmapping/CodeRates.hpp',
    'src/plmapping/MI2PER.hpp',
    'src/plmapping/PhyModeMapper.hpp',

    ]

pyconfigs = [
'rise/RISE.py',
'rise/Receiver.py',
'rise/Station.py',
'rise/Roadmap.py',
'rise/scenario/Manhattan.py',
'rise/scenario/FTFadingDefaultConfig.py',
'rise/scenario/Hexagonal.py',
'rise/scenario/Pathloss.py',
'rise/scenario/PathlossChooser.py',
'rise/scenario/PyPathloss.py',
'rise/scenario/tests/PropagationTest.py',
'rise/scenario/tests/ManhattanTest.py',
'rise/scenario/tests/IdRegistryTest.py',
'rise/scenario/tests/__init__.py',
'rise/scenario/ScenarioBuilder.py',
'rise/scenario/Propagation.py',
'rise/scenario/Shadowing.py',
'rise/scenario/__init__.py',
'rise/scenario/FTFading.py',
'rise/scenario/Deployments.py',
'rise/scenario/IdRegistry.py',
'rise/scenario/FastFading.py',
'rise/scenario/Nodes.py',
'rise/scenario/PropagationCppUnitTests.py',
'rise/System.py',
'rise/CoderSpecification.py',
'rise/Transmitter.py',
'rise/Antenna.py',
'rise/Scenario.py',
'rise/PhyMode.py',
'rise/Debug.py',
'rise/PLMapping.py',
'rise/__init__.py',
'rise/SNR2MI.py',
'rise/Mobility.py',
'rise/allmi2pertables.py',
]
dependencies =  []
Return('libname srcFiles hppFiles pyconfigs dependencies')
