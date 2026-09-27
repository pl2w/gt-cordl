#pragma once
// IWYU pragma private; include "GlobalNamespace/MothershipPlayerIdentity.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(MothershipPlayerIdentity)
namespace GlobalNamespace {
class SWIGTYPE_p_rapidjson__GenericObjectT_false_rapidjson__Value_t;
}
namespace GlobalNamespace {
class StringVector;
}
namespace System::Runtime::InteropServices {
struct HandleRef;
}
namespace System {
class IDisposable;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace GlobalNamespace {
class MothershipPlayerIdentity;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MothershipPlayerIdentity*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MothershipPlayerIdentity*, "", "MothershipPlayerIdentity");
// Dependencies System.Object, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: MothershipPlayerIdentity
class CORDL_TYPE MothershipPlayerIdentity : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_account_link_id, put=set_account_link_id)) ::StringW  account_link_id;

/// @brief Field account_link_id_name, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_account_link_id_name, put=setStaticF_account_link_id_name)) ::StringW  account_link_id_name;

 __declspec(property(get=get_created_time, put=set_created_time)) ::StringW  created_time;

/// @brief Field created_time_name, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_created_time_name, put=setStaticF_created_time_name)) ::StringW  created_time_name;

 __declspec(property(get=get_env_id, put=set_env_id)) ::StringW  env_id;

/// @brief Field env_id_name, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_env_id_name, put=setStaticF_env_id_name)) ::StringW  env_id_name;

 __declspec(property(get=get_external_service_name, put=set_external_service_name)) ::StringW  external_service_name;

/// @brief Field external_service_name_name, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_external_service_name_name, put=setStaticF_external_service_name_name)) ::StringW  external_service_name_name;

 __declspec(property(get=get_external_service_org_scoped_id, put=set_external_service_org_scoped_id)) ::StringW  external_service_org_scoped_id;

/// @brief Field external_service_org_scoped_id_name, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_external_service_org_scoped_id_name, put=setStaticF_external_service_org_scoped_id_name)) ::StringW  external_service_org_scoped_id_name;

 __declspec(property(get=get_external_service_user_id, put=set_external_service_user_id)) ::StringW  external_service_user_id;

/// @brief Field external_service_user_id_name, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_external_service_user_id_name, put=setStaticF_external_service_user_id_name)) ::StringW  external_service_user_id_name;

 __declspec(property(get=get_external_service_user_name, put=set_external_service_user_name)) ::StringW  external_service_user_name;

/// @brief Field external_service_user_name_name, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_external_service_user_name_name, put=setStaticF_external_service_user_name_name)) ::StringW  external_service_user_name_name;

 __declspec(property(get=get_is_original_link, put=set_is_original_link)) bool  is_original_link;

/// @brief Field is_original_link_name, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_is_original_link_name, put=setStaticF_is_original_link_name)) ::StringW  is_original_link_name;

 __declspec(property(get=get_is_primary_link, put=set_is_primary_link)) bool  is_primary_link;

/// @brief Field is_primary_link_name, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_is_primary_link_name, put=setStaticF_is_primary_link_name)) ::StringW  is_primary_link_name;

 __declspec(property(get=get_last_accessed_time, put=set_last_accessed_time)) ::StringW  last_accessed_time;

/// @brief Field last_accessed_time_name, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_last_accessed_time_name, put=setStaticF_last_accessed_time_name)) ::StringW  last_accessed_time_name;

 __declspec(property(get=get_mothership_player_id, put=set_mothership_player_id)) ::StringW  mothership_player_id;

/// @brief Field mothership_player_id_name, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_mothership_player_id_name, put=setStaticF_mothership_player_id_name)) ::StringW  mothership_player_id_name;

 __declspec(property(get=get_org_scoped_id, put=set_org_scoped_id)) ::StringW  org_scoped_id;

/// @brief Field org_scoped_id_name, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_org_scoped_id_name, put=setStaticF_org_scoped_id_name)) ::StringW  org_scoped_id_name;

 __declspec(property(get=get_player_tags, put=set_player_tags)) ::GlobalNamespace::StringVector*  player_tags;

