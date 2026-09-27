#pragma once
// IWYU pragma private; include "GlobalNamespace/MothershipRefreshIAPResponse.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MothershipResponse_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(MothershipRefreshIAPResponse)
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
class MothershipRefreshIAPResponse;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MothershipRefreshIAPResponse*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MothershipRefreshIAPResponse*, "", "MothershipRefreshIAPResponse");
// Dependencies MothershipResponse, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: MothershipRefreshIAPResponse
class CORDL_TYPE MothershipRefreshIAPResponse : public ::GlobalNamespace::MothershipResponse {
public:
// Declarations
 __declspec(property(get=get_NewInventoryChangesAvailable, put=set_NewInventoryChangesAvailable)) bool  NewInventoryChangesAvailable;

/// @brief Field swigCPtr, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

/// @brief Method Dispose, addr 0x52b53a0, size 0x15c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method FromMothershipResponse, addr 0x52b55e0, size 0x114, virtual false, abstract: false, final false
static inline ::GlobalNamespace::MothershipRefreshIAPResponse* FromMothershipResponse(::GlobalNamespace::MothershipResponse*  response) ;

static inline ::GlobalNamespace::MothershipRefreshIAPResponse* New_ctor() ;

static inline ::GlobalNamespace::MothershipRefreshIAPResponse* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method ParseFromResponseString, addr 0x52b54fc, size 0xe4, virtual true, abstract: false, final false
inline bool ParseFromResponseString(::StringW  response) ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x52b58a0, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x52b5218, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x52b52c8, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::MothershipRefreshIAPResponse*  obj) ;

/// @brief Method get_NewInventoryChangesAvailable, addr 0x52b57cc, size 0xd4, virtual false, abstract: false, final false
inline bool get_NewInventoryChangesAvailable() ;

/// @brief Method set_NewInventoryChangesAvailable, addr 0x52b56f4, size 0xd8, virtual false, abstract: false, final false
inline void set_NewInventoryChangesAvailable(bool  value) ;

/// @brief Method swigRelease, addr 0x52b5308, size 0x98, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::MothershipRefreshIAPResponse*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MothershipRefreshIAPResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MothershipRefreshIAPResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MothershipRefreshIAPResponse(MothershipRefreshIAPResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MothershipRefreshIAPResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MothershipRefreshIAPResponse(MothershipRefreshIAPResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9355};

/// @brief Field swigCPtr, offset: 0x28, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MothershipRefreshIAPResponse, ___swigCPtr) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MothershipRefreshIAPResponse) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
