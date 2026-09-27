#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Metadata/MetadataAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "UnityEngine/Localization/Metadata/zzzz__MetadataType_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(MetadataAttribute)
namespace UnityEngine::Localization::Metadata {
struct MetadataType;
}
// Forward declare root types
namespace UnityEngine::Localization::Metadata {
class MetadataAttribute;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::Metadata::MetadataAttribute*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::Metadata::MetadataAttribute*, "UnityEngine.Localization.Metadata", "MetadataAttribute");
// [AttributeUsage((System.AttributeTargets)4)]
// Dependencies System.Attribute, UnityEngine.Localization.Metadata.MetadataType
namespace UnityEngine::Localization::Metadata {
// Is value type: false
// CS Name: UnityEngine.Localization.Metadata.MetadataAttribute
class CORDL_TYPE MetadataAttribute : public ::System::Attribute {
public:
// Declarations
 __declspec(property(get=get_AllowMultiple, put=set_AllowMultiple)) bool  AllowMultiple;

 __declspec(property(get=get_AllowedTypes, put=set_AllowedTypes)) ::UnityEngine::Localization::Metadata::MetadataType  AllowedTypes;

 __declspec(property(get=get_MenuItem, put=set_MenuItem)) ::StringW  MenuItem;

/// @brief Field <AllowMultiple>k__BackingField, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get__AllowMultiple_k__BackingField, put=__cordl_internal_set__AllowMultiple_k__BackingField)) bool  _AllowMultiple_k__BackingField;

/// @brief Field <AllowedTypes>k__BackingField, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get__AllowedTypes_k__BackingField, put=__cordl_internal_set__AllowedTypes_k__BackingField)) ::UnityEngine::Localization::Metadata::MetadataType  _AllowedTypes_k__BackingField;

/// @brief Field <MenuItem>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__MenuItem_k__BackingField, put=__cordl_internal_set__MenuItem_k__BackingField)) ::StringW  _MenuItem_k__BackingField;

static inline ::UnityEngine::Localization::Metadata::MetadataAttribute* New_ctor() ;

constexpr bool const& __cordl_internal_get__AllowMultiple_k__BackingField() const;

constexpr bool& __cordl_internal_get__AllowMultiple_k__BackingField() ;

constexpr ::UnityEngine::Localization::Metadata::MetadataType const& __cordl_internal_get__AllowedTypes_k__BackingField() const;

constexpr ::UnityEngine::Localization::Metadata::MetadataType& __cordl_internal_get__AllowedTypes_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__MenuItem_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__MenuItem_k__BackingField() ;

constexpr void __cordl_internal_set__AllowMultiple_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__AllowedTypes_k__BackingField(::UnityEngine::Localization::Metadata::MetadataType  value) ;

constexpr void __cordl_internal_set__MenuItem_k__BackingField(::StringW  value) ;

/// @brief Method .ctor, addr 0xb04f630, size 0x18, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_AllowMultiple, addr 0xb04f610, size 0x8, virtual false, abstract: false, final false
inline bool get_AllowMultiple() ;

/// [CompilerGenerated]
/// @brief Method get_AllowedTypes, addr 0xb04f620, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Localization::Metadata::MetadataType get_AllowedTypes() ;

/// [CompilerGenerated]
/// @brief Method get_MenuItem, addr 0xb04f600, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_MenuItem() ;

/// [CompilerGenerated]
/// @brief Method set_AllowMultiple, addr 0xb04f618, size 0x8, virtual false, abstract: false, final false
inline void set_AllowMultiple(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_AllowedTypes, addr 0xb04f628, size 0x8, virtual false, abstract: false, final false
inline void set_AllowedTypes(::UnityEngine::Localization::Metadata::MetadataType  value) ;

/// [CompilerGenerated]
/// @brief Method set_MenuItem, addr 0xb04f608, size 0x8, virtual false, abstract: false, final false
inline void set_MenuItem(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MetadataAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MetadataAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MetadataAttribute(MetadataAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MetadataAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MetadataAttribute(MetadataAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25328};

/// [CompilerGenerated]
/// @brief Field <MenuItem>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____MenuItem_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <AllowMultiple>k__BackingField, offset: 0x18, size: 0x1, def value: None
 bool  ____AllowMultiple_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <AllowedTypes>k__BackingField, offset: 0x1c, size: 0x4, def value: None
 ::UnityEngine::Localization::Metadata::MetadataType  ____AllowedTypes_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Localization::Metadata::MetadataAttribute, ____MenuItem_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::Metadata::MetadataAttribute, ____AllowMultiple_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::Metadata::MetadataAttribute, ____AllowedTypes_k__BackingField) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Localization::Metadata::MetadataAttribute) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine::Localization::Metadata
