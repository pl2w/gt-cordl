#pragma once
// IWYU pragma private; include "GlobalNamespace/SetMothershipTitleDataResponse.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MothershipResponse_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(SetMothershipTitleDataResponse)
namespace GlobalNamespace {
class MothershipResponse;
}
namespace GlobalNamespace {
class MothershipTitleData;
}
namespace System::Runtime::InteropServices {
struct HandleRef;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace GlobalNamespace {
class SetMothershipTitleDataResponse;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SetMothershipTitleDataResponse*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SetMothershipTitleDataResponse*, "", "SetMothershipTitleDataResponse");
// Dependencies MothershipResponse, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: SetMothershipTitleDataResponse
class CORDL_TYPE SetMothershipTitleDataResponse : public ::GlobalNamespace::MothershipResponse {
public:
// Declarations
 __declspec(property(get=get_TitleData, put=set_TitleData)) ::GlobalNamespace::MothershipTitleData*  TitleData;

/// @brief Field swigCPtr, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

/// @brief Method Dispose, addr 0x532dd20, size 0x16c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method FromMothershipResponse, addr 0x532e16c, size 0x118, virtual false, abstract: false, final false
static inline ::GlobalNamespace::SetMothershipTitleDataResponse* FromMothershipResponse(::GlobalNamespace::MothershipResponse*  respnose) ;

static inline ::GlobalNamespace::SetMothershipTitleDataResponse* New_ctor() ;

static inline ::GlobalNamespace::SetMothershipTitleDataResponse* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method ParseFromResponseString, addr 0x532e088, size 0xe4, virtual true, abstract: false, final false
inline bool ParseFromResponseString(::StringW  response) ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x532e284, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x532db90, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x532dc44, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::SetMothershipTitleDataResponse*  obj) ;

/// @brief Method get_TitleData, addr 0x532df7c, size 0x10c, virtual false, abstract: false, final false
inline ::GlobalNamespace::MothershipTitleData* get_TitleData() ;

/// @brief Method set_TitleData, addr 0x532de8c, size 0xf0, virtual false, abstract: false, final false
inline void set_TitleData(::GlobalNamespace::MothershipTitleData*  value) ;

/// @brief Method swigRelease, addr 0x532dc84, size 0x9c, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::SetMothershipTitleDataResponse*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SetMothershipTitleDataResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SetMothershipTitleDataResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SetMothershipTitleDataResponse(SetMothershipTitleDataResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SetMothershipTitleDataResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SetMothershipTitleDataResponse(SetMothershipTitleDataResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9522};

/// @brief Field swigCPtr, offset: 0x28, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SetMothershipTitleDataResponse, ___swigCPtr) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SetMothershipTitleDataResponse) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
