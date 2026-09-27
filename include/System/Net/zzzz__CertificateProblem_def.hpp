#pragma once
// IWYU pragma private; include "System/Net/CertificateProblem.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CertificateProblem)
// Forward declare root types
namespace System::Net {
struct CertificateProblem;
}
// Write type traits
MARK_VAL_T(::System::Net::CertificateProblem);
DEFINE_IL2CPP_CLASS(::System::Net::CertificateProblem, "System.Net", "CertificateProblem");
// Dependencies 
namespace System::Net {
// Is value type: true
// CS Name: System.Net.CertificateProblem
struct CORDL_TYPE CertificateProblem {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __CertificateProblem_Unwrapped
enum struct __CertificateProblem_Unwrapped : int32_t {
__E_OK = static_cast<int32_t>(0x0),
__E_TrustNOSIGNATURE = static_cast<int32_t>(0x800b0100),
__E_CertEXPIRED = static_cast<int32_t>(0x800b0101),
__E_CertVALIDITYPERIODNESTING = static_cast<int32_t>(0x800b0102),
__E_CertROLE = static_cast<int32_t>(0x800b0103),
__E_CertPATHLENCONST = static_cast<int32_t>(0x800b0104),
__E_CertCRITICAL = static_cast<int32_t>(0x800b0105),
__E_CertPURPOSE = static_cast<int32_t>(0x800b0106),
__E_CertISSUERCHAINING = static_cast<int32_t>(0x800b0107),
__E_CertMALFORMED = static_cast<int32_t>(0x800b0108),
__E_CertUNTRUSTEDROOT = static_cast<int32_t>(0x800b0109),
__E_CertCHAINING = static_cast<int32_t>(0x800b010a),
__E_CertREVOKED = static_cast<int32_t>(0x800b010c),
__E_CertUNTRUSTEDTESTROOT = static_cast<int32_t>(0x800b010d),
__E_CertREVOCATION_FAILURE = static_cast<int32_t>(0x800b010e),
__E_CertCN_NO_MATCH = static_cast<int32_t>(0x800b010f),
__E_CertWRONG_USAGE = static_cast<int32_t>(0x800b0110),
__E_TrustEXPLICITDISTRUST = static_cast<int32_t>(0x800b0111),
__E_CertUNTRUSTEDCA = static_cast<int32_t>(0x800b0112),
__E_CertINVALIDPOLICY = static_cast<int32_t>(0x800b0113),
__E_CertINVALIDNAME = static_cast<int32_t>(0x800b0114),
__E_CryptNOREVOCATIONCHECK = static_cast<int32_t>(0x80092012),
__E_CryptREVOCATIONOFFLINE = static_cast<int32_t>(0x80092013),
__E_TrustSYSTEMERROR = static_cast<int32_t>(0x80096001),
__E_TrustNOSIGNERCERT = static_cast<int32_t>(0x80096002),
__E_TrustCOUNTERSIGNER = static_cast<int32_t>(0x80096003),
__E_TrustCERTSIGNATURE = static_cast<int32_t>(0x80096004),
__E_TrustTIMESTAMP = static_cast<int32_t>(0x80096005),
__E_TrustBADDIGEST = static_cast<int32_t>(0x80096010),
__E_TrustBASICCONSTRAINTS = static_cast<int32_t>(0x80096019),
__E_TrustFINANCIALCRITERIA = static_cast<int32_t>(0x8009601e),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CertificateProblem_Unwrapped () const noexcept {
return static_cast<__CertificateProblem_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr CertificateProblem() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr CertificateProblem(int32_t  value__) noexcept;

/// @brief Field CertCHAINING value: I32(-2146762486)
static ::System::Net::CertificateProblem const CertCHAINING;

/// @brief Field CertCN_NO_MATCH value: I32(-2146762481)
static ::System::Net::CertificateProblem const CertCN_NO_MATCH;

/// @brief Field CertCRITICAL value: I32(-2146762491)
static ::System::Net::CertificateProblem const CertCRITICAL;

/// @brief Field CertEXPIRED value: I32(-2146762495)
static ::System::Net::CertificateProblem const CertEXPIRED;

/// @brief Field CertINVALIDNAME value: I32(-2146762476)
static ::System::Net::CertificateProblem const CertINVALIDNAME;

/// @brief Field CertINVALIDPOLICY value: I32(-2146762477)
static ::System::Net::CertificateProblem const CertINVALIDPOLICY;

/// @brief Field CertISSUERCHAINING value: I32(-2146762489)
static ::System::Net::CertificateProblem const CertISSUERCHAINING;

/// @brief Field CertMALFORMED value: I32(-2146762488)
static ::System::Net::CertificateProblem const CertMALFORMED;

/// @brief Field CertPATHLENCONST value: I32(-2146762492)
static ::System::Net::CertificateProblem const CertPATHLENCONST;

/// @brief Field CertPURPOSE value: I32(-2146762490)
static ::System::Net::CertificateProblem const CertPURPOSE;

/// @brief Field CertREVOCATION_FAILURE value: I32(-2146762482)
static ::System::Net::CertificateProblem const CertREVOCATION_FAILURE;

/// @brief Field CertREVOKED value: I32(-2146762484)
static ::System::Net::CertificateProblem const CertREVOKED;

/// @brief Field CertROLE value: I32(-2146762493)
static ::System::Net::CertificateProblem const CertROLE;

/// @brief Field CertUNTRUSTEDCA value: I32(-2146762478)
static ::System::Net::CertificateProblem const CertUNTRUSTEDCA;

/// @brief Field CertUNTRUSTEDROOT value: I32(-2146762487)
static ::System::Net::CertificateProblem const CertUNTRUSTEDROOT;

/// @brief Field CertUNTRUSTEDTESTROOT value: I32(-2146762483)
static ::System::Net::CertificateProblem const CertUNTRUSTEDTESTROOT;

/// @brief Field CertVALIDITYPERIODNESTING value: I32(-2146762494)
static ::System::Net::CertificateProblem const CertVALIDITYPERIODNESTING;

/// @brief Field CertWRONG_USAGE value: I32(-2146762480)
static ::System::Net::CertificateProblem const CertWRONG_USAGE;

/// @brief Field CryptNOREVOCATIONCHECK value: I32(-2146885614)
static ::System::Net::CertificateProblem const CryptNOREVOCATIONCHECK;

/// @brief Field CryptREVOCATIONOFFLINE value: I32(-2146885613)
static ::System::Net::CertificateProblem const CryptREVOCATIONOFFLINE;

/// @brief Field OK value: I32(0)
static ::System::Net::CertificateProblem const OK;

/// @brief Field TrustBADDIGEST value: I32(-2146869232)
static ::System::Net::CertificateProblem const TrustBADDIGEST;

/// @brief Field TrustBASICCONSTRAINTS value: I32(-2146869223)
static ::System::Net::CertificateProblem const TrustBASICCONSTRAINTS;

/// @brief Field TrustCERTSIGNATURE value: I32(-2146869244)
static ::System::Net::CertificateProblem const TrustCERTSIGNATURE;

/// @brief Field TrustCOUNTERSIGNER value: I32(-2146869245)
static ::System::Net::CertificateProblem const TrustCOUNTERSIGNER;

/// @brief Field TrustEXPLICITDISTRUST value: I32(-2146762479)
static ::System::Net::CertificateProblem const TrustEXPLICITDISTRUST;

/// @brief Field TrustFINANCIALCRITERIA value: I32(-2146869218)
static ::System::Net::CertificateProblem const TrustFINANCIALCRITERIA;

/// @brief Field TrustNOSIGNATURE value: I32(-2146762496)
static ::System::Net::CertificateProblem const TrustNOSIGNATURE;

/// @brief Field TrustNOSIGNERCERT value: I32(-2146869246)
static ::System::Net::CertificateProblem const TrustNOSIGNERCERT;

/// @brief Field TrustSYSTEMERROR value: I32(-2146869247)
static ::System::Net::CertificateProblem const TrustSYSTEMERROR;

/// @brief Field TrustTIMESTAMP value: I32(-2146869243)
static ::System::Net::CertificateProblem const TrustTIMESTAMP;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10526};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Net::CertificateProblem, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::System::Net::CertificateProblem) == 0x4, "Size mismatch!");

} // namespace end def System::Net
