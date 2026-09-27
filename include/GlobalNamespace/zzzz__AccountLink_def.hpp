#pragma once
// IWYU pragma private; include "GlobalNamespace/AccountLink.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(AccountLink)
namespace GlobalNamespace {
class SWIGTYPE_p_rapidjson__GenericObjectT_false_rapidjson__Value_t;
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
class AccountLink;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::AccountLink*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AccountLink*, "", "AccountLink");
// Dependencies System.Object, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: AccountLink
class CORDL_TYPE AccountLink : public ::System::Object {
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

/// @brief Field swigCMemOwn, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_swigCMemOwn, put=__cordl_internal_set_swigCMemOwn)) bool  swigCMemOwn;

/// @brief Field swigCPtr, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

 __declspec(property(get=get_title_id, put=set_title_id)) ::StringW  title_id;

/// @brief Field title_id_name, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_title_id_name, put=setStaticF_title_id_name)) ::StringW  title_id_name;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0x5257900, size 0x6c, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Dispose, addr 0x52579fc, size 0x14c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method Finalize, addr 0x525796c, size 0x90, virtual true, abstract: false, final false
inline void Finalize() ;

static inline ::GlobalNamespace::AccountLink* New_ctor() ;

static inline ::GlobalNamespace::AccountLink* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method ParseFromJson, addr 0x5258f58, size 0xfc, virtual false, abstract: false, final false
inline bool ParseFromJson(::GlobalNamespace::SWIGTYPE_p_rapidjson__GenericObjectT_false_rapidjson__Value_t*  object_) ;

constexpr bool const& __cordl_internal_get_swigCMemOwn() const;

constexpr bool& __cordl_internal_get_swigCMemOwn() ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCMemOwn(bool  value) ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x5259054, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x52577c8, size 0x60, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x5257828, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::AccountLink*  obj) ;

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

static inline ::StringW getStaticF_title_id_name() ;

/// @brief Method get_account_link_id, addr 0x5257dcc, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_account_link_id() ;

/// @brief Method get_created_time, addr 0x5258cd8, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_created_time() ;

/// @brief Method get_env_id, addr 0x5258b2c, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_env_id() ;

/// @brief Method get_external_service_name, addr 0x5257f78, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_external_service_name() ;

/// @brief Method get_external_service_org_scoped_id, addr 0x52582d0, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_external_service_org_scoped_id() ;

/// @brief Method get_external_service_user_id, addr 0x5258124, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_external_service_user_id() ;

/// @brief Method get_external_service_user_name, addr 0x525847c, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_external_service_user_name() ;

/// @brief Method get_is_original_link, addr 0x52587d4, size 0xd4, virtual false, abstract: false, final false
inline bool get_is_original_link() ;

/// @brief Method get_is_primary_link, addr 0x5258628, size 0xd4, virtual false, abstract: false, final false
inline bool get_is_primary_link() ;

/// @brief Method get_last_accessed_time, addr 0x5258e84, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_last_accessed_time() ;

/// @brief Method get_mothership_player_id, addr 0x5257c20, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_mothership_player_id() ;

/// @brief Method get_title_id, addr 0x5258980, size 0xd4, virtual false, abstract: false, final false
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

static inline void setStaticF_title_id_name(::StringW  value) ;

/// @brief Method set_account_link_id, addr 0x5257cf4, size 0xd8, virtual false, abstract: false, final false
inline void set_account_link_id(::StringW  value) ;

/// @brief Method set_created_time, addr 0x5258c00, size 0xd8, virtual false, abstract: false, final false
inline void set_created_time(::StringW  value) ;

/// @brief Method set_env_id, addr 0x5258a54, size 0xd8, virtual false, abstract: false, final false
inline void set_env_id(::StringW  value) ;

/// @brief Method set_external_service_name, addr 0x5257ea0, size 0xd8, virtual false, abstract: false, final false
inline void set_external_service_name(::StringW  value) ;

/// @brief Method set_external_service_org_scoped_id, addr 0x52581f8, size 0xd8, virtual false, abstract: false, final false
inline void set_external_service_org_scoped_id(::StringW  value) ;

/// @brief Method set_external_service_user_id, addr 0x525804c, size 0xd8, virtual false, abstract: false, final false
inline void set_external_service_user_id(::StringW  value) ;

/// @brief Method set_external_service_user_name, addr 0x52583a4, size 0xd8, virtual false, abstract: false, final false
inline void set_external_service_user_name(::StringW  value) ;

/// @brief Method set_is_original_link, addr 0x52586fc, size 0xd8, virtual false, abstract: false, final false
inline void set_is_original_link(bool  value) ;

/// @brief Method set_is_primary_link, addr 0x5258550, size 0xd8, virtual false, abstract: false, final false
inline void set_is_primary_link(bool  value) ;

/// @brief Method set_last_accessed_time, addr 0x5258dac, size 0xd8, virtual false, abstract: false, final false
inline void set_last_accessed_time(::StringW  value) ;

/// @brief Method set_mothership_player_id, addr 0x5257b48, size 0xd8, virtual false, abstract: false, final false
inline void set_mothership_player_id(::StringW  value) ;

/// @brief Method set_title_id, addr 0x52588a8, size 0xd8, virtual false, abstract: false, final false
inline void set_title_id(::StringW  value) ;

/// @brief Method swigRelease, addr 0x5257868, size 0x98, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::AccountLink*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AccountLink() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AccountLink", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AccountLink(AccountLink && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AccountLink", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AccountLink(AccountLink const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8769};

/// @brief Field swigCPtr, offset: 0x10, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

/// @brief Field swigCMemOwn, offset: 0x20, size: 0x1, def value: None
 bool  ___swigCMemOwn;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AccountLink, ___swigCPtr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AccountLink, ___swigCMemOwn) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AccountLink) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
