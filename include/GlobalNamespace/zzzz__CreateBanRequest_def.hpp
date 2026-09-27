#pragma once
// IWYU pragma private; include "GlobalNamespace/CreateBanRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MothershipRequest_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CreateBanRequest)
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
class CreateBanRequest;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CreateBanRequest*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CreateBanRequest*, "", "CreateBanRequest");
// Dependencies MothershipRequest, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: CreateBanRequest
class CORDL_TYPE CreateBanRequest : public ::GlobalNamespace::MothershipRequest {
public:
// Declarations
 __declspec(property(get=get_category, put=set_category)) int32_t  category;

 __declspec(property(get=get_duration_minutes, put=set_duration_minutes)) int32_t  duration_minutes;

 __declspec(property(get=get_env_id, put=set_env_id)) ::StringW  env_id;

 __declspec(property(get=get_metadata, put=set_metadata)) ::StringW  metadata;

 __declspec(property(get=get_org_wide, put=set_org_wide)) bool  org_wide;

 __declspec(property(get=get_player_id, put=set_player_id)) ::StringW  player_id;

 __declspec(property(get=get_reason, put=set_reason)) ::StringW  reason;

/// @brief Field swigCPtr, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

 __declspec(property(get=get_title_id, put=set_title_id)) ::StringW  title_id;

/// @brief Method Dispose, addr 0x5283ac0, size 0x16c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

static inline ::GlobalNamespace::CreateBanRequest* New_ctor() ;

static inline ::GlobalNamespace::CreateBanRequest* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method ToHttpRequest, addr 0x5283c2c, size 0x10c, virtual true, abstract: false, final false
inline ::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipHTTPRequest_t* ToHttpRequest() ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x5284a98, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x5283930, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x52839e4, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::CreateBanRequest*  obj) ;

/// @brief Method get_category, addr 0x5284314, size 0xd4, virtual false, abstract: false, final false
inline int32_t get_category() ;

/// @brief Method get_duration_minutes, addr 0x528466c, size 0xd4, virtual false, abstract: false, final false
inline int32_t get_duration_minutes() ;

/// @brief Method get_env_id, addr 0x5283fbc, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_env_id() ;

/// @brief Method get_metadata, addr 0x52849c4, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_metadata() ;

/// @brief Method get_org_wide, addr 0x5284818, size 0xd4, virtual false, abstract: false, final false
inline bool get_org_wide() ;

/// @brief Method get_player_id, addr 0x5284168, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_player_id() ;

/// @brief Method get_reason, addr 0x52844c0, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_reason() ;

/// @brief Method get_title_id, addr 0x5283e10, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_title_id() ;

/// @brief Method set_category, addr 0x528423c, size 0xd8, virtual false, abstract: false, final false
inline void set_category(int32_t  value) ;

/// @brief Method set_duration_minutes, addr 0x5284594, size 0xd8, virtual false, abstract: false, final false
inline void set_duration_minutes(int32_t  value) ;

/// @brief Method set_env_id, addr 0x5283ee4, size 0xd8, virtual false, abstract: false, final false
inline void set_env_id(::StringW  value) ;

/// @brief Method set_metadata, addr 0x52848ec, size 0xd8, virtual false, abstract: false, final false
inline void set_metadata(::StringW  value) ;

/// @brief Method set_org_wide, addr 0x5284740, size 0xd8, virtual false, abstract: false, final false
inline void set_org_wide(bool  value) ;

/// @brief Method set_player_id, addr 0x5284090, size 0xd8, virtual false, abstract: false, final false
inline void set_player_id(::StringW  value) ;

/// @brief Method set_reason, addr 0x52843e8, size 0xd8, virtual false, abstract: false, final false
inline void set_reason(::StringW  value) ;

/// @brief Method set_title_id, addr 0x5283d38, size 0xd8, virtual false, abstract: false, final false
inline void set_title_id(::StringW  value) ;

/// @brief Method swigRelease, addr 0x5283a24, size 0x9c, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::CreateBanRequest*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CreateBanRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CreateBanRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CreateBanRequest(CreateBanRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CreateBanRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CreateBanRequest(CreateBanRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8846};

/// @brief Field swigCPtr, offset: 0x28, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CreateBanRequest, ___swigCPtr) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CreateBanRequest) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