/// @brief Field player_tags_name, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_player_tags_name, put=setStaticF_player_tags_name)) ::StringW  player_tags_name;

/// @brief Field swigCMemOwn, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_swigCMemOwn, put=__cordl_internal_set_swigCMemOwn)) bool  swigCMemOwn;

/// @brief Field swigCPtr, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

 __declspec(property(get=get_title_id, put=set_title_id)) ::StringW  title_id;

/// @brief Field title_id_name, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_title_id_name, put=setStaticF_title_id_name)) ::StringW  title_id_name;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0x52ae628, size 0x6c, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Dispose, addr 0x52ae724, size 0x14c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method Finalize, addr 0x52ae694, size 0x90, virtual true, abstract: false, final false
inline void Finalize() ;

static inline ::GlobalNamespace::MothershipPlayerIdentity* New_ctor() ;

static inline ::GlobalNamespace::MothershipPlayerIdentity* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method ParseFromJson, addr 0x52b0028, size 0xfc, virtual false, abstract: false, final false
inline bool ParseFromJson(::GlobalNamespace::SWIGTYPE_p_rapidjson__GenericObjectT_false_rapidjson__Value_t*  object_) ;

constexpr bool const& __cordl_internal_get_swigCMemOwn() const;

constexpr bool& __cordl_internal_get_swigCMemOwn() ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCMemOwn(bool  value) ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x52b0124, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x52ae4f0, size 0x60, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x52ae550, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::MothershipPlayerIdentity*  obj) ;

static inline ::StringW getStaticF_account_link_id_name() ;

static inline ::StringW getStaticF_created_time_name() ;

static inline ::StringW getStaticF_env_id_name() ;

static inline ::StringW getStaticF_external_service_name_name() ;

static inline ::StringW getStaticF_external_service_org_scoped_id_name() ;

static inline ::StringW getStaticF_external_service_user_id_name() ;

static inline ::StringW getStaticF_external_service_user_name_name() ;

static inline ::StringW getStaticF_is_original_link_name() ;

static inline ::StringW getStaticF_is_primary_link_name() ;

static inline ::StringW getStaticF_last_accessed_time_name() ;

static inline ::StringW getStaticF_mothership_player_id_name() ;

static inline ::StringW getStaticF_org_scoped_id_name() ;

static inline ::StringW getStaticF_player_tags_name() ;

static inline ::StringW getStaticF_title_id_name() ;

/// @brief Method get_account_link_id, addr 0x52af1f4, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_account_link_id() ;

/// @brief Method get_created_time, addr 0x52afda8, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_created_time() ;

/// @brief Method get_env_id, addr 0x52aee4c, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_env_id() ;

/// @brief Method get_external_service_name, addr 0x52af3a0, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_external_service_name() ;

/// @brief Method get_external_service_org_scoped_id, addr 0x52af6f8, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_external_service_org_scoped_id() ;

/// @brief Method get_external_service_user_id, addr 0x52af54c, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_external_service_user_id() ;

/// @brief Method get_external_service_user_name, addr 0x52af8a4, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_external_service_user_name() ;

/// @brief Method get_is_original_link, addr 0x52afbfc, size 0xd4, virtual false, abstract: false, final false
inline bool get_is_original_link() ;

/// @brief Method get_is_primary_link, addr 0x52afa50, size 0xd4, virtual false, abstract: false, final false
inline bool get_is_primary_link() ;

/// @brief Method get_last_accessed_time, addr 0x52aff54, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_last_accessed_time() ;

/// @brief Method get_mothership_player_id, addr 0x52ae948, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_mothership_player_id() ;

/// @brief Method get_org_scoped_id, addr 0x52aeaf4, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_org_scoped_id() ;

/// @brief Method get_player_tags, addr 0x52af010, size 0x10c, virtual false, abstract: false, final false
inline ::GlobalNamespace::StringVector* get_player_tags() ;

/// @brief Method get_title_id, addr 0x52aeca0, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_title_id() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

static inline void setStaticF_account_link_id_name(::StringW  value) ;

