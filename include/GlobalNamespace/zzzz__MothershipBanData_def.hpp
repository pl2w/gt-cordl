#pragma once
// IWYU pragma private; include "GlobalNamespace/MothershipBanData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MothershipResponse_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MothershipBanData)
namespace GlobalNamespace {
class SWIGTYPE_p_rapidjson__GenericObjectT_false_rapidjson__Value_t;
}
namespace System::Runtime::InteropServices {
struct HandleRef;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace GlobalNamespace {
class MothershipBanData;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MothershipBanData*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MothershipBanData*, "", "MothershipBanData");
// Dependencies MothershipResponse, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: MothershipBanData
class CORDL_TYPE MothershipBanData : public ::GlobalNamespace::MothershipResponse {
public:
// Declarations
 __declspec(property(get=get_ban_id, put=set_ban_id)) ::StringW  ban_id;

 __declspec(property(get=get_category, put=set_category)) int32_t  category;

 __declspec(property(get=get_created_at, put=set_created_at)) ::StringW  created_at;

 __declspec(property(get=get_created_by, put=set_created_by)) ::StringW  created_by;

 __declspec(property(get=get_duration_minutes, put=set_duration_minutes)) int32_t  duration_minutes;

 __declspec(property(get=get_env_id, put=set_env_id)) ::StringW  env_id;

 __declspec(property(get=get_expires_at, put=set_expires_at)) ::StringW  expires_at;

 __declspec(property(get=get_metadata, put=set_metadata)) ::StringW  metadata;

 __declspec(property(get=get_mothership_player_id, put=set_mothership_player_id)) ::StringW  mothership_player_id;

 __declspec(property(get=get_org_wide, put=set_org_wide)) bool  org_wide;

 __declspec(property(get=get_player_id, put=set_player_id)) ::StringW  player_id;

 __declspec(property(get=get_reason, put=set_reason)) ::StringW  reason;

 __declspec(property(get=get_revoked, put=set_revoked)) bool  revoked;

/// @brief Field swigCPtr, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

 __declspec(property(get=get_title_id, put=set_title_id)) ::StringW  title_id;

/// @brief Method Dispose, addr 0x559c7d8, size 0x16c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

static inline ::GlobalNamespace::MothershipBanData* New_ctor() ;

static inline ::GlobalNamespace::MothershipBanData* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method ParseFromJson, addr 0x559e0a8, size 0xf4, virtual false, abstract: false, final false
inline bool ParseFromJson(::GlobalNamespace::SWIGTYPE_p_rapidjson__GenericObjectT_false_rapidjson__Value_t*  object_) ;

/// @brief Method ParseFromString, addr 0x559dfcc, size 0xdc, virtual false, abstract: false, final false
inline bool ParseFromString(::StringW  response) ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x559e19c, size 0xc4, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x559c648, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x559c6fc, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::MothershipBanData*  obj) ;

/// @brief Method get_ban_id, addr 0x559ca14, size 0xcc, virtual false, abstract: false, final false
inline ::StringW get_ban_id() ;

/// @brief Method get_category, addr 0x559d890, size 0xcc, virtual false, abstract: false, final false
inline int32_t get_category() ;

/// @brief Method get_created_at, addr 0x559d3bc, size 0xcc, virtual false, abstract: false, final false
inline ::StringW get_created_at() ;

/// @brief Method get_created_by, addr 0x559d220, size 0xcc, virtual false, abstract: false, final false
inline ::StringW get_created_by() ;

/// @brief Method get_duration_minutes, addr 0x559d6f4, size 0xcc, virtual false, abstract: false, final false
inline int32_t get_duration_minutes() ;

/// @brief Method get_env_id, addr 0x559cbb0, size 0xcc, virtual false, abstract: false, final false
inline ::StringW get_env_id() ;

/// @brief Method get_expires_at, addr 0x559d558, size 0xcc, virtual false, abstract: false, final false
inline ::StringW get_expires_at() ;

/// @brief Method get_metadata, addr 0x559dd64, size 0xcc, virtual false, abstract: false, final false
inline ::StringW get_metadata() ;

/// @brief Method get_mothership_player_id, addr 0x559df00, size 0xcc, virtual false, abstract: false, final false
inline ::StringW get_mothership_player_id() ;

/// @brief Method get_org_wide, addr 0x559cee8, size 0xcc, virtual false, abstract: false, final false
inline bool get_org_wide() ;

/// @brief Method get_player_id, addr 0x559d084, size 0xcc, virtual false, abstract: false, final false
inline ::StringW get_player_id() ;

/// @brief Method get_reason, addr 0x559dbc8, size 0xcc, virtual false, abstract: false, final false
inline ::StringW get_reason() ;

/// @brief Method get_revoked, addr 0x559da2c, size 0xcc, virtual false, abstract: false, final false
inline bool get_revoked() ;

/// @brief Method get_title_id, addr 0x559cd4c, size 0xcc, virtual false, abstract: false, final false
inline ::StringW get_title_id() ;

/// @brief Method set_ban_id, addr 0x559c944, size 0xd0, virtual false, abstract: false, final false
inline void set_ban_id(::StringW  value) ;

/// @brief Method set_category, addr 0x559d7c0, size 0xd0, virtual false, abstract: false, final false
inline void set_category(int32_t  value) ;

/// @brief Method set_created_at, addr 0x559d2ec, size 0xd0, virtual false, abstract: false, final false
inline void set_created_at(::StringW  value) ;

/// @brief Method set_created_by, addr 0x559d150, size 0xd0, virtual false, abstract: false, final false
inline void set_created_by(::StringW  value) ;

/// @brief Method set_duration_minutes, addr 0x559d624, size 0xd0, virtual false, abstract: false, final false
inline void set_duration_minutes(int32_t  value) ;

/// @brief Method set_env_id, addr 0x559cae0, size 0xd0, virtual false, abstract: false, final false
inline void set_env_id(::StringW  value) ;

/// @brief Method set_expires_at, addr 0x559d488, size 0xd0, virtual false, abstract: false, final false
inline void set_expires_at(::StringW  value) ;

/// @brief Method set_metadata, addr 0x559dc94, size 0xd0, virtual false, abstract: false, final false
inline void set_metadata(::StringW  value) ;

/// @brief Method set_mothership_player_id, addr 0x559de30, size 0xd0, virtual false, abstract: false, final false
inline void set_mothership_player_id(::StringW  value) ;

/// @brief Method set_org_wide, addr 0x559ce18, size 0xd0, virtual false, abstract: false, final false
inline void set_org_wide(bool  value) ;

/// @brief Method set_player_id, addr 0x559cfb4, size 0xd0, virtual false, abstract: false, final false
inline void set_player_id(::StringW  value) ;

/// @brief Method set_reason, addr 0x559daf8, size 0xd0, virtual false, abstract: false, final false
inline void set_reason(::StringW  value) ;

/// @brief Method set_revoked, addr 0x559d95c, size 0xd0, virtual false, abstract: false, final false
inline void set_revoked(bool  value) ;

/// @brief Method set_title_id, addr 0x559cc7c, size 0xd0, virtual false, abstract: false, final false
inline void set_title_id(::StringW  value) ;

/// @brief Method swigRelease, addr 0x559c73c, size 0x9c, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::MothershipBanData*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MothershipBanData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MothershipBanData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MothershipBanData(MothershipBanData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MothershipBanData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MothershipBanData(MothershipBanData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9312};

/// @brief Field swigCPtr, offset: 0x28, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MothershipBanData, ___swigCPtr) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MothershipBanData) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
