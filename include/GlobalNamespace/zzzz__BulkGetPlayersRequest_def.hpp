#pragma once
// IWYU pragma private; include "GlobalNamespace/BulkGetPlayersRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MothershipRequest_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
CORDL_MODULE_EXPORT(BulkGetPlayersRequest)
namespace GlobalNamespace {
class PlayerLookupVector;
}
namespace GlobalNamespace {
class SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipHTTPRequest_t;
}
namespace System::Runtime::InteropServices {
struct HandleRef;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace GlobalNamespace {
class BulkGetPlayersRequest;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BulkGetPlayersRequest*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BulkGetPlayersRequest*, "", "BulkGetPlayersRequest");
// Dependencies MothershipRequest, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: BulkGetPlayersRequest
class CORDL_TYPE BulkGetPlayersRequest : public ::GlobalNamespace::MothershipRequest {
public:
// Declarations
 __declspec(property(get=get_Lookups, put=set_Lookups)) ::GlobalNamespace::PlayerLookupVector*  Lookups;

/// @brief Field swigCPtr, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

/// @brief Method Dispose, addr 0x5272618, size 0x16c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

static inline ::GlobalNamespace::BulkGetPlayersRequest* New_ctor() ;

static inline ::GlobalNamespace::BulkGetPlayersRequest* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method ToHttpRequest, addr 0x5272980, size 0x10c, virtual true, abstract: false, final false
inline ::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipHTTPRequest_t* ToHttpRequest() ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x5272a8c, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x5272488, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x527253c, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::BulkGetPlayersRequest*  obj) ;

/// @brief Method get_Lookups, addr 0x5272874, size 0x10c, virtual false, abstract: false, final false
inline ::GlobalNamespace::PlayerLookupVector* get_Lookups() ;

/// @brief Method set_Lookups, addr 0x5272784, size 0xf0, virtual false, abstract: false, final false
inline void set_Lookups(::GlobalNamespace::PlayerLookupVector*  value) ;

/// @brief Method swigRelease, addr 0x527257c, size 0x9c, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::BulkGetPlayersRequest*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BulkGetPlayersRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BulkGetPlayersRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BulkGetPlayersRequest(BulkGetPlayersRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BulkGetPlayersRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BulkGetPlayersRequest(BulkGetPlayersRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8812};

/// @brief Field swigCPtr, offset: 0x28, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BulkGetPlayersRequest, ___swigCPtr) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BulkGetPlayersRequest) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
