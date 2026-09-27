#pragma once
// IWYU pragma private; include "GlobalNamespace/DeleteMuteRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MothershipRequest_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(DeleteMuteRequest)
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
class DeleteMuteRequest;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::DeleteMuteRequest*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DeleteMuteRequest*, "", "DeleteMuteRequest");
// Dependencies MothershipRequest, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: DeleteMuteRequest
class CORDL_TYPE DeleteMuteRequest : public ::GlobalNamespace::MothershipRequest {
public:
// Declarations
 __declspec(property(get=get_env_id, put=set_env_id)) ::StringW  env_id;

 __declspec(property(get=get_mute_id, put=set_mute_id)) ::StringW  mute_id;

 __declspec(property(get=get_player_id, put=set_player_id)) ::StringW  player_id;

/// @brief Field swigCPtr, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

 __declspec(property(get=get_title_id, put=set_title_id)) ::StringW  title_id;

/// @brief Method Dispose, addr 0x53e195c, size 0x16c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

static inline ::GlobalNamespace::DeleteMuteRequest* New_ctor() ;

static inline ::GlobalNamespace::DeleteMuteRequest* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method ToHttpRequest, addr 0x53e1ac8, size 0x10c, virtual true, abstract: false, final false
inline ::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipHTTPRequest_t* ToHttpRequest() ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x53e2284, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x53e17cc, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x53e1880, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::DeleteMuteRequest*  obj) ;

/// @brief Method get_env_id, addr 0x53e1e58, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_env_id() ;

/// @brief Method get_mute_id, addr 0x53e21b0, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_mute_id() ;

/// @brief Method get_player_id, addr 0x53e2004, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_player_id() ;

/// @brief Method get_title_id, addr 0x53e1cac, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_title_id() ;

/// @brief Method set_env_id, addr 0x53e1d80, size 0xd8, virtual false, abstract: false, final false
inline void set_env_id(::StringW  value) ;

/// @brief Method set_mute_id, addr 0x53e20d8, size 0xd8, virtual false, abstract: false, final false
inline void set_mute_id(::StringW  value) ;

/// @brief Method set_player_id, addr 0x53e1f2c, size 0xd8, virtual false, abstract: false, final false
inline void set_player_id(::StringW  value) ;

/// @brief Method set_title_id, addr 0x53e1bd4, size 0xd8, virtual false, abstract: false, final false
inline void set_title_id(::StringW  value) ;

/// @brief Method swigRelease, addr 0x53e18c0, size 0x9c, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::DeleteMuteRequest*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DeleteMuteRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DeleteMuteRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DeleteMuteRequest(DeleteMuteRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DeleteMuteRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DeleteMuteRequest(DeleteMuteRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8945};

/// @brief Field swigCPtr, offset: 0x28, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DeleteMuteRequest, ___swigCPtr) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DeleteMuteRequest) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
