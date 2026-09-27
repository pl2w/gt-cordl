#pragma once
// IWYU pragma private; include "GlobalNamespace/ServerRefreshSubscriptionsForPlayerResponse.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MothershipResponse_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ServerRefreshSubscriptionsForPlayerResponse)
namespace GlobalNamespace {
class MothershipResponse;
}
namespace GlobalNamespace {
class SubscriptionsVector;
}
namespace System::Runtime::InteropServices {
struct HandleRef;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace GlobalNamespace {
class ServerRefreshSubscriptionsForPlayerResponse;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ServerRefreshSubscriptionsForPlayerResponse*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ServerRefreshSubscriptionsForPlayerResponse*, "", "ServerRefreshSubscriptionsForPlayerResponse");
// Dependencies MothershipResponse, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: ServerRefreshSubscriptionsForPlayerResponse
class CORDL_TYPE ServerRefreshSubscriptionsForPlayerResponse : public ::GlobalNamespace::MothershipResponse {
public:
// Declarations
 __declspec(property(get=get_Results, put=set_Results)) ::GlobalNamespace::SubscriptionsVector*  Results;

/// @brief Field swigCPtr, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

/// @brief Method Dispose, addr 0x532ae34, size 0x16c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method FromMothershipResponse, addr 0x532b280, size 0x118, virtual false, abstract: false, final false
static inline ::GlobalNamespace::ServerRefreshSubscriptionsForPlayerResponse* FromMothershipResponse(::GlobalNamespace::MothershipResponse*  response) ;

static inline ::GlobalNamespace::ServerRefreshSubscriptionsForPlayerResponse* New_ctor() ;

static inline ::GlobalNamespace::ServerRefreshSubscriptionsForPlayerResponse* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method ParseFromResponseString, addr 0x532b19c, size 0xe4, virtual true, abstract: false, final false
inline bool ParseFromResponseString(::StringW  response) ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x532b398, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x532aca4, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x532ad58, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::ServerRefreshSubscriptionsForPlayerResponse*  obj) ;

/// @brief Method get_Results, addr 0x532b090, size 0x10c, virtual false, abstract: false, final false
inline ::GlobalNamespace::SubscriptionsVector* get_Results() ;

/// @brief Method set_Results, addr 0x532afa0, size 0xf0, virtual false, abstract: false, final false
inline void set_Results(::GlobalNamespace::SubscriptionsVector*  value) ;

/// @brief Method swigRelease, addr 0x532ad98, size 0x9c, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::ServerRefreshSubscriptionsForPlayerResponse*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ServerRefreshSubscriptionsForPlayerResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ServerRefreshSubscriptionsForPlayerResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ServerRefreshSubscriptionsForPlayerResponse(ServerRefreshSubscriptionsForPlayerResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ServerRefreshSubscriptionsForPlayerResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ServerRefreshSubscriptionsForPlayerResponse(ServerRefreshSubscriptionsForPlayerResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9516};

/// @brief Field swigCPtr, offset: 0x28, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ServerRefreshSubscriptionsForPlayerResponse, ___swigCPtr) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ServerRefreshSubscriptionsForPlayerResponse) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
