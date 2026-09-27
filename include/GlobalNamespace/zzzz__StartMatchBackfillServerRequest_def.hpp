#pragma once
// IWYU pragma private; include "GlobalNamespace/StartMatchBackfillServerRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MothershipRequest_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(StartMatchBackfillServerRequest)
namespace GlobalNamespace {
class MatchmakingPlayerVector;
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
class StartMatchBackfillServerRequest;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::StartMatchBackfillServerRequest*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::StartMatchBackfillServerRequest*, "", "StartMatchBackfillServerRequest");
// Dependencies MothershipRequest, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: StartMatchBackfillServerRequest
class CORDL_TYPE StartMatchBackfillServerRequest : public ::GlobalNamespace::MothershipRequest {
public:
// Declarations
 __declspec(property(get=get_gamemode, put=set_gamemode)) ::StringW  gamemode;

 __declspec(property(get=get_players, put=set_players)) ::GlobalNamespace::MatchmakingPlayerVector*  players;

/// @brief Field swigCPtr, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

 __declspec(property(get=get_ticket_id, put=set_ticket_id)) ::StringW  ticket_id;

/// @brief Method Dispose, addr 0x533cb48, size 0x16c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

static inline ::GlobalNamespace::StartMatchBackfillServerRequest* New_ctor() ;

static inline ::GlobalNamespace::StartMatchBackfillServerRequest* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method ToHttpRequest, addr 0x533d208, size 0x10c, virtual true, abstract: false, final false
inline ::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipHTTPRequest_t* ToHttpRequest() ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x533d314, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x533c9b8, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x533ca6c, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::StartMatchBackfillServerRequest*  obj) ;

/// @brief Method get_gamemode, addr 0x533cf38, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_gamemode() ;

/// @brief Method get_players, addr 0x533d0fc, size 0x10c, virtual false, abstract: false, final false
inline ::GlobalNamespace::MatchmakingPlayerVector* get_players() ;

/// @brief Method get_ticket_id, addr 0x533cd8c, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_ticket_id() ;

/// @brief Method set_gamemode, addr 0x533ce60, size 0xd8, virtual false, abstract: false, final false
inline void set_gamemode(::StringW  value) ;

/// @brief Method set_players, addr 0x533d00c, size 0xf0, virtual false, abstract: false, final false
inline void set_players(::GlobalNamespace::MatchmakingPlayerVector*  value) ;

/// @brief Method set_ticket_id, addr 0x533ccb4, size 0xd8, virtual false, abstract: false, final false
inline void set_ticket_id(::StringW  value) ;

/// @brief Method swigRelease, addr 0x533caac, size 0x9c, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::StartMatchBackfillServerRequest*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StartMatchBackfillServerRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StartMatchBackfillServerRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
StartMatchBackfillServerRequest(StartMatchBackfillServerRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StartMatchBackfillServerRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
StartMatchBackfillServerRequest(StartMatchBackfillServerRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9547};

/// @brief Field swigCPtr, offset: 0x28, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::StartMatchBackfillServerRequest, ___swigCPtr) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::StartMatchBackfillServerRequest) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
