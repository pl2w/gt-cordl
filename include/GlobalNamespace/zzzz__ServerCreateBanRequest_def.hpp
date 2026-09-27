#pragma once
// IWYU pragma private; include "GlobalNamespace/ServerCreateBanRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MothershipRequest_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ServerCreateBanRequest)
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
class ServerCreateBanRequest;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ServerCreateBanRequest*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ServerCreateBanRequest*, "", "ServerCreateBanRequest");
// Dependencies MothershipRequest, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: ServerCreateBanRequest
class CORDL_TYPE ServerCreateBanRequest : public ::GlobalNamespace::MothershipRequest {
public:
// Declarations
 __declspec(property(get=get_category, put=set_category)) int32_t  category;

 __declspec(property(get=get_duration_minutes, put=set_duration_minutes)) int32_t  duration_minutes;

 __declspec(property(get=get_is_hardware_ban, put=set_is_hardware_ban)) bool  is_hardware_ban;

 __declspec(property(get=get_metadata, put=set_metadata)) ::StringW  metadata;

 __declspec(property(get=get_org_wide, put=set_org_wide)) bool  org_wide;

 __declspec(property(get=get_player_id, put=set_player_id)) ::StringW  player_id;

 __declspec(property(get=get_reason, put=set_reason)) ::StringW  reason;

 __declspec(property(get=get_source, put=set_source)) ::StringW  source;

/// @brief Field swigCPtr, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

/// @brief Method Dispose, addr 0x5323274, size 0x16c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

static inline ::GlobalNamespace::ServerCreateBanRequest* New_ctor() ;

static inline ::GlobalNamespace::ServerCreateBanRequest* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method ToHttpRequest, addr 0x53233e0, size 0x10c, virtual true, abstract: false, final false
inline ::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipHTTPRequest_t* ToHttpRequest() ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x532424c, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x53230e4, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x5323198, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::ServerCreateBanRequest*  obj) ;

/// @brief Method get_category, addr 0x532391c, size 0xd4, virtual false, abstract: false, final false
inline int32_t get_category() ;

/// @brief Method get_duration_minutes, addr 0x5323c74, size 0xd4, virtual false, abstract: false, final false
inline int32_t get_duration_minutes() ;

/// @brief Method get_is_hardware_ban, addr 0x5324178, size 0xd4, virtual false, abstract: false, final false
inline bool get_is_hardware_ban() ;

/// @brief Method get_metadata, addr 0x5323e20, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_metadata() ;

/// @brief Method get_org_wide, addr 0x5323770, size 0xd4, virtual false, abstract: false, final false
inline bool get_org_wide() ;

/// @brief Method get_player_id, addr 0x53235c4, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_player_id() ;

/// @brief Method get_reason, addr 0x5323ac8, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_reason() ;

/// @brief Method get_source, addr 0x5323fcc, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_source() ;

/// @brief Method set_category, addr 0x5323844, size 0xd8, virtual false, abstract: false, final false
inline void set_category(int32_t  value) ;

/// @brief Method set_duration_minutes, addr 0x5323b9c, size 0xd8, virtual false, abstract: false, final false
inline void set_duration_minutes(int32_t  value) ;

/// @brief Method set_is_hardware_ban, addr 0x53240a0, size 0xd8, virtual false, abstract: false, final false
inline void set_is_hardware_ban(bool  value) ;

/// @brief Method set_metadata, addr 0x5323d48, size 0xd8, virtual false, abstract: false, final false
inline void set_metadata(::StringW  value) ;

/// @brief Method set_org_wide, addr 0x5323698, size 0xd8, virtual false, abstract: false, final false
inline void set_org_wide(bool  value) ;

/// @brief Method set_player_id, addr 0x53234ec, size 0xd8, virtual false, abstract: false, final false
inline void set_player_id(::StringW  value) ;

/// @brief Method set_reason, addr 0x53239f0, size 0xd8, virtual false, abstract: false, final false
inline void set_reason(::StringW  value) ;

/// @brief Method set_source, addr 0x5323ef4, size 0xd8, virtual false, abstract: false, final false
inline void set_source(::StringW  value) ;

/// @brief Method swigRelease, addr 0x53231d8, size 0x9c, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::ServerCreateBanRequest*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ServerCreateBanRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ServerCreateBanRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ServerCreateBanRequest(ServerCreateBanRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ServerCreateBanRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ServerCreateBanRequest(ServerCreateBanRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9500};

/// @brief Field swigCPtr, offset: 0x28, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ServerCreateBanRequest, ___swigCPtr) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ServerCreateBanRequest) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
