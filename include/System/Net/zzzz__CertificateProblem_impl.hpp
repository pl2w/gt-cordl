#pragma once
// IWYU pragma private; include "System/Net/CertificateProblem.hpp"
#include "System/Net/zzzz__CertificateProblem_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::System::Net::CertificateProblem::CertificateProblem(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Net::CertificateProblem::CertificateProblem()   {
}
constexpr ::System::Net::CertificateProblem  System::Net::CertificateProblem::OK{static_cast<int32_t>(0x0)};
constexpr ::System::Net::CertificateProblem  System::Net::CertificateProblem::TrustNOSIGNATURE{static_cast<int32_t>(0x800b0100)};
constexpr ::System::Net::CertificateProblem  System::Net::CertificateProblem::CertEXPIRED{static_cast<int32_t>(0x800b0101)};
constexpr ::System::Net::CertificateProblem  System::Net::CertificateProblem::CertVALIDITYPERIODNESTING{static_cast<int32_t>(0x800b0102)};
constexpr ::System::Net::CertificateProblem  System::Net::CertificateProblem::CertROLE{static_cast<int32_t>(0x800b0103)};
constexpr ::System::Net::CertificateProblem  System::Net::CertificateProblem::CertPATHLENCONST{static_cast<int32_t>(0x800b0104)};
constexpr ::System::Net::CertificateProblem  System::Net::CertificateProblem::CertCRITICAL{static_cast<int32_t>(0x800b0105)};
constexpr ::System::Net::CertificateProblem  System::Net::CertificateProblem::CertPURPOSE{static_cast<int32_t>(0x800b0106)};
constexpr ::System::Net::CertificateProblem  System::Net::CertificateProblem::CertISSUERCHAINING{static_cast<int32_t>(0x800b0107)};
constexpr ::System::Net::CertificateProblem  System::Net::CertificateProblem::CertMALFORMED{static_cast<int32_t>(0x800b0108)};
constexpr ::System::Net::CertificateProblem  System::Net::CertificateProblem::CertUNTRUSTEDROOT{static_cast<int32_t>(0x800b0109)};
constexpr ::System::Net::CertificateProblem  System::Net::CertificateProblem::CertCHAINING{static_cast<int32_t>(0x800b010a)};
constexpr ::System::Net::CertificateProblem  System::Net::CertificateProblem::CertREVOKED{static_cast<int32_t>(0x800b010c)};
constexpr ::System::Net::CertificateProblem  System::Net::CertificateProblem::CertUNTRUSTEDTESTROOT{static_cast<int32_t>(0x800b010d)};
constexpr ::System::Net::CertificateProblem  System::Net::CertificateProblem::CertREVOCATION_FAILURE{static_cast<int32_t>(0x800b010e)};
constexpr ::System::Net::CertificateProblem  System::Net::CertificateProblem::CertCN_NO_MATCH{static_cast<int32_t>(0x800b010f)};
constexpr ::System::Net::CertificateProblem  System::Net::CertificateProblem::CertWRONG_USAGE{static_cast<int32_t>(0x800b0110)};
constexpr ::System::Net::CertificateProblem  System::Net::CertificateProblem::TrustEXPLICITDISTRUST{static_cast<int32_t>(0x800b0111)};
constexpr ::System::Net::CertificateProblem  System::Net::CertificateProblem::CertUNTRUSTEDCA{static_cast<int32_t>(0x800b0112)};
constexpr ::System::Net::CertificateProblem  System::Net::CertificateProblem::CertINVALIDPOLICY{static_cast<int32_t>(0x800b0113)};
constexpr ::System::Net::CertificateProblem  System::Net::CertificateProblem::CertINVALIDNAME{static_cast<int32_t>(0x800b0114)};
constexpr ::System::Net::CertificateProblem  System::Net::CertificateProblem::CryptNOREVOCATIONCHECK{static_cast<int32_t>(0x80092012)};
constexpr ::System::Net::CertificateProblem  System::Net::CertificateProblem::CryptREVOCATIONOFFLINE{static_cast<int32_t>(0x80092013)};
constexpr ::System::Net::CertificateProblem  System::Net::CertificateProblem::TrustSYSTEMERROR{static_cast<int32_t>(0x80096001)};
constexpr ::System::Net::CertificateProblem  System::Net::CertificateProblem::TrustNOSIGNERCERT{static_cast<int32_t>(0x80096002)};
constexpr ::System::Net::CertificateProblem  System::Net::CertificateProblem::TrustCOUNTERSIGNER{static_cast<int32_t>(0x80096003)};
constexpr ::System::Net::CertificateProblem  System::Net::CertificateProblem::TrustCERTSIGNATURE{static_cast<int32_t>(0x80096004)};
constexpr ::System::Net::CertificateProblem  System::Net::CertificateProblem::TrustTIMESTAMP{static_cast<int32_t>(0x80096005)};
constexpr ::System::Net::CertificateProblem  System::Net::CertificateProblem::TrustBADDIGEST{static_cast<int32_t>(0x80096010)};
constexpr ::System::Net::CertificateProblem  System::Net::CertificateProblem::TrustBASICCONSTRAINTS{static_cast<int32_t>(0x80096019)};
constexpr ::System::Net::CertificateProblem  System::Net::CertificateProblem::TrustFINANCIALCRITERIA{static_cast<int32_t>(0x8009601e)};
