/*****************************************************/
/* File   : Dem.cpp                                  */
/* Author : Naagraaj HM                              */
/*****************************************************/

/*****************************************************/
/* #INCLUDES                                         */
/*****************************************************/
#include "Dem.h"

#include "Dem_EcuM.h"
#include "Dem_SchM.h"

/*****************************************************/
/* OBJECTS                                           */
/*****************************************************/
class_Dem_EcuM Dem_EcuM;
class_EcuM_Client *EcuM_Client_ptr_Dem = &Dem_EcuM;
class_Dem_SchM Dem_SchM;
class_SchM_Client *SchM_Client_ptr_Dem = &Dem_SchM;
class_Dem Dem;

/*****************************************************/
/* FUNCTIONS                                         */
/*****************************************************/
FUNC(void, DEM_CODE) class_Dem_EcuM::PreInit(void){
}

FUNC(void, DEM_CODE) class_Dem_EcuM::InitFunction(void){
}

FUNC(void, DEM_CODE) class_Dem_SchM::MainFunction(void){
}

FUNC(void, DEM_CODE) class_Dem::GetVersionInfo(void){}
FUNC(void, DEM_CODE) class_Dem::Shutdown(void){}
FUNC(void, DEM_CODE) class_Dem::ClearDTC(void){}
FUNC(void, DEM_CODE) class_Dem::ClearPrestoredFreezeFrame(void){}
FUNC(void, DEM_CODE) class_Dem::GetComponentFailed(void){}
FUNC(void, DEM_CODE) class_Dem::GetDTCSelectionResult(void){}
FUNC(void, DEM_CODE) class_Dem::GetDTCSelectionResultForClearDTC(void){}
FUNC(void, DEM_CODE) class_Dem::GetEventUdsStatus(void){}
FUNC(void, DEM_CODE) class_Dem::GetMonitorStatus(void){}
FUNC(void, DEM_CODE) class_Dem::GetDebouncingOfEvent(void){}
FUNC(void, DEM_CODE) class_Dem::GetDTCOfEvent(void){}
FUNC(void, DEM_CODE) class_Dem::GetDTCSuppression(void){}
FUNC(void, DEM_CODE) class_Dem::GetFaultDetectionCounter(void){}
FUNC(void, DEM_CODE) class_Dem::GetIndicatorStatus(void){}
FUNC(void, DEM_CODE) class_Dem::GetEventFreezeFrameDataEx(void){}
FUNC(void, DEM_CODE) class_Dem::GetEventExtendedDataRecordEx(void){}
FUNC(void, DEM_CODE) class_Dem::GetEventMemoryOverflow(void){}
FUNC(void, DEM_CODE) class_Dem::GetNumberOfEventMemoryEntries(void){}
FUNC(void, DEM_CODE) class_Dem::ResetEventDebounceStatus(void){}
FUNC(void, DEM_CODE) class_Dem::ResetEventStatus(void){}
FUNC(void, DEM_CODE) class_Dem::RestartOperationCycle(void){}
FUNC(void, DEM_CODE) class_Dem::PrestoreFreezeFrame(void){}
FUNC(void, DEM_CODE) class_Dem::SelectDTC(void){}
FUNC(void, DEM_CODE) class_Dem::SetComponentAvailable(void){}
FUNC(void, DEM_CODE) class_Dem::SetDTCSuppression(void){}
FUNC(void, DEM_CODE) class_Dem::SetEnableCondition(void){}
FUNC(void, DEM_CODE) class_Dem::SetEventAvailable(void){}
FUNC(void, DEM_CODE) class_Dem::SetEventFailureCycleCounterThreshold(void){}
FUNC(void, DEM_CODE) class_Dem::SetEventStatus(void){}
FUNC(void, DEM_CODE) class_Dem::SetEventStatusWithMonitorData(void){}
FUNC(void, DEM_CODE) class_Dem::SetStorageCondition(void){}
FUNC(void, DEM_CODE) class_Dem::SetWIRStatus(void){}
FUNC(void, DEM_CODE) class_Dem::GetTranslationType(void){}
FUNC(void, DEM_CODE) class_Dem::GetDTCStatusAvailabilityMask(void){}
FUNC(void, DEM_CODE) class_Dem::GetStatusOfDTC(void){}
FUNC(void, DEM_CODE) class_Dem::GetSeverityOfDTC(void){}
FUNC(void, DEM_CODE) class_Dem::GetFunctionalUnitOfDTC(void){}
FUNC(void, DEM_CODE) class_Dem::SetDTCFilter(void){}
FUNC(void, DEM_CODE) class_Dem::GetNumberOfFilteredDTC(void){}
FUNC(void, DEM_CODE) class_Dem::GetNextFilteredDTC(void){}
FUNC(void, DEM_CODE) class_Dem::GetNextFilteredDTCAndFDC(void){}
FUNC(void, DEM_CODE) class_Dem::GetNextFilteredDTCAndSeverity(void){}
FUNC(void, DEM_CODE) class_Dem::SetFreezeFrameRecordFilter(void){}
FUNC(void, DEM_CODE) class_Dem::GetNextFilteredRecord(void){}
FUNC(void, DEM_CODE) class_Dem::GetDTCByOccuranceTime(void){}
FUNC(void, DEM_CODE) class_Dem::DisableDTCRecordUpdate(void){}
FUNC(void, DEM_CODE) class_Dem::EnableDTCRecordUpdate(void){}
FUNC(void, DEM_CODE) class_Dem::GetSizeOfExtendedDataRecordSelection(void){}
FUNC(void, DEM_CODE) class_Dem::GetSizeOfFreezeFrameSelection(void){}
FUNC(void, DEM_CODE) class_Dem::GetNextExtendedDataRecord(void){}
FUNC(void, DEM_CODE) class_Dem::GetNextFreezeFrameData(void){}
FUNC(void, DEM_CODE) class_Dem::SelectExtendedDataRecord(void){}
FUNC(void, DEM_CODE) class_Dem::SelectFreezeFrameData(void){}
FUNC(void, DEM_CODE) class_Dem::GetNumberOfFreezeFrameRecords(void){}
FUNC(void, DEM_CODE) class_Dem::DisableDTCSetting(void){}
FUNC(void, DEM_CODE) class_Dem::EnableDTCSetting(void){}
FUNC(void, DEM_CODE) class_Dem::DcmGetInfoTypeValue08(void){}
FUNC(void, DEM_CODE) class_Dem::DcmGetInfoTypeValue0B(void){}
FUNC(void, DEM_CODE) class_Dem::DcmReadDataOfPID01(void){}
FUNC(void, DEM_CODE) class_Dem::DcmReadDataOfPID1C(void){}
FUNC(void, DEM_CODE) class_Dem::DcmReadDataOfPID21(void){}
FUNC(void, DEM_CODE) class_Dem::DcmReadDataOfPID30(void){}
FUNC(void, DEM_CODE) class_Dem::DcmReadDataOfPID31(void){}
FUNC(void, DEM_CODE) class_Dem::DcmReadDataOfPID41(void){}
FUNC(void, DEM_CODE) class_Dem::DcmReadDataOfPID4D(void){}
FUNC(void, DEM_CODE) class_Dem::DcmReadDataOfPID4E(void){}
FUNC(void, DEM_CODE) class_Dem::DcmReadDataOfPID91(void){}
FUNC(void, DEM_CODE) class_Dem::DcmReadDataOfOBDFreezeFrame(void){}
FUNC(void, DEM_CODE) class_Dem::DcmGetDTCOfOBDFreezeFrame(void){}
FUNC(void, DEM_CODE) class_Dem::DcmGetAvailableOBDMIDs(void){}
FUNC(void, DEM_CODE) class_Dem::DcmGetNumTIDsOfOBDMID(void){}
FUNC(void, DEM_CODE) class_Dem::DcmGetDTRData(void){}
FUNC(void, DEM_CODE) class_Dem::J1939DcmSetDTCFilter(void){}
FUNC(void, DEM_CODE) class_Dem::J1939DcmGetNumberOfFilteredDTC(void){}
FUNC(void, DEM_CODE) class_Dem::J1939DcmGetNextFilteredDTC(void){}
FUNC(void, DEM_CODE) class_Dem::J1939DcmFirstDTCwithLampStatus(void){}
FUNC(void, DEM_CODE) class_Dem::J1939DcmClearDTC(void){}
FUNC(void, DEM_CODE) class_Dem::J1939DcmSetFreezeFrameFilter(void){}
FUNC(void, DEM_CODE) class_Dem::J1939DcmGetNextFreezeFrame(void){}
FUNC(void, DEM_CODE) class_Dem::J1939DcmGetNextSPNInFreezeFrame(void){}
FUNC(void, DEM_CODE) class_Dem::J1939DcmSetRatioFilter(void){}
FUNC(void, DEM_CODE) class_Dem::J1939DcmGetNextFilteredRatio(void){}
FUNC(void, DEM_CODE) class_Dem::J1939DcmReadDiagnosticReadiness1(void){}
FUNC(void, DEM_CODE) class_Dem::J1939DcmReadDiagnosticReadiness2(void){}
FUNC(void, DEM_CODE) class_Dem::J1939DcmReadDiagnosticReadiness3(void){}
FUNC(void, DEM_CODE) class_Dem::SetEventDisabled(void){}
FUNC(void, DEM_CODE) class_Dem::RepIUMPRFaultDetected(void){}
FUNC(void, DEM_CODE) class_Dem::SetIUMPRDenCondition(void){}
FUNC(void, DEM_CODE) class_Dem::GetIUMPRDenCondition(void){}
FUNC(void, DEM_CODE) class_Dem::RepIUMPRDenRelease(void){}
FUNC(void, DEM_CODE) class_Dem::SetPtoStatus(void){}
FUNC(void, DEM_CODE) class_Dem::ReadDataPID01(void){}
FUNC(void, DEM_CODE) class_Dem::GetDataOfPID21(void){}
FUNC(void, DEM_CODE) class_Dem::SetDataOfPID21(void){}
FUNC(void, DEM_CODE) class_Dem::SetDataOfPID31(void){}
FUNC(void, DEM_CODE) class_Dem::SetDataOfPID4D(void){}
FUNC(void, DEM_CODE) class_Dem::SetDataOfPID4E(void){}
FUNC(void, DEM_CODE) class_Dem::GetCycleQualified(void){}
FUNC(void, DEM_CODE) class_Dem::SetCycleQualified(void){}
FUNC(void, DEM_CODE) class_Dem::GetDTCSeverityAvailabilityMask(void){}
FUNC(void, DEM_CODE) class_Dem::GetB1Counter(void){}
FUNC(void, DEM_CODE) class_Dem::SetDTR(void){}

/*****************************************************/
/* EOF                                               */
/*****************************************************/

