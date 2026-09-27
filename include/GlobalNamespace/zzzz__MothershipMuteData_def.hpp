#pragma once
// IWYU pragma private; include "GlobalNamespace/MothershipMuteData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MothershipResponse_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MothershipMuteData)
namespace System::Runtime::InteropServices {
struct HandleRef;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace GlobalNamespace {
class MothershipMuteData;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MothershipMuteData*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MothershipMuteData*, "", "MothershipMuteData");
// Dependencies MothershipResponse, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: MothershipMuteData
class CORDL_TYPE MothershipMuteData : public ::GlobalNamespace::MothershipResponse {
public:
// Declarations
 __declspec(property(get=get_created_at, put=set_created_at)) ::StringW  created_at;

 __declspec(property(get=get_created_by, put=set_created_by)) ::StringW  created_by;

 __declspec(property(get=get_duration_minutes, put=set_duration_minutes)) int32_t  duration_minutes;

 __declspec(property(get=get_env_id, put=set_env_id)) ::StringW  env_id;

 __declspec(property(get=get_expires_at, put=set_expires_at)) ::StringW  expires_at;

 __declspec(property(get=get_mute_id, put=set_mute_id)) ::StringW  mute_id;

 __declspec(property(get=get_muted_user_id, put=set_muted_user_id)) ::StringW  muted_user_id;

 __declspec(property(get=get_reason, put=set_reason)) ::StringW  reason;

 __declspec(property(get=get_revoked, put=set_revoked)) bool  revoked;

/// @brief Field swigCPtr, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

 __declspec(property(get=get_title_id, put=set_title_id)) ::StringW  title_id;

/// @brief Method Dispose, addr 0x52aa768, size 0x15c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

static inline ::GlobalNamespace::MothershipMuteData* New_ctor() ;

static inline ::GlobalNamespace::MothershipMuteData* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method ParseFromString, addr 0x52ab97c, size 0xe4, virtual false, abstract: false, final false
inline bool ParseFromString(::StringW  response) ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x52aba60, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x52aa5e0, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x52aa690, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::MothershipMuteData*  obj) ;

/// @brief Method get_created_at, addr 0x52ab1f8, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_created_at() ;

/// @brief Method get_created_by, addr 0x52ab04c, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_created_by() ;

/// @brief Method get_duration_minutes, addr 0x52ab6fc, size 0xd4, virtual false, abstract: false, final false
inline int32_t get_duration_minutes() ;

/// @brief Method get_env_id, addr 0x52aab48, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_env_id() ;

/// @brief Method get_expires_at, addr 0x52ab3a4, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_expires_at() ;

/// @brief Method get_mute_id, addr 0x52aa99c, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_mute_id() ;

/// @brief Method get_muted_user_id, addr 0x52aaea0, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_muted_user_id() ;

/// @brief Method get_reason, addr 0x52ab550, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_reason() ;

/// @brief Method get_revoked, addr 0x52ab8a8, size 0xd4, virtual false, abstract: false, final false
inline bool get_revoked() ;

/// @brief Method get_title_id, addr 0x52aacf4, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_title_id() ;

/// @brief Method set_created_at, addr 0x52ab120, size 0xd8, virtual false, abstract: false, final false
inline void set_created_at(::StringW  value) ;

/// @brief Method set_created_by, addr 0x52aaf74, size 0xd8, virtual false, abstract: false, final false
inline void set_created_by(::StringW  value) ;

/// @brief Method set_duration_minutes, addr 0x52ab624, size 0xd8, virtual false, abstract: false, final false
inline void set_duration_minutes(int32_t  value) ;

/// @brief Method set_env_id, addr 0x52aaa70, size 0xd8, virtual false, abstract: false, final false
inline void set_env_id(::StringW  value) ;

/// @brief Method set_expires_at, addr 0x52ab2cc, size 0xd8, virtual false, abstract: false, final false
inline void set_expires_at(::StringW  value) ;

/// @brief Method set_mute_id, addr 0x52aa8c4, size 0xd8, virtual false, abstract: false, final false
inline void set_mute_id(::StringW  value) ;

/// @brief Method set_muted_user_id, addr 0x52aadc8, size 0xd8, virtual false, abstract: false, final false
inline void set_muted_user_id(::StringW  value) ;

/// @brief Method set_reason, addr 0x52ab478, size 0xd8, virtual false, abstract: false, final false
inline void set_reason(::StringW  value) ;

/// @brief Method set_revoked, addr 0x52ab7d0, size 0xd8, virtual false, abstract: false, final false
inline void set_revoked(bool  value) ;

/// @brief Method set_title_id, addr 0x52aac1c, size 0xd8, virtual false, abstract: false, final false
inline void set_title_id(::StringW  value) ;

/// @brief Method swigRelease, addr 0x52aa6d0, size 0x98, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::MothershipMuteData*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MothershipMuteData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MothershipMuteData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MothershipMuteData(MothershipMuteData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MothershipMuteData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MothershipMuteData(MothershipMuteData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9342};

/// @brief Field swigCPtr, offset: 0x28, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MothershipMuteData, ___swigCPtr) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MothershipMuteData) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
