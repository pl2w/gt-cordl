#pragma once
// IWYU pragma private; include "GlobalNamespace/RevokeMuteRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MothershipRequest_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(RevokeMuteRequest)
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
class RevokeMuteRequest;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::RevokeMuteRequest*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RevokeMuteRequest*, "", "RevokeMuteRequest");
// Dependencies MothershipRequest, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: RevokeMuteRequest
class CORDL_TYPE RevokeMuteRequest : public ::GlobalNamespace::MothershipRequest {
public:
// Declarations
 __declspec(property(get=get_env_id, put=set_env_id)) ::StringW  env_id;

 __declspec(property(get=get_mute_id, put=set_mute_id)) ::StringW  mute_id;

 __declspec(property(get=get_player_id, put=set_player_id)) ::StringW  player_id;

/// @brief Field swigCPtr, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

 __declspec(property(get=get_title_id, put=set_title_id)) ::StringW  title_id;

/// @brief Method Dispose, addr 0x531abe8, size 0x16c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

static inline ::GlobalNamespace::RevokeMuteRequest* New_ctor() ;

static inline ::GlobalNamespace::RevokeMuteRequest* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method ToHttpRequest, addr 0x531ad54, size 0x10c, virtual true, abstract: false, final false
inline ::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipHTTPRequest_t* ToHttpRequest() ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x531b510, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x531aa58, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x531ab0c, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::RevokeMuteRequest*  obj) ;

/// @brief Method get_env_id, addr 0x531b0e4, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_env_id() ;

/// @brief Method get_mute_id, addr 0x531b43c, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_mute_id() ;

/// @brief Method get_player_id, addr 0x531b290, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_player_id() ;

/// @brief Method get_title_id, addr 0x531af38, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_title_id() ;

/// @brief Method set_env_id, addr 0x531b00c, size 0xd8, virtual false, abstract: false, final false
inline void set_env_id(::StringW  value) ;

/// @brief Method set_mute_id, addr 0x531b364, size 0xd8, virtual false, abstract: false, final false
inline void set_mute_id(::StringW  value) ;

/// @brief Method set_player_id, addr 0x531b1b8, size 0xd8, virtual false, abstract: false, final false
inline void set_player_id(::StringW  value) ;

/// @brief Method set_title_id, addr 0x531ae60, size 0xd8, virtual false, abstract: false, final false
inline void set_title_id(::StringW  value) ;

/// @brief Method swigRelease, addr 0x531ab4c, size 0x9c, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::RevokeMuteRequest*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RevokeMuteRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RevokeMuteRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RevokeMuteRequest(RevokeMuteRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RevokeMuteRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RevokeMuteRequest(RevokeMuteRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9481};

/// @brief Field swigCPtr, offset: 0x28, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RevokeMuteRequest, ___swigCPtr) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RevokeMuteRequest) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
