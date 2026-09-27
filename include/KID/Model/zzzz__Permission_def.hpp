#pragma once
// IWYU pragma private; include "KID/Model/Permission.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "KID/Model/zzzz__Permission_ManagedByEnum_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(Permission)
namespace GlobalNamespace {
struct Permission_ManagedByEnum;
}
// Forward declare root types
namespace KID::Model {
class Permission;
}
// Write type traits
MARK_REF_T(::KID::Model::Permission*);
DEFINE_IL2CPP_CLASS(::KID::Model::Permission*, "KID.Model", "Permission");
// [DataContract(Name = "Permission")]
// Dependencies KID.Model.Permission::ManagedByEnum, System.Object
namespace KID::Model {
// Is value type: false
// CS Name: KID.Model.Permission
class CORDL_TYPE Permission : public ::System::Object {
public:
// Declarations
using ManagedByEnum = ::GlobalNamespace::Permission_ManagedByEnum;

/// @brief [DataMember(Name = "enabled", IsRequired = true, EmitDefaultValue = true)]
 __declspec(property(get=get_Enabled, put=set_Enabled)) bool  Enabled;

/// @brief [DataMember(Name = "managedBy", IsRequired = true, EmitDefaultValue = true)]
 __declspec(property(get=get_ManagedBy, put=set_ManagedBy)) ::GlobalNamespace::Permission_ManagedByEnum  ManagedBy;

/// @brief [DataMember(Name = "name", IsRequired = true, EmitDefaultValue = true)]
 __declspec(property(get=get_Name, put=set_Name)) ::StringW  Name;

/// @brief Field <Enabled>k__BackingField, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get__Enabled_k__BackingField, put=__cordl_internal_set__Enabled_k__BackingField)) bool  _Enabled_k__BackingField;

/// @brief Field <ManagedBy>k__BackingField, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__ManagedBy_k__BackingField, put=__cordl_internal_set__ManagedBy_k__BackingField)) ::GlobalNamespace::Permission_ManagedByEnum  _ManagedBy_k__BackingField;

/// @brief Field <Name>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__Name_k__BackingField, put=__cordl_internal_set__Name_k__BackingField)) ::StringW  _Name_k__BackingField;

/// @brief [JsonConstructor]
static inline ::KID::Model::Permission* New_ctor() ;

static inline ::KID::Model::Permission* New_ctor(::StringW  name, bool  enabled, ::GlobalNamespace::Permission_ManagedByEnum  managedBy) ;

/// @brief Method ToJson, addr 0x9cd8ca8, size 0x5c, virtual true, abstract: false, final false
inline ::StringW ToJson() ;

/// @brief Method ToString, addr 0x9cd8ad4, size 0x1d4, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr bool const& __cordl_internal_get__Enabled_k__BackingField() const;

constexpr bool& __cordl_internal_get__Enabled_k__BackingField() ;

constexpr ::GlobalNamespace::Permission_ManagedByEnum const& __cordl_internal_get__ManagedBy_k__BackingField() const;

constexpr ::GlobalNamespace::Permission_ManagedByEnum& __cordl_internal_get__ManagedBy_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__Name_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Name_k__BackingField() ;

constexpr void __cordl_internal_set__Enabled_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__ManagedBy_k__BackingField(::GlobalNamespace::Permission_ManagedByEnum  value) ;

constexpr void __cordl_internal_set__Name_k__BackingField(::StringW  value) ;

/// [JsonConstructor]
/// @brief Method .ctor, addr 0x9cd8a10, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x9cd8a18, size 0x9c, virtual false, abstract: false, final false
inline void _ctor(::StringW  name, bool  enabled, ::GlobalNamespace::Permission_ManagedByEnum  managedBy) ;

/// [CompilerGenerated]
/// @brief Method get_Enabled, addr 0x9cd8ac4, size 0x8, virtual false, abstract: false, final false
inline bool get_Enabled() ;

/// [CompilerGenerated]
/// @brief Method get_ManagedBy, addr 0x9cd8a00, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::Permission_ManagedByEnum get_ManagedBy() ;

/// [CompilerGenerated]
/// @brief Method get_Name, addr 0x9cd8ab4, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Name() ;

/// [CompilerGenerated]
/// @brief Method set_Enabled, addr 0x9cd8acc, size 0x8, virtual false, abstract: false, final false
inline void set_Enabled(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_ManagedBy, addr 0x9cd8a08, size 0x8, virtual false, abstract: false, final false
inline void set_ManagedBy(::GlobalNamespace::Permission_ManagedByEnum  value) ;

/// [CompilerGenerated]
/// @brief Method set_Name, addr 0x9cd8abc, size 0x8, virtual false, abstract: false, final false
inline void set_Name(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Permission() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Permission", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Permission(Permission && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Permission", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Permission(Permission const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31093};

/// [CompilerGenerated]
/// @brief Field <ManagedBy>k__BackingField, offset: 0x10, size: 0x4, def value: None
 ::GlobalNamespace::Permission_ManagedByEnum  ____ManagedBy_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Name>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::StringW  ____Name_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Enabled>k__BackingField, offset: 0x20, size: 0x1, def value: None
 bool  ____Enabled_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::KID::Model::Permission, ____ManagedBy_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::KID::Model::Permission, ____Name_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::KID::Model::Permission, ____Enabled_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(sizeof(::KID::Model::Permission) == 0x28, "Size mismatch!");

} // namespace end def KID::Model
