#pragma once
// IWYU pragma private; include "UnityEngine/Localization/PropertyVariants/CustomTrackedObjectAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(CustomTrackedObjectAttribute)
namespace System {
class Type;
}
// Forward declare root types
namespace UnityEngine::Localization::PropertyVariants {
class CustomTrackedObjectAttribute;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::PropertyVariants::CustomTrackedObjectAttribute*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::PropertyVariants::CustomTrackedObjectAttribute*, "UnityEngine.Localization.PropertyVariants", "CustomTrackedObjectAttribute");
// [AttributeUsage((System.AttributeTargets)4)]
// Dependencies System.Attribute
namespace UnityEngine::Localization::PropertyVariants {
// Is value type: false
// CS Name: UnityEngine.Localization.PropertyVariants.CustomTrackedObjectAttribute
class CORDL_TYPE CustomTrackedObjectAttribute : public ::System::Attribute {
public:
// Declarations
 __declspec(property(get=get_ObjectType)) ::System::Type*  ObjectType;

 __declspec(property(get=get_SupportsInheritedTypes)) bool  SupportsInheritedTypes;

/// @brief Field <ObjectType>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__ObjectType_k__BackingField, put=__cordl_internal_set__ObjectType_k__BackingField)) ::System::Type*  _ObjectType_k__BackingField;

/// @brief Field <SupportsInheritedTypes>k__BackingField, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get__SupportsInheritedTypes_k__BackingField, put=__cordl_internal_set__SupportsInheritedTypes_k__BackingField)) bool  _SupportsInheritedTypes_k__BackingField;

static inline ::UnityEngine::Localization::PropertyVariants::CustomTrackedObjectAttribute* New_ctor(::System::Type*  type, bool  supportsInheritedTypes) ;

constexpr ::System::Type* const& __cordl_internal_get__ObjectType_k__BackingField() const;

constexpr ::System::Type*& __cordl_internal_get__ObjectType_k__BackingField() ;

constexpr bool const& __cordl_internal_get__SupportsInheritedTypes_k__BackingField() const;

constexpr bool& __cordl_internal_get__SupportsInheritedTypes_k__BackingField() ;

constexpr void __cordl_internal_set__ObjectType_k__BackingField(::System::Type*  value) ;

constexpr void __cordl_internal_set__SupportsInheritedTypes_k__BackingField(bool  value) ;

/// @brief Method .ctor, addr 0xb05155c, size 0x3c, virtual false, abstract: false, final false
inline void _ctor(::System::Type*  type, bool  supportsInheritedTypes) ;

/// [CompilerGenerated]
/// @brief Method get_ObjectType, addr 0xb05154c, size 0x8, virtual false, abstract: false, final false
inline ::System::Type* get_ObjectType() ;

/// [CompilerGenerated]
/// @brief Method get_SupportsInheritedTypes, addr 0xb051554, size 0x8, virtual false, abstract: false, final false
inline bool get_SupportsInheritedTypes() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CustomTrackedObjectAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CustomTrackedObjectAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomTrackedObjectAttribute(CustomTrackedObjectAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomTrackedObjectAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomTrackedObjectAttribute(CustomTrackedObjectAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25348};

/// [CompilerGenerated]
/// @brief Field <ObjectType>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::System::Type*  ____ObjectType_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <SupportsInheritedTypes>k__BackingField, offset: 0x18, size: 0x1, def value: None
 bool  ____SupportsInheritedTypes_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Localization::PropertyVariants::CustomTrackedObjectAttribute, ____ObjectType_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::PropertyVariants::CustomTrackedObjectAttribute, ____SupportsInheritedTypes_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Localization::PropertyVariants::CustomTrackedObjectAttribute) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine::Localization::PropertyVariants
