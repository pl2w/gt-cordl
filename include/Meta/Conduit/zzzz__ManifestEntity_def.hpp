#pragma once
// IWYU pragma private; include "Meta/Conduit/ManifestEntity.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ManifestEntity)
namespace Meta::Conduit {
class WitKeyword;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Meta::Conduit {
class ManifestEntity;
}
// Write type traits
MARK_REF_T(::Meta::Conduit::ManifestEntity*);
DEFINE_IL2CPP_CLASS(::Meta::Conduit::ManifestEntity*, "Meta.Conduit", "ManifestEntity");
// Dependencies System.Object
namespace Meta::Conduit {
// Is value type: false
// CS Name: Meta.Conduit.ManifestEntity
class CORDL_TYPE ManifestEntity : public ::System::Object {
public:
// Declarations
/// @brief [Preserve]
 __declspec(property(get=get_Assembly, put=set_Assembly)) ::StringW  Assembly;

/// @brief [Preserve]
 __declspec(property(get=get_Name, put=set_Name)) ::StringW  Name;

/// @brief [Preserve]
 __declspec(property(get=get_Namespace, put=set_Namespace)) ::StringW  Namespace;

/// @brief [Preserve]
 __declspec(property(get=get_Type, put=set_Type)) ::StringW  Type;

/// @brief [Preserve]
 __declspec(property(get=get_Values, put=set_Values)) ::System::Collections::Generic::List_1<::Meta::Conduit::WitKeyword*>*  Values;

/// @brief Field <Assembly>k__BackingField, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__Assembly_k__BackingField, put=__cordl_internal_set__Assembly_k__BackingField)) ::StringW  _Assembly_k__BackingField;

/// @brief Field <ID>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__ID_k__BackingField, put=__cordl_internal_set__ID_k__BackingField)) ::StringW  _ID_k__BackingField;

/// @brief Field <Name>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__Name_k__BackingField, put=__cordl_internal_set__Name_k__BackingField)) ::StringW  _Name_k__BackingField;

/// @brief Field <Namespace>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__Namespace_k__BackingField, put=__cordl_internal_set__Namespace_k__BackingField)) ::StringW  _Namespace_k__BackingField;

/// @brief Field <Type>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__Type_k__BackingField, put=__cordl_internal_set__Type_k__BackingField)) ::StringW  _Type_k__BackingField;

/// @brief Field <Values>k__BackingField, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__Values_k__BackingField, put=__cordl_internal_set__Values_k__BackingField)) ::System::Collections::Generic::List_1<::Meta::Conduit::WitKeyword*>*  _Values_k__BackingField;

/// @brief [Preserve]
 __declspec(property(get=get_ID, put=set_ID)) ::StringW  _cordl_ID;

/// @brief Method Equals, addr 0x9e21cc8, size 0x8c, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x9e21d54, size 0xcc, virtual false, abstract: false, final false
inline bool Equals(::Meta::Conduit::ManifestEntity*  other) ;

/// @brief Method GetHashCode, addr 0x9e21e20, size 0xf8, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief [Preserve]
static inline ::Meta::Conduit::ManifestEntity* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get__Assembly_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Assembly_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__ID_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__ID_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__Name_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Name_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__Namespace_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Namespace_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__Type_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Type_k__BackingField() ;

constexpr ::System::Collections::Generic::List_1<::Meta::Conduit::WitKeyword*>* const& __cordl_internal_get__Values_k__BackingField() const;

constexpr ::System::Collections::Generic::List_1<::Meta::Conduit::WitKeyword*>*& __cordl_internal_get__Values_k__BackingField() ;

constexpr void __cordl_internal_set__Assembly_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__ID_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__Name_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__Namespace_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__Type_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__Values_k__BackingField(::System::Collections::Generic::List_1<::Meta::Conduit::WitKeyword*>*  value) ;

/// [Preserve]
/// @brief Method .ctor, addr 0x9e21be0, size 0x88, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_Assembly, addr 0x9e21cb8, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Assembly() ;

/// [CompilerGenerated]
/// @brief Method get_ID, addr 0x9e21c68, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_ID() ;

/// [CompilerGenerated]
/// @brief Method get_Name, addr 0x9e21c98, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Name() ;

/// [CompilerGenerated]
/// @brief Method get_Namespace, addr 0x9e21c78, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Namespace() ;

/// [CompilerGenerated]
/// @brief Method get_Type, addr 0x9e21c88, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Type() ;

/// [CompilerGenerated]
/// @brief Method get_Values, addr 0x9e21ca8, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::Meta::Conduit::WitKeyword*>* get_Values() ;

/// [CompilerGenerated]
/// @brief Method set_Assembly, addr 0x9e21cc0, size 0x8, virtual false, abstract: false, final false
inline void set_Assembly(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_ID, addr 0x9e21c70, size 0x8, virtual false, abstract: false, final false
inline void set_ID(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_Name, addr 0x9e21ca0, size 0x8, virtual false, abstract: false, final false
inline void set_Name(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_Namespace, addr 0x9e21c80, size 0x8, virtual false, abstract: false, final false
inline void set_Namespace(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_Type, addr 0x9e21c90, size 0x8, virtual false, abstract: false, final false
inline void set_Type(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_Values, addr 0x9e21cb0, size 0x8, virtual false, abstract: false, final false
inline void set_Values(::System::Collections::Generic::List_1<::Meta::Conduit::WitKeyword*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ManifestEntity() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ManifestEntity", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ManifestEntity(ManifestEntity && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ManifestEntity", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ManifestEntity(ManifestEntity const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25418};

/// [CompilerGenerated]
/// @brief Field <ID>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____ID_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Namespace>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::StringW  ____Namespace_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Type>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::StringW  ____Type_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Name>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::StringW  ____Name_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Values>k__BackingField, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Meta::Conduit::WitKeyword*>*  ____Values_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Assembly>k__BackingField, offset: 0x38, size: 0x8, def value: None
 ::StringW  ____Assembly_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::Conduit::ManifestEntity, ____ID_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::Conduit::ManifestEntity, ____Namespace_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::Conduit::ManifestEntity, ____Type_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::Conduit::ManifestEntity, ____Name_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::Conduit::ManifestEntity, ____Values_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Meta::Conduit::ManifestEntity, ____Assembly_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Meta::Conduit::ManifestEntity) == 0x40, "Size mismatch!");

} // namespace end def Meta::Conduit
