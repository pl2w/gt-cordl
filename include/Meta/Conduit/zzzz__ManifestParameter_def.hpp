#pragma once
// IWYU pragma private; include "Meta/Conduit/ManifestParameter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ManifestParameter)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Meta::Conduit {
class ManifestParameter;
}
// Write type traits
MARK_REF_T(::Meta::Conduit::ManifestParameter*);
DEFINE_IL2CPP_CLASS(::Meta::Conduit::ManifestParameter*, "Meta.Conduit", "ManifestParameter");
// Dependencies System.Object
namespace Meta::Conduit {
// Is value type: false
// CS Name: Meta.Conduit.ManifestParameter
class CORDL_TYPE ManifestParameter : public ::System::Object {
public:
// Declarations
/// @brief [Preserve]
 __declspec(property(get=get_Aliases, put=set_Aliases)) ::System::Collections::Generic::List_1<::StringW>*  Aliases;

/// @brief [JsonIgnore]
 __declspec(property(get=get_EntityType)) ::StringW  EntityType;

/// @brief [Preserve]
 __declspec(property(get=get_Examples, put=set_Examples)) ::System::Collections::Generic::List_1<::StringW>*  Examples;

/// @brief [Preserve]
 __declspec(property(get=get_InternalName, put=set_InternalName)) ::StringW  InternalName;

/// @brief [Preserve]
 __declspec(property(get=get_Name, put=set_Name)) ::StringW  Name;

/// @brief [Preserve]
 __declspec(property(get=get_QualifiedName, put=set_QualifiedName)) ::StringW  QualifiedName;

/// @brief [Preserve]
 __declspec(property(get=get_QualifiedTypeName, put=set_QualifiedTypeName)) ::StringW  QualifiedTypeName;

/// @brief [Preserve]
 __declspec(property(get=get_TypeAssembly, put=set_TypeAssembly)) ::StringW  TypeAssembly;

/// @brief Field <Aliases>k__BackingField, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__Aliases_k__BackingField, put=__cordl_internal_set__Aliases_k__BackingField)) ::System::Collections::Generic::List_1<::StringW>*  _Aliases_k__BackingField;

/// @brief Field <Examples>k__BackingField, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__Examples_k__BackingField, put=__cordl_internal_set__Examples_k__BackingField)) ::System::Collections::Generic::List_1<::StringW>*  _Examples_k__BackingField;

/// @brief Field <InternalName>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__InternalName_k__BackingField, put=__cordl_internal_set__InternalName_k__BackingField)) ::StringW  _InternalName_k__BackingField;

/// @brief Field <QualifiedName>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__QualifiedName_k__BackingField, put=__cordl_internal_set__QualifiedName_k__BackingField)) ::StringW  _QualifiedName_k__BackingField;

/// @brief Field <QualifiedTypeName>k__BackingField, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__QualifiedTypeName_k__BackingField, put=__cordl_internal_set__QualifiedTypeName_k__BackingField)) ::StringW  _QualifiedTypeName_k__BackingField;

/// @brief Field <TypeAssembly>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__TypeAssembly_k__BackingField, put=__cordl_internal_set__TypeAssembly_k__BackingField)) ::StringW  _TypeAssembly_k__BackingField;

/// @brief Field _name, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__name, put=__cordl_internal_set__name)) ::StringW  _name;

/// @brief Method Equals, addr 0x9e23368, size 0x8c, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x9e233f4, size 0xe0, virtual false, abstract: false, final false
inline bool Equals(::Meta::Conduit::ManifestParameter*  other) ;

/// @brief Method GetHashCode, addr 0x9e234d4, size 0xf8, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief [Preserve]
static inline ::Meta::Conduit::ManifestParameter* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get__Aliases_k__BackingField() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get__Aliases_k__BackingField() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get__Examples_k__BackingField() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get__Examples_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__InternalName_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__InternalName_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__QualifiedName_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__QualifiedName_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__QualifiedTypeName_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__QualifiedTypeName_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__TypeAssembly_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__TypeAssembly_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__name() const;

constexpr ::StringW& __cordl_internal_get__name() ;

constexpr void __cordl_internal_set__Aliases_k__BackingField(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr void __cordl_internal_set__Examples_k__BackingField(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr void __cordl_internal_set__InternalName_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__QualifiedName_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__QualifiedTypeName_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__TypeAssembly_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__name(::StringW  value) ;

/// [Preserve]
/// @brief Method .ctor, addr 0x9e23214, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_Aliases, addr 0x9e23348, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::StringW>* get_Aliases() ;

/// @brief Method get_EntityType, addr 0x9e232b4, size 0x74, virtual false, abstract: false, final false
inline ::StringW get_EntityType() ;

/// [CompilerGenerated]
/// @brief Method get_Examples, addr 0x9e23358, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::StringW>* get_Examples() ;

/// [CompilerGenerated]
/// @brief Method get_InternalName, addr 0x9e23294, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_InternalName() ;

/// @brief Method get_Name, addr 0x9e2321c, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Name() ;

/// [CompilerGenerated]
/// @brief Method get_QualifiedName, addr 0x9e232a4, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_QualifiedName() ;

/// [CompilerGenerated]
/// @brief Method get_QualifiedTypeName, addr 0x9e23338, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_QualifiedTypeName() ;

/// [CompilerGenerated]
/// @brief Method get_TypeAssembly, addr 0x9e23328, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_TypeAssembly() ;

/// [CompilerGenerated]
/// @brief Method set_Aliases, addr 0x9e23350, size 0x8, virtual false, abstract: false, final false
inline void set_Aliases(::System::Collections::Generic::List_1<::StringW>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_Examples, addr 0x9e23360, size 0x8, virtual false, abstract: false, final false
inline void set_Examples(::System::Collections::Generic::List_1<::StringW>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_InternalName, addr 0x9e2329c, size 0x8, virtual false, abstract: false, final false
inline void set_InternalName(::StringW  value) ;

/// @brief Method set_Name, addr 0x9e23224, size 0x70, virtual false, abstract: false, final false
inline void set_Name(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_QualifiedName, addr 0x9e232ac, size 0x8, virtual false, abstract: false, final false
inline void set_QualifiedName(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_QualifiedTypeName, addr 0x9e23340, size 0x8, virtual false, abstract: false, final false
inline void set_QualifiedTypeName(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_TypeAssembly, addr 0x9e23330, size 0x8, virtual false, abstract: false, final false
inline void set_TypeAssembly(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ManifestParameter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ManifestParameter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ManifestParameter(ManifestParameter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ManifestParameter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ManifestParameter(ManifestParameter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25424};

/// @brief Field _name, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____name;

/// [CompilerGenerated]
/// @brief Field <InternalName>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::StringW  ____InternalName_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <QualifiedName>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::StringW  ____QualifiedName_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <TypeAssembly>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::StringW  ____TypeAssembly_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <QualifiedTypeName>k__BackingField, offset: 0x30, size: 0x8, def value: None
 ::StringW  ____QualifiedTypeName_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Aliases>k__BackingField, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ____Aliases_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Examples>k__BackingField, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ____Examples_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::Conduit::ManifestParameter, ____name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::Conduit::ManifestParameter, ____InternalName_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::Conduit::ManifestParameter, ____QualifiedName_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::Conduit::ManifestParameter, ____TypeAssembly_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::Conduit::ManifestParameter, ____QualifiedTypeName_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Meta::Conduit::ManifestParameter, ____Aliases_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Meta::Conduit::ManifestParameter, ____Examples_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(sizeof(::Meta::Conduit::ManifestParameter) == 0x48, "Size mismatch!");

} // namespace end def Meta::Conduit
