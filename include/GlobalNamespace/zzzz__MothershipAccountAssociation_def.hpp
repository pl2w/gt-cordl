#pragma once
// IWYU pragma private; include "GlobalNamespace/MothershipAccountAssociation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(MothershipAccountAssociation)
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
class MothershipAccountAssociation;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MothershipAccountAssociation*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MothershipAccountAssociation*, "", "MothershipAccountAssociation");
// Dependencies System.Object, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: MothershipAccountAssociation
class CORDL_TYPE MothershipAccountAssociation : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_association_id, put=set_association_id)) ::StringW  association_id;

/// @brief Field association_id_name, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_association_id_name, put=setStaticF_association_id_name)) ::StringW  association_id_name;

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

/// @brief Method Dispose, addr 0x5585a10, size 0x6c, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Dispose, addr 0x5585b0c, size 0x14c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method Finalize, addr 0x5585a7c, size 0x90, virtual true, abstract: false, final false
inline void Finalize() ;

static inline ::GlobalNamespace::MothershipAccountAssociation* New_ctor() ;

static inline ::GlobalNamespace::MothershipAccountAssociation* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method ParseFromJson, addr 0x5586ad4, size 0xf4, virtual false, abstract: false, final false
inline bool ParseFromJson(::GlobalNamespace::SWIGTYPE_p_rapidjson__GenericObjectT_false_rapidjson__Value_t*  object_) ;

constexpr bool const& __cordl_internal_get_swigCMemOwn() const;

constexpr bool& __cordl_internal_get_swigCMemOwn() ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCMemOwn(bool  value) ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x5586bc8, size 0xc4, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x55858d8, size 0x60, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x5585938, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::MothershipAccountAssociation*  obj) ;

static inline ::StringW getStaticF_association_id_name() ;

static inline ::StringW getStaticF_created_time_name() ;

static inline ::StringW getStaticF_env_id_name() ;

static inline ::StringW getStaticF_external_service_name_name() ;

static inline ::StringW getStaticF_external_service_org_scoped_id_name() ;

static inline ::StringW getStaticF_external_service_user_id_name() ;

static inline ::StringW getStaticF_external_service_user_name_name() ;

static inline ::StringW getStaticF_mothership_player_id_name() ;

static inline ::StringW getStaticF_title_id_name() ;

/// @brief Method get_association_id, addr 0x5585ec4, size 0xcc, virtual false, abstract: false, final false
inline ::StringW get_association_id() ;

/// @brief Method get_created_time, addr 0x5586a08, size 0xcc, virtual false, abstract: false, final false
inline ::StringW get_created_time() ;

/// @brief Method get_env_id, addr 0x558686c, size 0xcc, virtual false, abstract: false, final false
inline ::StringW get_env_id() ;

/// @brief Method get_external_service_name, addr 0x5586060, size 0xcc, virtual false, abstract: false, final false
inline ::StringW get_external_service_name() ;

/// @brief Method get_external_service_org_scoped_id, addr 0x5586398, size 0xcc, virtual false, abstract: false, final false
inline ::StringW get_external_service_org_scoped_id() ;

/// @brief Method get_external_service_user_id, addr 0x55861fc, size 0xcc, virtual false, abstract: false, final false
inline ::StringW get_external_service_user_id() ;

/// @brief Method get_external_service_user_name, addr 0x5586534, size 0xcc, virtual false, abstract: false, final false
inline ::StringW get_external_service_user_name() ;

/// @brief Method get_mothership_player_id, addr 0x5585d28, size 0xcc, virtual false, abstract: false, final false
inline ::StringW get_mothership_player_id() ;

/// @brief Method get_title_id, addr 0x55866d0, size 0xcc, virtual false, abstract: false, final false
inline ::StringW get_title_id() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

static inline void setStaticF_association_id_name(::StringW  value) ;

static inline void setStaticF_created_time_name(::StringW  value) ;

static inline void setStaticF_env_id_name(::StringW  value) ;

static inline void setStaticF_external_service_name_name(::StringW  value) ;

static inline void setStaticF_external_service_org_scoped_id_name(::StringW  value) ;

static inline void setStaticF_external_service_user_id_name(::StringW  value) ;

static inline void setStaticF_external_service_user_name_name(::StringW  value) ;

static inline void setStaticF_mothership_player_id_name(::StringW  value) ;

static inline void setStaticF_title_id_name(::StringW  value) ;

/// @brief Method set_association_id, addr 0x5585df4, size 0xd0, virtual false, abstract: false, final false
inline void set_association_id(::StringW  value) ;

/// @brief Method set_created_time, addr 0x5586938, size 0xd0, virtual false, abstract: false, final false
inline void set_created_time(::StringW  value) ;

/// @brief Method set_env_id, addr 0x558679c, size 0xd0, virtual false, abstract: false, final false
inline void set_env_id(::StringW  value) ;

/// @brief Method set_external_service_name, addr 0x5585f90, size 0xd0, virtual false, abstract: false, final false
inline void set_external_service_name(::StringW  value) ;

/// @brief Method set_external_service_org_scoped_id, addr 0x55862c8, size 0xd0, virtual false, abstract: false, final false
inline void set_external_service_org_scoped_id(::StringW  value) ;

/// @brief Method set_external_service_user_id, addr 0x558612c, size 0xd0, virtual false, abstract: false, final false
inline void set_external_service_user_id(::StringW  value) ;

/// @brief Method set_external_service_user_name, addr 0x5586464, size 0xd0, virtual false, abstract: false, final false
inline void set_external_service_user_name(::StringW  value) ;

/// @brief Method set_mothership_player_id, addr 0x5585c58, size 0xd0, virtual false, abstract: false, final false
inline void set_mothership_player_id(::StringW  value) ;

/// @brief Method set_title_id, addr 0x5586600, size 0xd0, virtual false, abstract: false, final false
inline void set_title_id(::StringW  value) ;

/// @brief Method swigRelease, addr 0x5585978, size 0x98, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::MothershipAccountAssociation*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MothershipAccountAssociation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MothershipAccountAssociation", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MothershipAccountAssociation(MothershipAccountAssociation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MothershipAccountAssociation", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MothershipAccountAssociation(MothershipAccountAssociation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9295};

/// @brief Field swigCPtr, offset: 0x10, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

/// @brief Field swigCMemOwn, offset: 0x20, size: 0x1, def value: None
 bool  ___swigCMemOwn;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MothershipAccountAssociation, ___swigCPtr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MothershipAccountAssociation, ___swigCMemOwn) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MothershipAccountAssociation) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
