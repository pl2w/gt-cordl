#pragma once
// IWYU pragma private; include "GlobalNamespace/GetReportResponse.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MothershipResponse_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(GetReportResponse)
namespace GlobalNamespace {
class MothershipReportData;
}
namespace GlobalNamespace {
class MothershipResponse;
}
namespace System::Runtime::InteropServices {
struct HandleRef;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace GlobalNamespace {
class GetReportResponse;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GetReportResponse*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GetReportResponse*, "", "GetReportResponse");
// Dependencies MothershipResponse, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: GetReportResponse
class CORDL_TYPE GetReportResponse : public ::GlobalNamespace::MothershipResponse {
public:
// Declarations
 __declspec(property(get=get_Report, put=set_Report)) ::GlobalNamespace::MothershipReportData*  Report;

/// @brief Field swigCPtr, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

/// @brief Method Dispose, addr 0x54210fc, size 0x16c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method FromMothershipResponse, addr 0x5421548, size 0x118, virtual false, abstract: false, final false
static inline ::GlobalNamespace::GetReportResponse* FromMothershipResponse(::GlobalNamespace::MothershipResponse*  response) ;

static inline ::GlobalNamespace::GetReportResponse* New_ctor() ;

static inline ::GlobalNamespace::GetReportResponse* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method ParseFromResponseString, addr 0x5421464, size 0xe4, virtual true, abstract: false, final false
inline bool ParseFromResponseString(::StringW  response) ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x5421660, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x5420f6c, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x5421020, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::GetReportResponse*  obj) ;

/// @brief Method get_Report, addr 0x5421358, size 0x10c, virtual false, abstract: false, final false
inline ::GlobalNamespace::MothershipReportData* get_Report() ;

/// @brief Method set_Report, addr 0x5421268, size 0xf0, virtual false, abstract: false, final false
inline void set_Report(::GlobalNamespace::MothershipReportData*  value) ;

/// @brief Method swigRelease, addr 0x5421060, size 0x9c, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::GetReportResponse*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GetReportResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GetReportResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GetReportResponse(GetReportResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GetReportResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GetReportResponse(GetReportResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9080};

/// @brief Field swigCPtr, offset: 0x28, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GetReportResponse, ___swigCPtr) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GetReportResponse) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