static inline void setStaticF_created_time_name(::StringW  value) ;

static inline void setStaticF_env_id_name(::StringW  value) ;

static inline void setStaticF_external_service_name_name(::StringW  value) ;

static inline void setStaticF_external_service_org_scoped_id_name(::StringW  value) ;

static inline void setStaticF_external_service_user_id_name(::StringW  value) ;

static inline void setStaticF_external_service_user_name_name(::StringW  value) ;

static inline void setStaticF_is_original_link_name(::StringW  value) ;

static inline void setStaticF_is_primary_link_name(::StringW  value) ;

static inline void setStaticF_last_accessed_time_name(::StringW  value) ;

static inline void setStaticF_mothership_player_id_name(::StringW  value) ;

static inline void setStaticF_org_scoped_id_name(::StringW  value) ;

static inline void setStaticF_player_tags_name(::StringW  value) ;

static inline void setStaticF_title_id_name(::StringW  value) ;

/// @brief Method set_account_link_id, addr 0x52af11c, size 0xd8, virtual false, abstract: false, final false
inline void set_account_link_id(::StringW  value) ;

/// @brief Method set_created_time, addr 0x52afcd0, size 0xd8, virtual false, abstract: false, final false
inline void set_created_time(::StringW  value) ;

/// @brief Method set_env_id, addr 0x52aed74, size 0xd8, virtual false, abstract: false, final false
inline void set_env_id(::StringW  value) ;

/// @brief Method set_external_service_name, addr 0x52af2c8, size 0xd8, virtual false, abstract: false, final false
inline void set_external_service_name(::StringW  value) ;

/// @brief Method set_external_service_org_scoped_id, addr 0x52af620, size 0xd8, virtual false, abstract: false, final false
inline void set_external_service_org_scoped_id(::StringW  value) ;

/// @brief Method set_external_service_user_id, addr 0x52af474, size 0xd8, virtual false, abstract: false, final false
inline void set_external_service_user_id(::StringW  value) ;

/// @brief Method set_external_service_user_name, addr 0x52af7cc, size 0xd8, virtual false, abstract: false, final false
inline void set_external_service_user_name(::StringW  value) ;

/// @brief Method set_is_original_link, addr 0x52afb24, size 0xd8, virtual false, abstract: false, final false
inline void set_is_original_link(bool  value) ;

/// @brief Method set_is_primary_link, addr 0x52af978, size 0xd8, virtual false, abstract: false, final false
inline void set_is_primary_link(bool  value) ;

/// @brief Method set_last_accessed_time, addr 0x52afe7c, size 0xd8, virtual false, abstract: false, final false
inline void set_last_accessed_time(::StringW  value) ;

/// @brief Method set_mothership_player_id, addr 0x52ae870, size 0xd8, virtual false, abstract: false, final false
inline void set_mothership_player_id(::StringW  value) ;

/// @brief Method set_org_scoped_id, addr 0x52aea1c, size 0xd8, virtual false, abstract: false, final false
inline void set_org_scoped_id(::StringW  value) ;

/// @brief Method set_player_tags, addr 0x52aef20, size 0xf0, virtual false, abstract: false, final false
inline void set_player_tags(::GlobalNamespace::StringVector*  value) ;

/// @brief Method set_title_id, addr 0x52aebc8, size 0xd8, virtual false, abstract: false, final false
inline void set_title_id(::StringW  value) ;

/// @brief Method swigRelease, addr 0x52ae590, size 0x98, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::MothershipPlayerIdentity*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MothershipPlayerIdentity() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MothershipPlayerIdentity", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MothershipPlayerIdentity(MothershipPlayerIdentity && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MothershipPlayerIdentity", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MothershipPlayerIdentity(MothershipPlayerIdentity const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9345};

/// @brief Field swigCPtr, offset: 0x10, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

/// @brief Field swigCMemOwn, offset: 0x20, size: 0x1, def value: None
 bool  ___swigCMemOwn;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MothershipPlayerIdentity, ___swigCPtr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MothershipPlayerIdentity, ___swigCMemOwn) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MothershipPlayerIdentity) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
