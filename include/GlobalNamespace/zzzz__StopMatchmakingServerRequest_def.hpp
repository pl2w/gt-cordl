#pragma once
// IWYU pragma private; include "GlobalNamespace/StopMatchmakingServerRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MothershipRequest_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(StopMatchmakingServerRequest)
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
class StopMatchmakingServerRequest;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::StopMatchmakingServerRequest*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::StopMatchmakingServerRequest*, "", "StopMatchmakingServerRequest");
// Dependencies MothershipRequest, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: StopMatchmakingServerRequest
class CORDL_TYPE StopMatchmakingServerRequest : public ::GlobalNamespace::MothershipRequest {
public:
// Declarations
/// @brief Field swigCPtr, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

 __declspec(property(get=get_ticket_id, put=set_ticket_id)) ::StringW  ticket_id;

/// @brief Method Dispose, addr 0x5342a10, size 0x16c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

static inline ::GlobalNamespace::StopMatchmakingServerRequest* New_ctor() ;

static inline ::GlobalNamespace::StopMatchmakingServerRequest* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method ToHttpRequest, addr 0x5342d28, size 0x10c, virtual true, abstract: false, final false
inline ::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipHTTPRequest_t* ToHttpRequest() ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x5342e34, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x5342880, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x5342934, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::StopMatchmakingServerRequest*  obj) ;

/// @brief Method get_ticket_id, addr 0x5342c54, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_ticket_id() ;

/// @brief Method set_ticket_id, addr 0x5342b7c, size 0xd8, virtual false, abstract: false, final false
inline void set_ticket_id(::StringW  value) ;

/// @brief Method swigRelease, addr 0x5342974, size 0x9c, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::StopMatchmakingServerRequest*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StopMatchmakingServerRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StopMatchmakingServerRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
StopMatchmakingServerRequest(StopMatchmakingServerRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StopMatchmakingServerRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
StopMatchmakingServerRequest(StopMatchmakingServerRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9561};

/// @brief Field swigCPtr, offset: 0x28, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::StopMatchmakingServerRequest, ___swigCPtr) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::StopMatchmakingServerRequest) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
