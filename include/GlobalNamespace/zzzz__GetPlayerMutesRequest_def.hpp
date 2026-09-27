#pragma once
// IWYU pragma private; include "GlobalNamespace/GetPlayerMutesRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MothershipRequest_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(GetPlayerMutesRequest)
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
class GetPlayerMutesRequest;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GetPlayerMutesRequest*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GetPlayerMutesRequest*, "", "GetPlayerMutesRequest");
// Dependencies MothershipRequest, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: GetPlayerMutesRequest
class CORDL_TYPE GetPlayerMutesRequest : public ::GlobalNamespace::MothershipRequest {
public:
// Declarations
 __declspec(property(get=get_env_id, put=set_env_id)) ::StringW  env_id;

 __declspec(property(get=get_include_expired, put=set_include_expired)) bool  include_expired;

 __declspec(property(get=get_player_id, put=set_player_id)) ::StringW  player_id;

/// @brief Field swigCPtr, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

 __declspec(property(get=get_title_id, put=set_title_id)) ::StringW  title_id;

/// @brief Method Dispose, addr 0x5415390, size 0x16c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

static inline ::GlobalNamespace::GetPlayerMutesRequest* New_ctor() ;

static inline ::GlobalNamespace::GetPlayerMutesRequest* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method ToHttpRequest, addr 0x54154fc, size 0x10c, virtual true, abstract: false, final false
inline ::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipHTTPRequest_t* ToHttpRequest() ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x5415cb8, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x5415200, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x54152b4, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::GetPlayerMutesRequest*  obj) ;

/// @brief Method get_env_id, addr 0x541588c, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_env_id() ;

/// @brief Method get_include_expired, addr 0x5415be4, size 0xd4, virtual false, abstract: false, final false
inline bool get_include_expired() ;

/// @brief Method get_player_id, addr 0x5415a38, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_player_id() ;

/// @brief Method get_title_id, addr 0x54156e0, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_title_id() ;

/// @brief Method set_env_id, addr 0x54157b4, size 0xd8, virtual false, abstract: false, final false
inline void set_env_id(::StringW  value) ;

/// @brief Method set_include_expired, addr 0x5415b0c, size 0xd8, virtual false, abstract: false, final false
inline void set_include_expired(bool  value) ;

/// @brief Method set_player_id, addr 0x5415960, size 0xd8, virtual false, abstract: false, final false
inline void set_player_id(::StringW  value) ;

/// @brief Method set_title_id, addr 0x5415608, size 0xd8, virtual false, abstract: false, final false
inline void set_title_id(::StringW  value) ;

/// @brief Method swigRelease, addr 0x54152f4, size 0x9c, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::GetPlayerMutesRequest*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GetPlayerMutesRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GetPlayerMutesRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GetPlayerMutesRequest(GetPlayerMutesRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GetPlayerMutesRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GetPlayerMutesRequest(GetPlayerMutesRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9055};

/// @brief Field swigCPtr, offset: 0x28, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GetPlayerMutesRequest, ___swigCPtr) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GetPlayerMutesRequest) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
