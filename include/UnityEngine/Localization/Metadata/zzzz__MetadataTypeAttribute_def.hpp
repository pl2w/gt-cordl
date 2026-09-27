#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Metadata/MetadataTypeAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Localization/Metadata/zzzz__MetadataType_def.hpp"
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
CORDL_MODULE_EXPORT(MetadataTypeAttribute)
namespace UnityEngine::Localization::Metadata {
struct MetadataType;
}
// Forward declare root types
namespace UnityEngine::Localization::Metadata {
class MetadataTypeAttribute;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::Metadata::MetadataTypeAttribute*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::Metadata::MetadataTypeAttribute*, "UnityEngine.Localization.Metadata", "MetadataTypeAttribute");
// [AttributeUsage((System.AttributeTargets)256)]
// Dependencies UnityEngine.Localization.Metadata.MetadataType, UnityEngine.PropertyAttribute
namespace UnityEngine::Localization::Metadata {
// Is value type: false
// CS Name: UnityEngine.Localization.Metadata.MetadataTypeAttribute
class CORDL_TYPE MetadataTypeAttribute : public ::UnityEngine::PropertyAttribute {
public:
// Declarations
 __declspec(property(get=get_Type, put=set_Type)) ::UnityEngine::Localization::Metadata::MetadataType  Type;

/// @brief Field <Type>k__BackingField, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__Type_k__BackingField, put=__cordl_internal_set__Type_k__BackingField)) ::UnityEngine::Localization::Metadata::MetadataType  _Type_k__BackingField;

static inline ::UnityEngine::Localization::Metadata::MetadataTypeAttribute* New_ctor(::UnityEngine::Localization::Metadata::MetadataType  type) ;

constexpr ::UnityEngine::Localization::Metadata::MetadataType const& __cordl_internal_get__Type_k__BackingField() const;

constexpr ::UnityEngine::Localization::Metadata::MetadataType& __cordl_internal_get__Type_k__BackingField() ;

constexpr void __cordl_internal_set__Type_k__BackingField(::UnityEngine::Localization::Metadata::MetadataType  value) ;

/// @brief Method .ctor, addr 0xb04f5d8, size 0x28, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Localization::Metadata::MetadataType  type) ;

/// [CompilerGenerated]
/// @brief Method get_Type, addr 0xb04f5c8, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Localization::Metadata::MetadataType get_Type() ;

/// [CompilerGenerated]
/// @brief Method set_Type, addr 0xb04f5d0, size 0x8, virtual false, abstract: false, final false
inline void set_Type(::UnityEngine::Localization::Metadata::MetadataType  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MetadataTypeAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MetadataTypeAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MetadataTypeAttribute(MetadataTypeAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MetadataTypeAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MetadataTypeAttribute(MetadataTypeAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25327};

/// [CompilerGenerated]
/// @brief Field <Type>k__BackingField, offset: 0x18, size: 0x4, def value: None
 ::UnityEngine::Localization::Metadata::MetadataType  ____Type_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Localization::Metadata::MetadataTypeAttribute, ____Type_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Localization::Metadata::MetadataTypeAttribute) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine::Localization::Metadata
