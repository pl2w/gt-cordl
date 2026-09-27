#pragma once
// IWYU pragma private; include "GlobalNamespace/GetMatchmakingStatusClientResponse.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MothershipResponse_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(GetMatchmakingStatusClientResponse)
namespace GlobalNamespace {
class MatchmakingTicket;
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
class GetMatchmakingStatusClientResponse;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GetMatchmakingStatusClientResponse*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GetMatchmakingStatusClientResponse*, "", "GetMatchmakingStatusClientResponse");
// Dependencies MothershipResponse, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: GetMatchmakingStatusClientResponse
class CORDL_TYPE GetMatchmakingStatusClientResponse : public ::GlobalNamespace::MothershipResponse {
public:
// Declarations
/// @brief Field swigCPtr, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

 __declspec(property(get=get_ticket, put=set_ticket)) ::GlobalNamespace::MatchmakingTicket*  ticket;

/// @brief Method Dispose, addr 0x540f0c0, size 0x16c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method FromMothershipResponse, addr 0x540f310, size 0x118, virtual false, abstract: false, final false
static inline ::GlobalNamespace::GetMatchmakingStatusClientResponse* FromMothershipResponse(::GlobalNamespace::MothershipResponse*  response) ;

static inline ::GlobalNamespace::GetMatchmakingStatusClientResponse* New_ctor() ;

static inline ::GlobalNamespace::GetMatchmakingStatusClientResponse* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method ParseFromResponseString, addr 0x540f22c, size 0xe4, virtual true, abstract: false, final false
inline bool ParseFromResponseString(::StringW  response) ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x540f648, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x540ef30, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x540efe4, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::GetMatchmakingStatusClientResponse*  obj) ;

/// @brief Method get_ticket, addr 0x540f53c, size 0x10c, virtual false, abstract: false, final false
inline ::GlobalNamespace::MatchmakingTicket* get_ticket() ;

/// @brief Method set_ticket, addr 0x540f428, size 0x114, virtual false, abstract: false, final false
inline void set_ticket(::GlobalNamespace::MatchmakingTicket*  value) ;

/// @brief Method swigRelease, addr 0x540f024, size 0x9c, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::GetMatchmakingStatusClientResponse*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GetMatchmakingStatusClientResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GetMatchmakingStatusClientResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GetMatchmakingStatusClientResponse(GetMatchmakingStatusClientResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GetMatchmakingStatusClientResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GetMatchmakingStatusClientResponse(GetMatchmakingStatusClientResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9040};

/// @brief Field swigCPtr, offset: 0x28, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GetMatchmakingStatusClientResponse, ___swigCPtr) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GetMatchmakingStatusClientResponse) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
