#pragma once
// IWYU pragma private; include "GlobalNamespace/ServerRefreshSubscriptionsForPlayerRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MothershipRequest_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ServerRefreshSubscriptionsForPlayerRequest)
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
class ServerRefreshSubscriptionsForPlayerRequest;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ServerRefreshSubscriptionsForPlayerRequest*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ServerRefreshSubscriptionsForPlayerRequest*, "", "ServerRefreshSubscriptionsForPlayerRequest");
// Dependencies MothershipRequest, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: ServerRefreshSubscriptionsForPlayerRequest
class CORDL_TYPE ServerRefreshSubscriptionsForPlayerRequest : public ::GlobalNamespace::MothershipRequest {
public:
// Declarations
 __declspec(property(get=get_playerId, put=set_playerId)) ::StringW  playerId;

/// @brief Field swigCPtr, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

/// @brief Method Dispose, addr 0x532a7b4, size 0x16c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

static inline ::GlobalNamespace::ServerRefreshSubscriptionsForPlayerRequest* New_ctor() ;

static inline ::GlobalNamespace::ServerRefreshSubscriptionsForPlayerRequest* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method ToHttpRequest, addr 0x532a920, size 0x10c, virtual true, abstract: false, final false
inline ::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipHTTPRequest_t* ToHttpRequest() ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x532abd8, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x532a624, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x532a6d8, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::ServerRefreshSubscriptionsForPlayerRequest*  obj) ;

/// @brief Method get_playerId, addr 0x532ab04, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_playerId() ;

/// @brief Method set_playerId, addr 0x532aa2c, size 0xd8, virtual false, abstract: false, final false
inline void set_playerId(::StringW  value) ;

/// @brief Method swigRelease, addr 0x532a718, size 0x9c, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::ServerRefreshSubscriptionsForPlayerRequest*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ServerRefreshSubscriptionsForPlayerRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ServerRefreshSubscriptionsForPlayerRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ServerRefreshSubscriptionsForPlayerRequest(ServerRefreshSubscriptionsForPlayerRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ServerRefreshSubscriptionsForPlayerRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ServerRefreshSubscriptionsForPlayerRequest(ServerRefreshSubscriptionsForPlayerRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9515};

/// @brief Field swigCPtr, offset: 0x28, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ServerRefreshSubscriptionsForPlayerRequest, ___swigCPtr) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ServerRefreshSubscriptionsForPlayerRequest) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
