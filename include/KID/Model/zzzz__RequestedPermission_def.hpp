#pragma once
// IWYU pragma private; include "KID/Model/RequestedPermission.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(RequestedPermission)
// Forward declare root types
namespace KID::Model {
class RequestedPermission;
}
// Write type traits
MARK_REF_T(::KID::Model::RequestedPermission*);
DEFINE_IL2CPP_CLASS(::KID::Model::RequestedPermission*, "KID.Model", "RequestedPermission");
// [DataContract(Name = "RequestedPermission")]
// Dependencies System.Object
namespace KID::Model {
// Is value type: false
// CS Name: KID.Model.RequestedPermission
class CORDL_TYPE RequestedPermission : public ::System::Object {
public:
// Declarations
/// @brief [DataMember(Name = "name", IsRequired = true, EmitDefaultValue = true)]
 __declspec(property(get=get_Name, put=set_Name)) ::StringW  Name;

/// @brief Field <Name>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__Name_k__BackingField, put=__cordl_internal_set__Name_k__BackingField)) ::StringW  _Name_k__BackingField;

/// @brief [JsonConstructor]
static inline ::KID::Model::RequestedPermission* New_ctor() ;

static inline ::KID::Model::RequestedPermission* New_ctor(::StringW  name) ;

/// @brief Method ToJson, addr 0x9cd9098, size 0x5c, virtual true, abstract: false, final false
inline ::StringW ToJson() ;

/// @brief Method ToString, addr 0x9cd8f90, size 0x108, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr ::StringW const& __cordl_internal_get__Name_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Name_k__BackingField() ;

constexpr void __cordl_internal_set__Name_k__BackingField(::StringW  value) ;

/// [JsonConstructor]
/// @brief Method .ctor, addr 0x9cd8efc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x9cd8f04, size 0x7c, virtual false, abstract: false, final false
inline void _ctor(::StringW  name) ;

/// [CompilerGenerated]
/// @brief Method get_Name, addr 0x9cd8f80, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Name() ;

/// [CompilerGenerated]
/// @brief Method set_Name, addr 0x9cd8f88, size 0x8, virtual false, abstract: false, final false
inline void set_Name(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RequestedPermission() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RequestedPermission", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RequestedPermission(RequestedPermission && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RequestedPermission", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RequestedPermission(RequestedPermission const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31095};

/// [CompilerGenerated]
/// @brief Field <Name>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____Name_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::KID::Model::RequestedPermission, ____Name_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(sizeof(::KID::Model::RequestedPermission) == 0x18, "Size mismatch!");

} // namespace end def KID::Model
