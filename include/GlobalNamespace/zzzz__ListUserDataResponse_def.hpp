#pragma once
// IWYU pragma private; include "GlobalNamespace/ListUserDataResponse.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MothershipResponse_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ListUserDataResponse)
namespace GlobalNamespace {
class MothershipResponse;
}
namespace GlobalNamespace {
class UserDataShortVector;
}
namespace System::Runtime::InteropServices {
struct HandleRef;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace GlobalNamespace {
class ListUserDataResponse;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ListUserDataResponse*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ListUserDataResponse*, "", "ListUserDataResponse");
// Dependencies MothershipResponse, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: ListUserDataResponse
class CORDL_TYPE ListUserDataResponse : public ::GlobalNamespace::MothershipResponse {
public:
// Declarations
 __declspec(property(get=get_Results, put=set_Results)) ::GlobalNamespace::UserDataShortVector*  Results;

/// @brief Field swigCPtr, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

/// @brief Method Dispose, addr 0x5485ba8, size 0x16c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method FromMothershipResponse, addr 0x5485df8, size 0x118, virtual false, abstract: false, final false
static inline ::GlobalNamespace::ListUserDataResponse* FromMothershipResponse(::GlobalNamespace::MothershipResponse*  response) ;

static inline ::GlobalNamespace::ListUserDataResponse* New_ctor() ;

static inline ::GlobalNamespace::ListUserDataResponse* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method ParseFromResponseString, addr 0x5485d14, size 0xe4, virtual true, abstract: false, final false
inline bool ParseFromResponseString(::StringW  response) ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x548610c, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x5485a18, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x5485acc, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::ListUserDataResponse*  obj) ;

/// @brief Method get_Results, addr 0x5486000, size 0x10c, virtual false, abstract: false, final false
inline ::GlobalNamespace::UserDataShortVector* get_Results() ;

/// @brief Method set_Results, addr 0x5485f10, size 0xf0, virtual false, abstract: false, final false
inline void set_Results(::GlobalNamespace::UserDataShortVector*  value) ;

/// @brief Method swigRelease, addr 0x5485b0c, size 0x9c, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::ListUserDataResponse*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ListUserDataResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ListUserDataResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ListUserDataResponse(ListUserDataResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ListUserDataResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ListUserDataResponse(ListUserDataResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9262};

/// @brief Field swigCPtr, offset: 0x28, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ListUserDataResponse, ___swigCPtr) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ListUserDataResponse) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
